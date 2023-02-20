#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int N, a, A, B;
    char nome1[16], nome2 [16];
    scanf("%d", &N);
    
    a = 1;
    
    while (N!=0)
    {   
    printf("Teste %d \n", a);
    a++;
    
    
    
    
            scanf("%s", nome1);
            scanf("%s", nome2);
        
        int c;
        for(c=0; c<N; c++)
        {
            scanf("%d %d", &A, &B);
            
            if ((A+B)%2==0) printf("%s \n", nome1);
            else printf("%s \n", nome2);
            
        }
        printf(" \n");
        scanf("%d", &N);
        

    }
    return 0;
}