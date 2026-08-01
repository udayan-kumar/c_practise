//! FIND THE MAXIMUM SUM OF THE ROW

#include <stdio.h>

int main(){
    int arr[5][4] = {{1,2,3,4}, {5,6,7,8},{9,10,11,12}, {13,14,15,16}, {17,18,19,20}};

    int max = 0;
    int row = -1;

    for(int i = 0; i<5; i++){
        int sum = 0;
        for(int j = 0; j<4; j++){
            sum += arr[i][j];
            if(sum>max){
                max = sum;
                row = i;
            }
        }
    }
    printf("%d , %d" , row, max);
    return 0;
}