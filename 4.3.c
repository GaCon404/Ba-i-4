#include<stdio.h>
int Tong(int n)
{
    if(n<10)
    return n;
    else
    {
        return n%10 + Tong(n/10);
    }
    
}
int main()
{
    int n,i;
    do
    {
        scanf("%d",&n);
    } while (n<=0&&n>=1000);
    printf("%d",Tong(n));
}