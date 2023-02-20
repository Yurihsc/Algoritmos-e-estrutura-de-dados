#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 100000

int main()
{
    int a, s, d, f, g, h, j, k, l, Q, A, i, p;
    char aluno[tam];
    char respostas[tam];
    int notas[tam];
    int nota = 0;
    
    scanf("%d ", &Q);
    a = Q;
    
    for (s=0; s<a; s++)
    {
        scanf("%c ", &respostas[s]);
        
    }
    
    scanf("%d ", &A);
    
   for(f=0; f<A; f++)
   {
       nota = 0;
       for (g=0; g<a; g++)
       {
           scanf("%c ", &aluno[g]);
       }
       
       for (g=0; g<a; g++)
       {
           if (respostas[g] == aluno[g]) nota++;
       }
       notas[f] = nota;
    }
    for (p=0; p<A; p++)
    {
        i = p + 1;
        printf("Aluno %d: %d pontos\n", i, notas[p]);
    }
    return 0;
}