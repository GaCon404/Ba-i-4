#include<stdio.h>
#include<math.h>
int Nghiem(float a,float b,float c)
{
    float delta;
    if(a==0) printf("phuong trinh co nghiem don x = %f",c/b);
    delta =  b*b-4*a*c;
    if(delta == 0) printf("phuong trinh co nghiem kep x1 = x2 = %f",(-b)/(2*a));
    else if(delta<0) printf("phuong trinh vo nghiem");
    else
    {
        printf("%f\n",((-b)+sqrt(delta))/(2*a));
        printf("%f",((-b)-sqrt(delta))/(2*a));
    }
}
int main()
{
    float a,b,c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    Nghiem(a,b,c);
}