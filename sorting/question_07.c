//! FIND THE TWO ELEMENT THAT'S SUM IS EQUAL TO TARGET ELEMENT

#include <stdio.h>

int main(){
    int arr[] = {1 ,2 ,3, 4, 5,  6, 7, 8 };

    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0; 
    int high = n-1;
    int target = 13;

    while(low<=high){
        if(arr[low]+arr[high]==target){
            printf("%d\n", arr[low]);
            printf("%d\n", arr[high]);
            break;
        }
        else
            if(arr[low]+arr[high]>target) high--;
        else
            if(arr[low]+arr[high]<target) low++;
    }
    return 0;
}