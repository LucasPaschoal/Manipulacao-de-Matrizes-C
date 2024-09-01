#include <stdio.h>
int main()
{
    int matriz[6][6],i,j,s;
    float m;
    for ( i=0; i<6; i++ ){
       for ( j=0; j<6; j++ )
        {
            scanf ("%d", &matriz[ i ][ j ]);
        }
    }
    m=((matriz[0][0]+matriz[1][1]+matriz[2][2]+matriz[3][3]+matriz[4][4]+matriz[5][5])/2);
    printf("media = %f",m);
    s=matriz[0][5]+matriz[1][4]+matriz[2][3]+matriz[3][2]+matriz[4][1]+matriz[5][0];
    printf("soma=%d",s);
}
