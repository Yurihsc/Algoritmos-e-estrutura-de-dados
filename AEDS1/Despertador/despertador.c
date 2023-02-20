#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int H1, H2, M1, M2, S1, S2, MD, SD, HD, a;
    
    scanf ("%d %d %d %d %d %d", &H1, &M1, &S1, &H2, &M2, &S2);
    
    while (H1!=-1)
    {
        
        if (S2>S1)
        {
            SD = S2 - S1;
        }
        else
        {
            SD = (60 - S1) + S2;
            M2--;
        }
        
         if (M2>M1)
        {
            MD = M2 - M1;
        }
        else
        {
            MD = (60 - M1) + M2;
            H2--;
        }
         
        if (H2>H1)
        {
            HD = H2 - H1;
        }
        else
        {
            HD = (24 - H1) + H2;
        }
        
        if (SD==60)
        {
            MD++;
            SD=0;
        }
        if (MD==60)
        {
            HD++;
            MD=0;
        }
        if (HD>=24)HD=HD-24;
        
        if (HD<10)printf("0%d:", HD);
        else printf("%d:", HD);
        
        if (MD<10)printf("0%d:", MD);
        else printf("%d:", MD);
        
        if (SD<10)printf("0%d", SD);
        else printf("%d", SD);
        
        printf("\n");
        
        scanf ("%d %d %d %d %d %d", &H1, &M1, &S1, &H2, &M2, &S2);
        
    }
    
    
    
    return 0;
}