#include <stdlib.h>
#include <stdio.h>

struct abacaxi
{
    int Ad[1000];
    float Ap[1000];
    float Vc[1000];
    float Ag[1000];
}ab;

int main ()
{
    int N;
    int i;
    do 
    {
        scanf("%d", &N);
        
        for (i=0; i<N; i++)
        {
            scanf("%d", &ab.Ad[i]);
        }
        
        for (i=0; i<N; i++)
        {
            scanf("%f", &ab.Ap[i]);
        }
        
        for (i=0; i<N; i++)
        {
            scanf("%f", &ab.Vc[i]);
        }
         
        for (i=0; i<N; i++)
        {
            ab.Ag[i]=(ab.Ad[i]*ab.Vc[i])/ab.Ap[i];
        }
        
        int k=0;
        for (i=0; i<N; i++)
        {
            if (ab.Ag[i]>ab.Ag[k])
            {
                k=i;
            }
        }

            printf("%d ", ab.Ad[k]);
            printf("%.2f ", ab.Ap[k]);
            printf("%.5f ", ab.Vc[k]);
            printf("%.5f ", ab.Ag[k]);
            printf("\n");

        
    } while (N>0);
    
    return 0;
}