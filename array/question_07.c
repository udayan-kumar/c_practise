//  FIND THE PRODUCT OF THE ARRAY

#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    int arrprodunct = 1;
    for(int i = 0;i<n;i++){
        arrprodunct = arrprodunct*arr[i];
    }
    printf("%d" , arrprodunct);
    return 0;

}