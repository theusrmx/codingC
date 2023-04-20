//Faça  um  algoritmo  que  leia  dois  valores  inteiros  A  e  B  se  os  valores  forem  iguais  deverá  sesomar  os  dois,  caso  contrário  multiplique  A  por  B.  
//Ao  final  de  qualquer  um  dos  cálculos  deve-se  atribuir o resultado para uma variável C e mostrar seu conteúdo na tela. 

#include <stdio.h>

int main(){
    int a, b, c;

    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite outro numero: ");
    scanf("%d", &b);

    if(a == b){
        c = a + b;
        printf("O resultado da soma eh: %d ", c);
    }else{
        c = a * b;
        printf("O resultado da multiplicacao eh: %d ", c);
    }

    



    return 0;
}
