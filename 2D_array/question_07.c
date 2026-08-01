//! SEARCH THE TARGET ELEMENT IN THE 2D ARRAY

#include <stdio.h>

int main(){
    int arr[4][4] = {{1,2,3,4}, {5,6,7,8},{9,10,11,12}, {13,14,15,16}};

    int target = 130;

    // for(int i = 0; i<4; i++){
    //     for(int j = 0; j<4; j++){
    //         if(arr[i][j] == target){
    //             printf("true");
    //             break;
    //         }
    //     }
    // }

    int i = 0;
    int j = 3;

    while(i<4 && j>=0){
        if(arr[i][j]>target) j--;
        else 
            if(arr[i][j]<target) i++;
        else 
            if(arr[i][j] == target){
                printf("true");
                break;
            }
    }
    return 0;
}