//  FIND MINMUM ELEMENT IN THE ARRAY

#include <stdio.h>

int main(){
    int arr[] = {2,5,4,9,1,8,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int min = arr[0];

    for(int i = 0; i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("%d" , min);
    return 0 ;
}