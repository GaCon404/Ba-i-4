#include<stdio.h>
int main()
{
    int i,n,tich=1;
    do
    {
        scanf("%d",&n);
    } while (n<=0&&n>=8);
    for(i=1;i<=n;i++)
    {
        tich=tich*i;
    }
    printf("%d",tich);
}