#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int s, d, f, g, h, V, I, J, K, L, q, N, n;
    I = 50;
    J = 10;
    K = 5;
    L = 1;
    
        for (n=1; n!=0; n++)
        {
            s = 0;
            d = 0;
            f = 0;
            g = 0;
            scanf("%d", &V);
            if (V>0)
            {
                printf ("Teste %d\n", n);
                for ( ; V-I>=0; V = V - I)
                {
                    s++;
                }
                for ( ; V-J>=0; V = V - J)
                {
                    d++;
                }
                for ( ; V-K>=0; V = V - K)
                {
                    f++;
                }
                for ( ; V-L>=0; V = V - L)
                {
                    g++;
                }
                printf("%d %d %d %d\n\n", s, d, f, g) ;
            }
            else return 0;
                
        }
    
}#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int s, d, f, g, h, V, I, J, K, L, q, N, n;
    I = 50;
    J = 10;
    K = 5;
    L = 1;
    
        for (n=1; n!=0; n++)
        {
            s = 0;
            d = 0;
            f = 0;
            g = 0;
            scanf("%d", &V);
            if (V>0)
            {
                printf ("Teste %d\n", n);
                for ( ; V-I>=0; V = V - I)
                {
                    s++;
                }
                for ( ; V-J>=0; V = V - J)
                {
                    d++;
                }
                for ( ; V-K>=0; V = V - K)
                {
                    f++;
                }
                for ( ; V-L>=0; V = V - L)
                {
                    g++;
                }
                printf("%d %d %d %d\n\n", s, d, f, g) ;
            }
            else return 0;
                
        }
    
}