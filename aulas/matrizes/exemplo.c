#include <stdio.h>

int main(){
 
        //linha ccoluna
 float m[3][4];
 int i, j;
 for (i=0; i<3; i++)
 for (j=0; j<4; j++)
 scanf("%f", &m[i][j]);
 for (i=0; i<3; i++)
 {
 for (j=0; j<4; j++)
 printf("%10.2f", m[i][j]);
 printf("\n");
 }

}
