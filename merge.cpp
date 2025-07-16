#include<iostream>

using namespace std;



void merge(int* arr,int low,int mid,int high){

    int *temp;
    int left = low;
    int right = mid + 1;
    int j=0;

    while(low<=left && right<=high){
        if(arr[low]<=arr[high]){
            temp[j++] = arr[low];
            left++;

        }
        else{
            temp[j++] = arr[high];
            right++;
        }
    }

    while(low <= left){
         temp[j++] = arr[low];
            left++;
    }

    while(right <= high){
        temp[j++] = arr[high];
            right++;
    }

    for(int i=low; i<high ; i++){
        arr[i] = temp[i - low];
    }
}

void mergesort(int* arr,int low,int high){
    if(low>=high) return;
    int mid = (low + high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);

    merge(arr,low,mid,high);
}

int main(){
    int arr[5] = {2,5,6,7,1};
    mergesort(arr,0,4);

    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}