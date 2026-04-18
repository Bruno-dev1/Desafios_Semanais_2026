#include <stdio.h>
void multiplica (float n[],float p[],float r[]);

int main (void)
{
    float notas[3];
    float pesos[3];
    float resp[3];
    for(int i = 0;i < 3; i++)
    {
        
        printf("Nota numero %d\n", i+1);
        scanf("%f",&notas[i]);
    }
     for(int i = 0;i < 3; i++)
    {
        
        printf("Peso numero %d\n", i+1);
        scanf("%f",&pesos[i]);
    }
    multiplica(notas,pesos,resp);
    
    printf("Notas:");
    for (int i = 0; i < 3; i++) {
        printf("%.2f ", resp[i]); 
    }


    
}
void multiplica (float n[],float p[],float r[])
{
    for ( int i = 0; i < 3;i++)
    {
        r[i] = n[i]*p[i];
    }
}