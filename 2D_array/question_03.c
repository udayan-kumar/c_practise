//! MULTIPLY TWO 2D ARRAY

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[5][4] = {{1,2,3,4}, {5,6,7,8},{9,10,11,12}, {13,14,15,16}};
        
    int b[5][4] = {{1,2,3,4}, {5,6,7,8},{9,10,11,12}, {13,14,15,16}};

    int n = 4;

    int c[5][4] = {0};
    int ans[16];
    int index = 0;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            for(int k = 0; k<n; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
            ans[index] = c[i][j];
            index++;
        }
    }

    for(int i =0; i<16; i++){
        printf("%d " , ans[i]);
    }
    
    return 0;
}