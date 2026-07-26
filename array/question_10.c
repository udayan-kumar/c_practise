// MULTIPLY ODD INDEX BY 2 AND ADD 10 AT EVEN INDEX

#include <stdio.h>

int main(){
    int arr[] = {11,22,33,44,55};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i<n;i++){
        if(i%2==0){
            printf("%d " , arr[i]+10);
        }
        else
            printf("%d " , arr[i]*2);
    }

    return 0;

}