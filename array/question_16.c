// TWO SUM OF THE ARRAY

#include <stdio.h>

int main(){
    int arr[] = {1,23,43,56,78};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 56;

    for(int i = 0 ; i<n; i++){
        for(int j = i+1; j<n ; j++){
            if(arr[i] + arr[j] == target){
                printf("%d" , arr[i]);
                break;
            }
        }
    }
    return 0;
}