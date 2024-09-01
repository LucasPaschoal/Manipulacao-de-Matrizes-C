#include<stdio.h>
int main()
{
    int matrizA[4][3],matrizB[3][4],matrizR[4][4],i,j;
    printf("digite os valores da matriz A:\n");
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            scanf("%d",&matrizA[i][j]);
        }
        printf("\n");
    }
    printf("digite os valores da matriz B:\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&matrizB[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            matrizR[i][j]=matrizA[i][j]*matrizB[i][j];
            printf("%d  ",matrizR[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
