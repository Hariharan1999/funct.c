#include <stdio.h>
int comp(int a,int b)
{
    if(a>b)
    printf("%d is greater than %d\n",a,b);
    else if(b<a)
    printf("%d is greater than %d\n",b,a);
    else
    printf("Two numbers are equal\n");
}
int main()
{
    int a,b,x;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    x=comp(a,b);
    return 0;
}
