#include<stdio.h>
int main()
{
    int c, n, res, ponto;

    scanf("%d %d",&c,&n);

    res=c/n;

    ponto=c - res*n;

    printf("%d",ponto);
    return 0;
}
