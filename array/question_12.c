// ROTATE THE ARRAY

#include <stdio.h>

int main(){
    int arr[] = {11,2,3,4,56,64};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    int j = 3;

    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(int i = 0; i<n ; i++){
        printf("%d " , arr[i]);
    }
    return 0;

}