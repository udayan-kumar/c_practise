//* FIND THE MAXIMUM NUMBER OF POSITIVE NUMBER AND NEGATIVE NUMBER IN THE GIVEN ARRAY

#include <stdio.h>

int main(){
    int arr[] = {-3,-2,-1,-1,1,2,3,4,5};

    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0;
    int high = sizeof(arr)/sizeof(arr[0]) - 1;

    while(low<=high){
        int mid = (low + high)/2;

        if(arr[mid]>=0) high = mid - 1;
        else if(arr[mid]<0) low = mid + 1;
    }
    printf("%d\n" , low);
    printf("%d" , n - low);
    return 0;

}