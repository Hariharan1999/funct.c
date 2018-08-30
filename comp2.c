#include <stdio.h>
int comp(int a,int b)
{
    if(a>b)
    printf("a is greater than b\n");
    else if(b<a)
    printf("b is greater than a\n");
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
