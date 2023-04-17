#include <stdio.h>

int main(){


    int x = 10, y = 3;
    if(x < 10)
        printf("Saida 1");
    else
        if(y < 4)
            if(x > 10)
                printf("Saida 2");
            else printf("Saida 3");





    ///////////////////////////////////////////////////////

    int a = 2, b = 3, c = 4;

    if((a < 3) && ((b !=3) || (c == 4)))
        printf("Saida 1");

    if((c == 3) || (b == 4))
        printf("Saida 2");

    if((a < 3) && (b > 4))
        printf("Saida 3");
    else if(a == 2)
        if(b == 5)
            printf("Saida 4");
        else printf("Saida 5");


    return 0;
}
