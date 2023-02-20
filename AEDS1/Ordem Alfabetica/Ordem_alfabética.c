#include <stdio.h>
#include <stdlib.h>

#define A 1000

int main(){

    int m, n, x, menor;
    int N;
    scanf("%d",&N);

    struct nm{

    char UP[A][A];
    char a[A];
    char b[A];
    char US[A][A];

    };

    struct nm p;

    m=0;
    while (m<N)
    {
        scanf("%s ", p.UP[m]);
        scanf("%s", p.US[m]);
        m++;
    }
    for(m = 0; m < N; m++)
    {
            x = 0;
            menor = m;
            p.US[m]==p.US[menor];

            for(n = m + 1; n < N; n++)
            {
                x = 0;
                while(p.UP[menor][x] == p.UP[n][x])
                {
                        x++;
                }
                if(p.UP[menor][x] > p.UP[n][x])
                {
                     menor = n;
                }
            }

            if(menor != m)
            {
                    strcpy(p.a, p.UP[menor]);
                    strcpy(p.UP[menor], p.UP[m]);
                    strcpy(p.UP[m], p.a);

                    strcpy(p.b, p.US[menor]);
                    strcpy(p.US[menor], p.US[m]);
                    strcpy(p.US[m], p.b);
            }
    
    }

    while (m<N)
    {
      printf("%s %s\n", p.UP[m],p.US[m]);
    m++;
    }

   return 0;
}