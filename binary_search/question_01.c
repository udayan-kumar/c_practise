//* SEARCH THE TARGET ELEMENT IN THE GIVEN DISCENDING ORDER ARRAY

#include <stdio.h>

int main(){
    int arr[] = {9,8,7,6,5,4,3,2,1};
    int low = 0;
    int high = sizeof(arr)/sizeof(arr[0])-1;
    int target = 6;
    int index = -1;

    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid]<target) high = mid -1;
        else if(arr[mid]>target) low = mid +1;
        else if(arr[mid] == target){
            index = mid;
            high = mid -1;
        }
    }
    printf("%d" , index);
    return 0;
}