#include <stdio.h>
#include <stdlib.h>
#define a 100 

int main ()
{
    int N, n, k;
    int T[a][a];
    scanf("%d", &N);
    
    while (N>0)
    {
      for (n=0; n<N; n++)
        {
            for (k=0; k<N; k++)
            {
                if (k==0) T[n][k]=1;
                else if (k==n) T[n][k]=1;
                else if (k>n) T[n][k]=0;
                else
                {
                 T[n][k] = T[n-1][k-1] + T[n-1][k];   
                }
            }
        }
        
        for (n=0; n<N; n++)
        {
            for (k=0; k<=n; k++)
            {
                printf ("%d ", T[n][k]);
            }
        printf("\n");
        }
        scanf ("%d", &N);
    }
    
    return 0;
}