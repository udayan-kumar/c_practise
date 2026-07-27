//* FIND THE INDEX OF THE MOUNTAIN IN THE GIVEN ARRAY

#include <stdio.h>

int main(){
    int arr[] = {-1,0,1,2,5,6,7,8,3};

    int low = 0;
    int high = sizeof(arr)/sizeof(arr[0]) - 1;

    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid-1] < arr[mid] && arr[mid+1] < arr[mid]){
            printf("%d" , mid);
            break;
        }
        else if(arr[mid] < arr[mid-1]) high = mid -1;
        else if(arr[mid] < arr[mid+1]) low = mid +1;
    }
    return 0;
}