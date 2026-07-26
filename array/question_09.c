// FIND THE DUBLICATE IN THE ARRAY

#include <stdio.h>

int main(){
    int arr[] =  {1,2,3,4,5,6,6};
    int n = sizeof(arr)/sizeof(arr[0])-1;

    int sum = n*(n+1)/2;
    int arrsum = 0;

    for(int i = 0; i<n+1 ;i++){
        arrsum = arrsum + arr[i];
    }
    printf("%d" , arrsum - sum);
    return 0;
}