#include<stdio.h>
#include<stdlib.h>
int main()
{
    float N[5];
    float Maior = 5, Menor = 10 ;
    int indice_maior, indice_menor;
    int i;
    float R = 0;
    
    for(i=0;i<5;i++)
    {
                    scanf("%f", &N[i]);
                    if(N[i] > Maior)
                    {
                            Maior = N[i];
                            indice_maior = i;
                    }
                   
                    if(N[i] < Menor)
                    {
                            Menor = N[i];
                            indice_menor = i;
                    }
    }
    
    N[indice_maior] = 0;
    N[indice_menor] = 0;
    
    for(i=0; i<5;i++)
    {
             if(N[i] != 0)
                     R += N[i];
    
    }
    printf("%.1f",R);
    return 0;
}
    
