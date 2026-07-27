//* FIND THE LAST OCCURANCE OF THE TARGET IN THE GIVEN ARRAY

#include <stdio.h>

int main(){
    int arr[] = {1,3,5,5,5,5,67,123,125};
    int low = 0;
    int high = sizeof(arr)/sizeof(arr[0])-1;
    int target = 5;
    int index = -1;

    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid]<target) low = mid + 1;
        else if(arr[mid] > target) high = mid - 1;
        else if(arr[mid] == target){
            index = mid;
            low = mid + 1;
        }
    }
    printf("%d" , index);
    return 0;
}