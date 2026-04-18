#include <stdio.h>

void swap(int *a, int *b);
int main (void)
{
    int valor1,valor2,copo;
    printf("Digite o numero:\n");
    scanf("%d %d",&valor1,&valor2);
    swap(&valor1,&valor2);
    printf("%d   %d",valor1,valor2);

}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}