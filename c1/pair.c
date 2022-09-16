#include <stdio.h>
#include <stdlib.h>

int main(){
    // int N;

    // printf("donner un nombre ");
    // scanf("%d",&N);

    // if(N % 2 == 0){
    //     printf("pair");
    // }
    // else{
    //     printf("impair");
    // }
    
    int n,i;
    scanf("%d",&n);

    for(i=1; i<=10; i++){
        printf("%d",n*i);
        printf("\n");
    }
}