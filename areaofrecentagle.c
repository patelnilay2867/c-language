#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter The Rectangle lenght : ");
    scanf("%d",&a);
    printf("Enter The Rectangle Widhth :");
    scanf("%d",&b);
    c=a*b;
    printf("Total Area Of Rectangle Is %d\n",c);
    c=2*(a+b);
    printf("Total perimeter Of Rectangle Is %d\n",c);
}
