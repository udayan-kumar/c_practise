//! MOVE ALL ZERO IN THE END OF THE ARRAY

#include <stdio.h>

int main(){
    int arr[] = {1,0,7,4,0,3,8,0,9};

    int n = sizeof(arr)/sizeof(arr[0]);

    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<n; j++){
    //         if(arr[j]==0){
    //             int temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //         }
    //     }
    // }

    int j = 0;

    for(int i = 0; i<n; i++){
        if(arr[i]!=0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    for(int i = 0; i<n; i++){
        printf("%d " , arr[i]);
    }
    return 0;
}