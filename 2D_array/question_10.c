//! PRINT 2D ARRAY IN SPIRAL PATTERN

#include <stdio.h>

int main(){
    int arr[4][4] = {{1,2,3,4}, {5,6,7,8},{9,10,11,12}, {13,14,15,16}};

    int row = 4;
    int col = 4;
    int top = 0;
    int bottom = 3;
    int left = 0;
    int right = 3;
    

    while(top<=bottom && left<=right){
        // left to right
        for(int i = left; i<=right; i++){
            printf("%d " , arr[top][i]);
        }
            top++;


        if(top>bottom || left>right) break;

        // top to bottom
        for(int i = top; i<=bottom; i++){
            printf("%d " , arr[i][right]);
        }
            right--;


        if(left>right || top>bottom) break;

        // right to left
        for(int i = right; i>=left; i--){
            printf("%d " , arr[bottom][i]);
        }
            bottom--;


        if(left>right || top>bottom) break;;

        // bottom to top
        for(int i = bottom; i>=top; i--){
            printf("%d " , arr[i][left]);
        }
            left++;


        if(left>right || top>bottom) break;
    }
    return 0;
}