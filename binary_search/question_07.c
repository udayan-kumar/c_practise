//* FIND THE SQARE ROOT OF THE ELEMENT

#include <stdio.h>

int main(){
    int n = 25;
    int low = 1;
    int high = n;

    while(low < high){
        int mid = (low + high)/2;

        if(mid * mid < n) low = mid + 1;
        else if(mid * mid > n) high = mid - 1;
        
    }
    printf("%d" , high);
    return 0;
}