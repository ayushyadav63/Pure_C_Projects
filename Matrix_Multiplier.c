// 2*2  matrix multiplication
#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,k,j,n,m;
    printf("enter the first matrix row wise");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("enter the second matrix column wise");
    scanf("%d %d %d %d",&e,&f,&g,&h);
    
    k=(a*e) + (b*f);
    j=(a*g) + (b*h);
    n=(c*e) + (d*f);
    m=(c*g) + (d*h);
    
    printf("matrix multiplication result");
    printf("\n%d %d \n%d %d",k,j,n,m);
    
   

    return 0;
}
