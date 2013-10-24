#include<stdio.h>

 main()
{
    int notas[3],maior,menor,i;

    scanf("%d %d %d",&notas[0],&notas[1],&notas[2]);

    menor=notas[0];
    for(i=0;i<3;i++)
    {
        if(notas[i]<menor)
            menor=notas[i];
    }

    maior=notas[0];
    for(i=0;i<3;i++)
    {
        if(notas[i]>maior)
            maior=notas[i];
    }

    if((notas[0]!=menor)&&(notas[0]!=maior))
        printf("%d",notas[0]);
    if((notas[1]!=menor)&&(notas[1]!=maior))
        printf("%d",notas[1]);
    if((notas[2]!=menor)&&(notas[2]!=maior))
        printf("%d",notas[2]);
}
