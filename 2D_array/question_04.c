#include <stdio.h>

int main(){
    int  arr[5][4] = {{1,2,3,4}, {5,6,7,8},{9,10,11,12}, {13,14,15,16}, {17,18,19,20}};
    int n = 5;
   
    for(int i = 4; i>=0; i--){
        for(int j = 3; j>=0; j--){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}