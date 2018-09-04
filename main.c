#include <stdio.h>
#include <stdlib.h>

void puntero(int*, int );

int main()
{
    int p=10;
    int q=20;

    puntero(&p,q);

    printf("Cuanto vale p y q?\n");
    system("pause");
    printf("\np=%d\n", p);
    printf("q=%d", q);
    return 0;
}

void puntero(int* a, int b)
{
    *a=b+5;
    b=9;
}
