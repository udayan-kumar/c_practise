//  FIND THE SECOND MAXIMUM OF THE ARRAY

#include <stdio.h>

int main(){
    int arr[] =  {11,22,34,52,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    int smax = arr[0];

    for(int i = 0 ; i<n ; i++){
        if(arr[i] > max) max = arr[i];
    }
    for(int i = 0; i<n ; i++){
        if(arr[i]>smax && arr[i]!=max){
            smax = arr[i];
        }
    }
    printf("%d" , smax);
    return 0;
}