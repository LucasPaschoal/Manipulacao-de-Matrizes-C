#include<stdio.h>
int main()
{
    int matriz[3][3],i,j,dp,ds,dt;
    printf("digite os valores da matriz 3x3:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&matriz[i][j]);
        }
        printf("\n");
    }
    dp=((matriz[0][0]*matriz[1][1]*matriz[2][2])+(matriz[0][1]*matriz[1][2]*matriz[2][0])+(matriz[0][2]*matriz[1][0]*matriz[2][1]));
    ds=((matriz[0][1]*matriz[1][0]*matriz[2][2])+(matriz[0][0]*matriz[1][2]*matriz[2][1])+(matriz[0][2]*matriz[1][1]*matriz[2][0]));
    dt=dp-ds;
    printf("determinate = %d",dt);
    return 0;
}
