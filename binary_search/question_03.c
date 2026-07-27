//* FIND THE INDEX OF FLOOR OF THE TARGET OF THE GIVEN ARRAY

#include <stdio.h>

int main(){
    int arr[] = {1,2,8,10,10,12,19};
    int low = 0;
    int high = sizeof(arr)/sizeof(arr[0])-1;
    int target = 5;
    int index = -1;

    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid] > target) high = mid - 1;
        else if(arr[mid] <= target){
            index = mid;
            low = mid + 1;
        }
    }
    printf("%d" , index);
    return 0;
}