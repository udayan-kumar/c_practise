// MERGE TWO ARRAY IN REVERSE ORDER

#include <stdio.h>

int main(){
    int a[] = {2,5,6,9,20};
    int b[] = {1,3,4,5,7,8};

    int length1 = sizeof(a)/sizeof(a[0]);
    int length2 = sizeof(b)/sizeof(b[0]);

    int c[length1 + length2];
    int length3 = sizeof(c)/sizeof(c[0]);

    int i = length1-1,j = length2-1, k = length3-1;

     while(i<length1-1 && j<length2-1){
        if(a[i] < b[j]) c[k--] = a[i--];
        else if(a[i]>b[j])
            c[k--] = b[j--];
     }
     while(i<length1-1) c[k--] = a[i--];
     while(j<length2-1) c[k--] = b[j--];

     for(int i = 0; i<length3 ; i++){
        printf("%d" , c[i]);
     }
     return 0;
}