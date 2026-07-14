// bring all the zero int last

#include <stdio.h>

int main(){
    int arr[] = {9,8,0,1,0,4,2,5,7,2,9,5,4,6,6,2,0,1,9,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    int j = 0;
    for(int i = 0; i<n;i++){
        if(arr[i]!=0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
    for(int i = 0; i<n;i++){
        printf("%d " , arr[i]);
    }
    return 0;
}