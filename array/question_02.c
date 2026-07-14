// find the maximum element in the array

#include <stdio.h>

int main(){
    int arr[] = {9,8,0,1,0,4,2,5,7,2,9,5,13,4,6,6,2,0,1,9,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max = arr[0];

    for(int i = 0; i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("%d" , max);
    return 0 ;
}