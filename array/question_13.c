// SEARCHING IN THE ARRAY

#include <stdio.h>

int main(){
    int arr[] = {11,22,3,34,54,34};
    int n = sizeof(arr)/sizeof(arr[0]);
    int found = -1;
    int target = 3;

    for(int i = 0; i<n ; i++){
        if(arr[i] == target) found = i;
    }
    printf("%d" , found);
    return 0;
}