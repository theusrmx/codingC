//Entrada de 300 numeros, soma dos 100 primeiros, 101 a 200, 201 a 300

#include <stdio.h>

int main(){
    int num, soma100 = 0, soma200 = 0, soma300 = 0;

    for (int i = 0; i < 300; i++)
    {
        printf("Digite um numero (%d de 300): \n", i + 1);
        scanf("%d", &num);

        if (i <=100){
            soma100 += num;
        }else if (i > 100 && i <=200)
        {
            soma200 += num;
        }else if (i >200 && i <= 300)
        {
            soma300 += num;
        }

        
    }

    printf("Soma 1 a 100: %d\n", soma100);
    printf("Soma 101 a 200: %d\n", soma200);
    printf("Soma 201 a 300: %d\n", soma300);
    
    return 0;
}