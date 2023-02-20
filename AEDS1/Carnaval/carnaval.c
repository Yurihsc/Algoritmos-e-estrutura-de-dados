#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome_escola[100];
    int soma_quesitos;
    int** notas_quesitos;
} escola_de_samba;

int main()
{
    int N, Q, i, j, k, melhor_escola, maior_soma;
    scanf("%d", &N);
    scanf("%d", &Q);
    
    //Leituras de inÃ­cio
    escola_de_samba* escolas_de_samba = (escola_de_samba*) malloc(N*sizeof(escola_de_samba));
    for(i = 0; i < N; i ++)
    {
        
        scanf("%s", escolas_de_samba[i].nome_escola);
        
        escolas_de_samba[i].notas_quesitos = (int**) malloc(Q*sizeof(int*));
        escolas_de_samba[i].soma_quesitos = 0;
        
        for(j = 0; j<Q; j ++)
        {
            escolas_de_samba[i].notas_quesitos[j] = (int*) malloc(5*sizeof(int));
            for(k = 0; k < 5; k ++)
            {
                scanf("%d ", &escolas_de_samba[i].notas_quesitos[j][k]);
                escolas_de_samba[i].soma_quesitos += escolas_de_samba[i].notas_quesitos[j][k];
            }
        }
    }
    
    maior_soma = 0;
    
    //ComputaÃ§Ã£o e apuraÃ§Ã£o    
    for(i = 0; i < N; i ++)
    {
        if (escolas_de_samba[i].soma_quesitos > maior_soma)
        {
            maior_soma = escolas_de_samba[i].soma_quesitos;
            melhor_escola = i;
        }
    }
    
    printf("%s", escolas_de_samba[melhor_escola].nome_escola);
    
    return 0;
}