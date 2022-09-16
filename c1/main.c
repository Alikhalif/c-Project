#include <stdio.h>
#include <stdlib.h>

int main()
{

    //int i, j, N, C;

    /*
    printf("donner le nomber ligne : ");
    scanf("%d",&N);

    for(i=1; i<N; i++){
        for(j=1; j<i; j++){
            printf("* ");
        }
        printf("\n");
    }
    */

    /*
    printf("donner le nomber ligne : ");
    scanf("%d",&N);

    for(i=1; i<=N; i++){
        for(j=1; j<=N-i; j++){
            printf("  ");
        }
        for(j=1; j<=N; j++){
            printf("* ");
        }
        printf("\n");
    }
    */

    /*

    * * * * * * * *
    *             *
    *             *
    *             *
    * * * * * * * *

    printf("donner le nomber de ligne : ");
    scanf("%d",&N);
    printf("donner le nomber de column : ");
    scanf("%d",&C);

    for(i=1; i<=N; i++){
        for(j=1; j<=C; j++){
            if(i==1 || i==N || j==C || j==1)
               printf("* ");
            else
               printf("  ");
        }
        printf("\n");
    }

    */

    /*

    printf("donner le nomber de ligne : ");
    scanf("%d",&N);
    printf("donner le nomber de ligne : ");
    scanf("%d",&C);

    for(i=1; i<=N; i++){
        for(j=1; j<=N-i; j++){
            printf("  ");
        }
        for(j=1; j<=(i*2-1); j++){
            if(i==1 || j==1 || i==N || j==(i*2-1))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }



    return 0;
    */

    int N;

    printf("donner nomber de jour : ");
    scanf("%d",&N);


    switch(N){
        case 1 :
            printf("lundi");
            break;
        case 2 :
            printf("mardi");
            break;
        case 3 :
            printf("mercredi");
            break;
        case 4 :
            printf("jeudi");
            break;
        case 5 :
            printf("vendredi");
            break;
        case 6 :
            printf("samedi");
            break;
        case 7 :
            printf("dimanche");
            break;
        default:
            printf("Donnez le bon numéro ");
            break;
    }


    return 0;
}
