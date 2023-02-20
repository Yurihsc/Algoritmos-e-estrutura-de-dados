#include <stdio.h>
#include <stdlib.h>
#define A 100

int main ()
{
    int N, L, C, i, j, k, q;
    float M[A][A];
    float SOMA[A][A];
    float F[A][A];
    
    scanf ("%d", &N);
    scanf ("%d %d", &L, &C);
    
    for (i=0; i<N; i++)
    {
        for (j=0; j<L; j++)
        {
            for (k=0; k<C; k++)
            {
                scanf("%f", &M[j][k]);
                if (i==0)
                {
                    SOMA[j][k] = M[j][k];
                }
                else 
                {
                    SOMA[j][k] = SOMA[j][k] + M[j][k];
                }
            }
        }
     
    }
    
    for (j=0; j<L; j++)
    {
        for (k=0; k<C; k++)
        {
            F[j][k] = (SOMA[j][k])/N;
        }
    }
    for (j=0; j<L; j++)
    {
        for (k=0; k<C; k++)
        {
            printf("%.2f ", F[j][k]);
        }
    }
    
    return 0;
}