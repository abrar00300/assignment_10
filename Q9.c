#include<stdio.h>
int find(int n,int d)
{
    while(n)
    {
        if(n%10==d)
            return 1;
        n=n/10;
    }
}
int main()
{
    int n,d;
    printf("enter the number = ");
    scanf("%d",&n);
    printf("enter digit to find =");
    scanf("%d",&d);
    int r=find(n,d);
    if(r==1)
        printf("%d found in %d ",d,n);
    else
         printf("%d not found in %d ",d,n);
}
