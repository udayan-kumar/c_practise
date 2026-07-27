//* FIND THE INDEX OF FIRST OCCURANCE IN THE SORTED ARRAY

#include <stdio.h>

int main(){
    int arr[] = {1,1,2,2,2,3,4,5,5,5,6,7,8,11};
    int low = 0;
    int high = sizeof(arr)/sizeof(arr[0])-1;
    int target = 5;
    int index = -1;

    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid] < target) low = mid + 1;
        else if(arr[mid] > target) high = mid - 1;
        else if(arr[mid] == target){
            index = mid;
            high = mid - 1;
        }
    }
    printf("%d" , index);
    return 0;
}