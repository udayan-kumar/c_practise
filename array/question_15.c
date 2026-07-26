// SEGREGATE OF THE ZEROS

#include <stdio.h>

int main(){
    int arr[] = {0,1,3,0,5,0,0,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i<n ; i++){
        if(arr[i] == 0){
            printf("%d " , arr[i]);
        }
    }
    for(int i =0; i<n ; i++){
        if(arr[i]!=0){
            printf("%d " , arr[i]);
        }
    }
    return 0;

}