#include<stdio.h>
float SI(int p,int r,int t)
{
    return (p*r*t)/100;
}
int main()
{
    int p,t,r;
    printf("enter principle amount =");
    scanf("%d",&p);
    printf("enter rate of intrest =");
    scanf("%d",&r);
    printf("enter time =");
    scanf("%d",&t);
    printf("simple intrest = %.2f",SI(p,r,t));
}

