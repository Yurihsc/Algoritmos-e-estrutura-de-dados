#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int strlen_professor(char *Srec)   
{
    int tam=0 ;                
    while(*(Srec++)!='\0')      
    {
        tam++;                  
    }
    return(tam);                
}
char *strvwl_professor(char *Srec)   
{
    int tam, i=0,j=0;
    
    char *Spas;
    
    tam = strlen_professor(Srec);    
    
    Spas=(char*)malloc(tam+1);  
    
    do
    {
        if(*(Srec+i)=='A'||*(Srec+i)=='E'||*(Srec+i)=='I'||*(Srec+i)=='O'||*(Srec+i)=='U')  
        {
           Spas[j]=Srec[i];                                                                 
           j++;
        }
        if(*(Srec+i)=='a'||*(Srec+i)=='e'||*(Srec+i)=='i'||*(Srec+i)=='o'||*(Srec+i)=='u')  
        {
           Spas[j]=Srec[i];                                                                 
           j++;
        }
        i++;
        if(*(Srec+i)=='\0')Spas[j]=Srec[i];                                                 
    }while(*(Srec+i)!='\0');
    return(Spas);                                                                           
}
char *strlwr_professor(char *Srec)                           
{
    int i=0;
    
    char *Spas;
    
    Spas = malloc(strlen_professor(Srec)+1);                 
    
    while(*(Srec+i)!='\0')                              
    {
        if(Srec[i]>=65&&Srec[i]<=90)Spas[i]=Srec[i]+32; 
                                                        
        else Spas[i]=Srec[i];                           
        i++;
    }
    Spas[i]=Srec[i];                                    
    
    return(Spas);                                       
}
char *strrev_professor(char *Srec)                                                       
{
    int i,j;
    
    char *Spas;
    
    Spas=(char *)malloc(strlen_professor(Srec)+1);                                       
    
    for(i=0,j=(strlen_professor(Srec)-1);i<strlen_professor(Srec);i++,j--)Spas[i]=Srec[j];    
    
    Spas[i]='\0';                                                                   
    
    return(Spas);                                                                   
}
char *strpal_professor(char *Srec)   
{
    
    int  tam,cont=0,i;
    
    char *Rev;                  
    
    Rev = strrev_professor(Srec);
    
    Rev = strlwr_professor(Rev); 
    
    Srec = strlwr_professor(Srec);
    
    tam = strlen_professor(Srec);
    
    for(i=0;i<tam;i++)
        if(Rev[i]==Srec[i])     
            cont++;             
    
    if(cont==tam)return("SIM");
    
    else return("NAO");         
}
int main()
{
    char S[100],aux[2],N;
    
    scanf("%s",S);                                                                  
    
    fflush(stdin);
    
    if(S[0]=='\\'&&S[1]=='0')return(0);                                             
    
    scanf("%s",aux);
    
    if(aux[0]=='1'||aux[0]=='2'||aux[0]=='3'||aux[0]=='4'||aux[0]=='5')N=aux[0];    
    
    if(aux[0]=='\\'&&aux[1]=='0')N='\0';                                            
    
    fflush(stdin);
    
    while(N!='\0')                                                                  
    {
        switch(N)
        {
            case '1':                                                               
                printf("%d \n",strlen_professor(S));
            break;
            case '2':                                                               
                printf("%s \n",strvwl_professor(S));
            break;
            case '3':                                                               
                printf("%s \n",strlwr_professor(S));
            break;
            case '4':                                                               
                printf("%s \n",strrev_professor(S));
            break;
            case '5':                                                               
                printf("%s \n",strpal_professor(S));
            break;

        }
        
        scanf("%s",S);                                                              
        
        fflush(stdin);
        
        if(S[0]=='\\'&&S[1]=='0')return(0);                                         
        
        scanf("%s",aux);
        
        if(aux[0]=='1'||aux[0]=='2'||aux[0]=='3'||aux[0]=='4'||aux[0]=='5')N=aux[0];
        
        if(aux[0]=='\\'&&aux[1]=='0')N='\0';                                        
        
        fflush(stdin);
    }

    return 0;                                                                       
}