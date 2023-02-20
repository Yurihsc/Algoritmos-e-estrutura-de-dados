#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int N, k, A, B, J, Z, Cj, Cz;
    scanf("%d", &N);
    
   
    k = 1;
    J = 0;
    Z = 0;
    
    while (N!=0)
    {   
    printf("Teste %d \n", k);
    k++;
    Cj = 0;
    Cz = 0;
        int c;
        for(c=0; c<N; c++)
        {
            
            scanf("%d %d", &J, &Z);
           
            if (J<0||Z<0) {
               
                printf("Vovo Vitoria nao tira dinheiro dos cofrinhos.\n");
                        }
            else { 
                    Cj = J + Cj;
                    Cz = Z + Cz;
                    A = Cj - Cz;
                    printf("%d\n \n", A);
                     
                }
            
           
        }
        printf(" \n");
        scanf("%d", &N);
        

    }
    return 0;
}