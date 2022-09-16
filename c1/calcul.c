#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int nbr1, nbr2, check;
    float x,y;
    char o;

    do{
        
        printf("\ndonner l'operateur : \n1: + \n2: - \n3: x \n4: / \n");
        printf("5: x ^ y \n6: x ^ 2 \n7: % \n8: x \n9: X! \n");
        printf("10: sin \n11: cos \n12: tan \n0: Exit \n\n===>");
        scanf("%d",&o);
        
        system("cls");
        switch(o){
            case 1: 
                printf("donnre le premier nombre : ");
                scanf("%d",&nbr1);
                printf("donner le deuxieme nombre : ");
                scanf("%d",&nbr2);
                printf("Resultat : %d ",nbr1+nbr2);
                break;
            case 2: 
                printf("donnre le premier nombre : ");
                scanf("%d",&nbr1);
                printf("donner le deuxieme nombre : ");
                scanf("%d",&nbr2);
                printf("Resultat : %d ",nbr1-nbr2);
                break;
            case 3: 
                printf("donnre le premier nombre : ");
                scanf("%d",&nbr1);
                printf("donner le deuxieme nombre : ");
                scanf("%d",&nbr2);
                printf("Resultat : %d ",nbr1*nbr2);
                break;
            case 4: 
                printf("donnre le premier nombre : ");
                scanf("%d",&nbr1);
                printf("donner le deuxieme nombre : ");
                scanf("%d",&nbr2);
                if(nbr2 != 0)
                    printf("Resultat : %d ",nbr1/nbr2);
                break;
            case 5:    
                printf("donnre le premier nombre : ");
                scanf("%f", &x);
                printf("donner le deuxieme nombre : ");
                scanf("%f", &y);
                printf("\nResult: %f", pow(x, y));
                break;
            case 6:    
                printf("donnre un nombre : ");
                scanf("%f", &x);
                printf("\nResult: %f", pow(x, 2));
                break;    
            case 7: 
                printf("donnre le premier nombre : ");
                scanf("%d",&nbr1);
                printf("donner le deuxieme nombre : ");
                scanf("%d",&nbr2);
                printf("Resultat : %d ",nbr1 % nbr2);
                break;    
            case 8: 
                printf("donnre un nombre : ");
                scanf("%f",&x);
                printf("Resultat : %f ",sqrt(x));
                break;     
            case 9: 
                printf("donnre un nombre : ");
                scanf("%f",&x);
                int i,res=1;
                for(i=1; i<=x; i++){
                    res = res * i;
                }
                printf("Resultat : %d ",res);
                break; 
            case 10: 
                printf("donnre un nombre : ");
                scanf("%f",&x);
                printf("Resultat : %f ",1 / sin(x * 3.14159 / 180));
                break;
            case 11: 
                printf("donnre un nombre : ");
                scanf("%f",&x);
                printf("Resultat : %f ",1 / cos(x * 3.14159 / 180));
                break;
            case 12:
                printf("donner un nomber : ");
                scanf("%d",&x);
                printf("Resultat : %f",1 / tan(x * 3.14159 / 180));
                break;
            case 0:
                printf("Good By ^_^");
                break;
                
            default: printf("error");
            break;
        }

    }while(o!=0);
    
}



