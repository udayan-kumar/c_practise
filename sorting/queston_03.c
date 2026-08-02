//! CHECK SORTING??

#include <stdio.h>

int main(){
    int arr[] = {1 ,2, 3, 3, 4, 5, 5, 6, 7,8 };

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int  i = 0; i<n-1; i++){
        if(arr[i]<arr[i+1]){
            printf("true");
        }
        else
            printf("false");
            break;
    }
    return 0;
}