// merge two array

#include <stdio.h>

int main(){
    int a[] = {2,5,6,9,20};
    int b[] = {1,3,4,5,7,8};

    int lengtha = sizeof(a)/sizeof(a[0]);
    int lengthb = sizeof(b)/sizeof(b[0]);

    int c[lengtha+lengthb] ;
    int lengthc = sizeof(c)/sizeof(c[0]);

    int i = 0,j=0,k=0;

    while(i<lengtha && j<lengthb){
        if(a[i]<=b[j]) c[k++] = a[i++];
        else 
        if(a[i]>b[j]) c[k++] = b[j++];
    }

    while(i<lengtha) c[k++] = a[i++];

    while(j<lengthb) c[k++] = b[j++];

    for(int i = 0; i<lengthc;i++){
        printf("%d " , c[i]);
    }
    return 0;
}