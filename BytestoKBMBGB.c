#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter The Bytes:");
    scanf("%d",&a);
    b=a*0.001;
    printf("%d Bytes Is Equal To %d KB \n",a,b);
    b=a*0.000001;
    printf("%d Bytes Is Equal To %d MB \n",a,b);
    b=a*0.000000001;
    printf("%d Bytes Is Equal To %d GB \n",a,b);

}