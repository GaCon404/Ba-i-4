#include<stdio.h>
int UCLN(int a, int b) 
{
    if (b == 0) return a;
    return UCLN(b, a % b);
}
int BCNN(int a, int b) 
{
    return (a * b) / UCLN(a, b);
}
int main()
{
    int a,b;
    do
    {
        scanf("%d",&a);
        scanf("%d",&b);
    } while (a<=0&&b<=0);
    printf("UCLN: %d\n",UCLN(a,b));
    printf("BCNN: %d",BCNN(a,b));
    
}