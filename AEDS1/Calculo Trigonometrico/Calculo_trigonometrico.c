#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

void retangulo ()
{
    int a, s;
    scanf("%d %d", &a, &s);
    
    float d;
    
    d = a*s;
    
    printf("%.2f\n", d);
}

void triangulo ()
{
    float a, s;
    scanf("%f %f", &a, &s);
    
    float d;
    
    d = a*s/2;
    
    printf("%.2f\n", d);
}

void circulo ()
{
    int a;
    scanf("%d", &a);
    
    float d;
    
    d = PI*a*a;
    
    printf("%.2f\n", d);
}

int main ()
{
    int N;
    scanf("%d", &N);
    while (N!=0)
    {
        switch (N)
        {
            case 1:
            retangulo ();
            break;
            
            case 2:
            triangulo ();
            break;
            
            case 3:
            circulo ();
            break;
            
        }
     scanf("%d", &N);
    }
}