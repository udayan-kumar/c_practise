//! FIND COMMON ELEMENT FROM TWO ARRAY

#include <stdio.h>

int main(){
    int a[] = {1,2,3,4,5};
    int b[]  = {2,3,4,6,7,8};

    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);
    int i = 0; 
    int j = 0;

    while(i<n-1 && j<m-1){
        if(a[i]==b[j]){
            printf("%d", a[i]);
            i++;
            j++;
        }

        if(a[i]<b[j]) i++;
        if(a[i]>b[j]) j++;
        
        printf("\n");
    }
    return 0;

}