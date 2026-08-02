//! INSERTION SORT

#include <stdio.h>

int main(){
    int arr[] = {1,0,7,4,0,3,8,0,9};

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i<n; i++){
        int j = i;
        while(j>0 && arr[j]<arr[j-1]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }

    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}