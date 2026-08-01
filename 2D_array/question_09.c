//! PRINT 2D ARRAY IN THE SNAKE PATTERN IN THE ROW WISE WAY
#include <stdio.h>

int main(){
    int arr[5][4] = {{1,2,3,4}, {5,6,7,8},{9,10,11,12}, {13,14,15,16}, {17,18,19,20}};

    for(int i = 0; i<5; i++){
        if(i%2 == 0){
            for(int j = 0; j<4; j++){
                printf("%d " , arr[i][j]);
            }
        }
        else{
            for(int j = 3; j>=0; j--){
                printf("%d " , arr[i][j]);
            }
        }
        printf("\n");
            
    }
    return 0;
}