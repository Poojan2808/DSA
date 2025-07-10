void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int arr[m+n];

    int i=0;
    int j=0;
    int k=0;

    while(i<m && j<n){
        if(nums1[i]<=nums2[j]){
            arr[k] = nums1[i];
            i++;
        }
        else{
            arr[k] = nums2[j];
            j++;
        }
        k++;
    }

    while(i<m){
        arr[k] = nums1[i];
        k++;
        i++;
    }

     while(j<n){
        arr[k] = nums2[j];
        k++;
        j++;
    }

    for(int i=0;i<(m+n);i++){
        nums1[i]=arr[i];
    }
}