//! PRINT UNION OF THE TWO ARRAY

#include <stdio.h>

int main(){
    int a[] ={1,2,3,4,5};
    int b[] = {1,2,6,7,8};

    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);
    int i = 0;
    int j = 0;

    while(i<n && j<m){
        if(a[i]==b[j]){
            printf("%d ", a[i]);
            i++;
            j++;
        }
        else
            if(a[i]<b[j]){
                printf("%d ", a[i]);
                i++;
            }
        else 
            if(a[i]>b[j]){
                printf("%d ", b[j]);
                j++;
            }
        
    }
    while(j<m){
        printf("%d ", b[j]);
        j++;
    }

    while(i<n){
        printf("%d ", a[i]);
        i++;
    }
    
    return 0;


}