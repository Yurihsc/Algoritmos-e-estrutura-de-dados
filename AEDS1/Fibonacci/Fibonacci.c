#include <stdio.h>
#include <stdlib.h>

int fib (int n)
{
   if (n<=0)
    {
       return 0;
    }
    if (n==1)
    {
    return 1;
    
    }
    return fib(n-1)+fib(n-2);
}

int main()
{
    int n;
    scanf("%d", &n);
    while (n!=0)
    {
        
        n = fib(n);
        printf("%d \n", n);
        scanf("%d", &n);
    }
    
    
    
    return 0;
}