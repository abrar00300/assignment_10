#include<stdio.h>
int fun(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("enter your number =");
    scanf("%d",&n);
    int r=fun(n);
    if(r==1)
        printf("%d is even",n);
    else
        printf("%d is odd",n);
}
