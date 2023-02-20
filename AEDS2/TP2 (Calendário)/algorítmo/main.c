#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "pdfgen.h"

struct evento
{
    char tipo_s;
    int dia_s;
    int mes_s;
    int ano_s;
    char evento[70];
} ab;

void pdf(int mes, int ano, int v, char *nome_arquivo, int var1)
{
    struct pdf_info info =
    {
        .creator = "My software",
        .producer = "My software",
        .title = "My document",
        .author = "My name",
        .subject = "My subject",
        .date = "Today"
    };

    struct pdf_doc *pdf = pdf_create(PDF_A4_WIDTH, PDF_A4_HEIGHT, &info);
    pdf_set_font(pdf, "Helvetica-Bold");
    pdf_append_page(pdf);
    pdf_add_jpeg(pdf,NULL,0,0,600,900,"caled.jpg");
    int dia, bs, cont_dia, cont_ano, pjan, i, j, limite, f, acont, pcont, ames, pmes, n, a, alimite, plimite, dia2;
    int diapdf;
    char w;
    char b[2];
    char c[3];
    int e, u;
    int matriz[2][35];

    char s_ano[4];



    int x=25,y=660;

    dia = 1;
    pjan = 3;
    bs = (ano - 1901)/4;
    if (bs < 0)
        bs = 0;
    cont_ano = ano - 1901;
    cont_dia = bs + cont_ano + pjan;
    if((ano - 1900)%4 == 0)
    {
        if (ano%100==0)
        {
            if(ano%400 == 0)
                f=1;
            else
                f=0;
        }
        else
            f=1;

    }
    else
        f=0;


    if (mes==3)
    {
        cont_dia = cont_dia + 3 + f;
        limite = 31;

    }
    else if (mes==11)
    {
        cont_dia = cont_dia + 3 +f;
        limite = 30;

    }
    else if (mes==4)
    {
        cont_dia = cont_dia + 6 +f;
        limite = 30;

    }
    else if (mes==7)
    {
        cont_dia = cont_dia + 6 +f;
        limite = 31;

    }
    else if(mes==9)
    {
        cont_dia = cont_dia + 5 + f;
        limite = 30;

    }
    else if(mes==12)
    {
        cont_dia = cont_dia + 5 + f;
        limite = 31;

    }
    else if(mes==8)
    {
        cont_dia = cont_dia + 2 + f;
        limite = 31;

    }
    else if(mes==5)
    {
        cont_dia = cont_dia + 1 + f;
        limite = 31;

    }
    else if (mes==6)
    {
        cont_dia = cont_dia + 4 + f;
        limite = 30;

    }
    else if (mes==10)
    {
        cont_dia = cont_dia + f;
        limite = 31;

    }
    else if (mes==2)
    {
        cont_dia = cont_dia + 3;
        limite = 28 + f;

    }
    else if (mes==1)
    {
        limite = 31;
    }
    while(cont_dia > 7)
        cont_dia = cont_dia - 7;


    if(mes==1)
    {
        if (var1==1)
            pdf_add_text(pdf, NULL, "JANEIRO", 30, 50, 650, PDF_WHITE);
        if (var1==2)
            pdf_add_text(pdf, NULL, "JANUARY", 30, 50, 650, PDF_WHITE);
    }

    if(mes==2)
    {
        if (var1==1)
            pdf_add_text(pdf, NULL, "FEVEREIRO", 30, 50, 650, PDF_WHITE);
        if (var1==2)
            pdf_add_text(pdf, NULL, "FEBRUARY", 30, 50, 650, PDF_WHITE);
    }
    if(mes==3)
    {
        if (var1==1)
            pdf_add_text(pdf, NULL, "MARCO", 30, 50, 650, PDF_WHITE);
        if (var1==2)
            pdf_add_text(pdf, NULL, "MARCH", 30, 50, 650, PDF_WHITE);
    }
    if(mes==4)
    {
        if (var1==1)
            pdf_add_text(pdf, NULL, "ABRIL", 30, 50, 650, PDF_WHITE);
        if (var1==2)
            pdf_add_text(pdf, NULL, "APRIL", 30, 50, 650, PDF_WHITE);
    }
    if(mes==5)
    {
        if (var1==1)
            pdf_add_text(pdf, NULL, "MAIO", 30, 50, 650, PDF_WHITE);
        if (var1==2)
            pdf_add_text(pdf, NULL, "MAY", 30, 50, 650, PDF_WHITE);
    }
    if (mes==6)
    {
        if (var1==1)
            pdf_add_text(pdf, NULL, "JUNHO", 30, 50, 650, PDF_WHITE);
        if (var1==2)
            pdf_add_text(pdf, NULL, "JUNE", 30, 50, 650, PDF_WHITE);
    }
    if(mes==7)
    {
        if (var1==1)
            pdf_add_text(pdf, NULL, "JULHO", 30, 50, 650, PDF_WHITE);
        if (var1==2)
            pdf_add_text(pdf, NULL, "JULY", 30, 50, 650, PDF_WHITE);
    }
    if(mes==8)
    {
        if (var1==1)
            pdf_add_text(pdf, NULL, "AGOSTO", 30, 50, 650, PDF_WHITE);
        if (var1==2)
            pdf_add_text(pdf, NULL, "AUGUST", 30, 50, 650, PDF_WHITE);
    }
    if(mes==9)
    {
        if (var1==1)
            pdf_add_text(pdf, NULL, "SETEMBRO", 30, 50, 650, PDF_WHITE);
        if (var1==2)
            pdf_add_text(pdf, NULL, "SEPTEMBER", 30, 50, 650, PDF_WHITE);
    }
    if(mes==10)
    {
        if (var1==1)
            pdf_add_text(pdf, NULL, "OUTUBRO", 30, 50, 650, PDF_WHITE);
        if (var1==2)
            pdf_add_text(pdf, NULL, "OCTOBER", 30, 50, 650, PDF_WHITE);
    }
    if(mes==11)
    {
        if (var1==1)
            pdf_add_text(pdf, NULL, "NOVEMBRO", 30, 50, 650, PDF_WHITE);
        if (var1==2)
            pdf_add_text(pdf, NULL, "NOVEMBER", 30, 50, 650, PDF_WHITE);
    }
    if(mes==12)
    {
        if (var1==1)
            pdf_add_text(pdf, NULL, "DEZEMBRO", 30, 50, 650, PDF_WHITE);
        if (var1==2)
            pdf_add_text(pdf, NULL, "DECEMBER", 30, 50, 650, PDF_WHITE);
    }

    sprintf(s_ano, "%i", ano);
    pdf_add_text(pdf, NULL, s_ano, 40, 450, 650, PDF_WHITE);
    if (var1==1)
    {
        pdf_add_text(pdf, NULL, "DOM", 10, 25, 605, PDF_BLUE);
        pdf_add_text(pdf, NULL, "SEG", 10, 106, 605, PDF_WHITE);
        pdf_add_text(pdf, NULL, "TER", 10, 187, 605, PDF_WHITE);
        pdf_add_text(pdf, NULL, "QUA", 10, 268, 605, PDF_WHITE);
        pdf_add_text(pdf, NULL, "QUI", 10, 349, 605, PDF_WHITE);
        pdf_add_text(pdf, NULL, "SEX", 10, 430, 605, PDF_WHITE);
        pdf_add_text(pdf, NULL, "SAB", 10, 511, 605, PDF_BLUE);

    }
    if (var1==2)
    {
        pdf_add_text(pdf, NULL, "SUN", 10, 25, 605, PDF_BLUE);
        pdf_add_text(pdf, NULL, "MON", 10, 106, 605, PDF_WHITE);
        pdf_add_text(pdf, NULL, "TUE", 10, 187, 605, PDF_WHITE);
        pdf_add_text(pdf, NULL, "WED", 10, 268, 605, PDF_WHITE);
        pdf_add_text(pdf, NULL, "THU", 10, 349, 605, PDF_WHITE);
        pdf_add_text(pdf, NULL, "FRI", 10, 430, 605, PDF_WHITE);
        pdf_add_text(pdf, NULL, "SAT", 10, 511, 605, PDF_BLUE);

    }

    for (i=0; i<6; i++)
    {
        if (i==0)
            y = y - 80;
        else
            y = y - 93;
        x = 25;
        for (j=0; j<7; j++)
        {

            if ((j + 1 <cont_dia) & (i==0))
            {
                pdf_add_text(pdf, NULL, "     ", 15, x, y, PDF_WHITE);

                x = x + 81;

            }

            else
            {
                if (dia <= limite)
                {
                    diapdf = dia + 48;
                    w=diapdf;
                    b[0]=w;
                    matriz[0][dia] = x;
                    matriz[1][dia] = y;
                    if (dia <10)
                    {
                        if(j==0||j==6)
                            pdf_add_text(pdf, NULL, b, 15, x, y, PDF_BLUE);
                        else
                            pdf_add_text(pdf, NULL, b, 15, x, y, PDF_WHITE);
                        x = x + 81;
                    }
                    else
                    {
                        e = (dia/10)+48;
                        u = (dia%10)+48;
                        w=e;
                        c[0]=w;
                        w=u;
                        c[1]=w;
                        if(j==0||j==6)
                            pdf_add_text(pdf, NULL, c, 15, x, y, PDF_BLUE);
                        else
                            pdf_add_text(pdf, NULL, c, 15, x, y, PDF_WHITE);
                        x = x + 81;
                    }
                    dia++;
                }
            }
        }
    }
    int m;
    char tipo[4];
    char tipo_evento[4]="AFVO";
    FILE *arquivo;
    fflush(stdin);
    arquivo = fopen(nome_arquivo, "rt");
    if (var1==1)
        printf("deseja pesquisar um tipo de evento especifico?: (1) sim (2) nao\n");
    if (var1==2)
        printf("search a especific type of event? (1)yes (2)no\n");
    scanf("%d", &m);
    if (m==1)
    {
        if (var1==1)
            printf("digite o(s) tipo(s) desejado:");
        if (var1==2)
            printf("enter the event types: ");
        scanf("%s", &tipo);
    }


    for(i=1; i<=limite; i++)
    {
        x = matriz[0][i];
        y = matriz[1][i] - 10;

        for (j=0; j<4; j++)
        {
            fflush(stdin);
            fseek(arquivo, SEEK_SET, 0);
            while(fscanf(arquivo, "%c %d %d %d", &ab.tipo_s, &ab.dia_s, &ab.mes_s, &ab.ano_s) != EOF)
            {

                fgets(ab.evento, 70,arquivo);
                ab.evento[strlen(ab.evento)-1]='\0';
                if (ab.ano_s == 0)
                {
                    ab.ano_s = ano;
                }
                if (ab.mes_s == 0)
                {
                    ab.mes_s = mes;
                }
                if ((mes == ab.mes_s) & (ano == ab.ano_s))
                {
                    if(tipo_evento[j] == ab.tipo_s && m!=1)
                    {
                        if(i == ab.dia_s || ab.dia_s == 0)
                        {
                            if (j==0)
                            {
                                pdf_add_jpeg(pdf,NULL,x,y-1,8,8,"bolo.jpg");
                                pdf_add_text(pdf, NULL, ab.evento, 7, x+7, y, PDF_BLUE);
                            }
                            if (j==1)
                            {
                                pdf_add_jpeg(pdf,NULL,x,y-1,8,8,"feriado.jpg");
                                pdf_add_text(pdf, NULL, ab.evento, 7, x+7, y, PDF_RED);
                            }
                            if (j==2)
                            {
                                pdf_add_jpeg(pdf,NULL,x,y-1,8,8,"aviao.jpg");
                                pdf_add_text(pdf, NULL, ab.evento, 7, x+7, y, PDF_GREEN);
                            }
                            if(j==3)
                                pdf_add_text(pdf, NULL, ab.evento, 7, x+7, y, PDF_WHITE);
                            y=y-10;
                        }
                    }
                    if(tipo[j] == ab.tipo_s && m==1)
                    {
                        if(i == ab.dia_s || ab.dia_s == 0)
                        {
                            if (ab.tipo_s=='A')
                            {
                                pdf_add_jpeg(pdf,NULL,x,y-1,8,8,"bolo.jpg");
                                pdf_add_text(pdf, NULL, ab.evento, 7, x+7, y, PDF_BLUE);
                            }
                            if (ab.tipo_s=='F')
                            {
                                pdf_add_jpeg(pdf,NULL,x,y-1,8,8,"feriado.jpg");
                                pdf_add_text(pdf, NULL, ab.evento, 7, x+7, y, PDF_RED);
                            }
                            if (ab.tipo_s=='V')
                            {
                                pdf_add_jpeg(pdf,NULL,x,y-1,8,8,"aviao.jpg");
                                pdf_add_text(pdf, NULL, ab.evento, 7, x+7, y, PDF_GREEN);
                            }
                            if(ab.tipo_s=='O')
                                pdf_add_text(pdf, NULL, ab.evento, 7, x+7, y, PDF_WHITE);
                            y=y-10;
                        }
                    }
                }
            }
        }
    }
    x=450;
    y=780;
    n=0;
    fclose(arquivo);
    dia=1;
    dia2=1;
    if (v==2||v==3)
    {
        if (limite%10==0)
            acont = cont_dia +4;
        else
            acont= cont_dia + 5;
        if (mes==2)
            acont=cont_dia+4;
        if (mes==8)
            acont=cont_dia + 4;
        if (mes==3)
            acont= cont_dia +7 -f;



        if (limite%10==1)
            pcont=cont_dia+3;
        else
            pcont=cont_dia+2;
        if (mes==2)
            pcont=cont_dia+f;





        pmes = mes + 1;
        ames = mes - 1;

        if (pmes>12)
        {
            pmes = 1;
            pcont = cont_dia+3;
        }
        if (ames == 0)
        {
            ames = 12;
            acont = cont_dia+4;
        }
        pcont=pcont%7;
        acont=acont%7;
        if(acont==0)
            acont=7;
        if(pcont==0)
            pcont=7;
        if(v==2)
            ames=0;
        if(pmes==1 || ames==1)
        {
            if (ames==1)
                n=430;
            else
                n=0;
            if (var1==1)
                pdf_add_text(pdf, NULL, "JANEIRO", 10, x-n, y+10, PDF_WHITE);
            if (var1==2)
                pdf_add_text(pdf, NULL, "JANUARY", 10, x-n, y+10, PDF_WHITE);
            x=x+80;
            if (pmes==1)
            {
                ano = ano + 1;
                sprintf(s_ano, "%i", ano);
                pdf_add_text(pdf, NULL, s_ano, 10, x-n, y+10, PDF_WHITE);
                plimite = 31;
                ano = ano -1;
                sprintf(s_ano, "%i", ano);

            }
            else
                pdf_add_text(pdf, NULL, s_ano, 10, x-n,y+10, PDF_WHITE);
            if(ames==1)
                alimite = 31;

            x=x-80;

        }

        if(pmes==2 || ames==2)
        {
            if (ames==2)
                n=430;
            else
                n=0;
            if (var1==1)
                pdf_add_text(pdf, NULL, "FEVEVEIRO", 10, x-n, y+10, PDF_WHITE);
            if (var1==2)
                pdf_add_text(pdf, NULL, "FEBRUARY", 10, x-n, y+10, PDF_WHITE);
            if(ames==2)
                alimite = 28+f;
            if(pmes==2)
                plimite = 28+f;
            x=x+80;
            pdf_add_text(pdf, NULL, s_ano, 10, x-n, y+10, PDF_WHITE);
            x=x-80;
        }

        if(pmes==3 || ames==3)
        {
            if (ames==3)
                n=430;
            else
                n=0;
            if (var1==1)
                pdf_add_text(pdf, NULL, "MARCO", 10, x-n, y+10, PDF_WHITE);
            if (var1==2)
                pdf_add_text(pdf, NULL, "MARCH", 10, x-n, y+10, PDF_WHITE);
            if(ames==3)
                alimite = 30;
            if(pmes==3)
                plimite = 30;
            x=x+80;
            pdf_add_text(pdf, NULL, s_ano, 10, x-n, y+10, PDF_WHITE);
            x=x-80;
        }

        if(pmes==4 || ames==4)
        {
            if (ames==4)
                n=430;
            else
                n=0;
            if (var1==1)
                pdf_add_text(pdf, NULL, "ABRIL", 10, x-n, y+10, PDF_WHITE);
            if (var1==2)
                pdf_add_text(pdf, NULL, "APRIL", 10, x-n, y+10, PDF_WHITE);
            if(ames==4)
                alimite = 30;
            if(pmes==4)
                plimite = 30;
            x=x+80;
            pdf_add_text(pdf, NULL, s_ano, 10, x-n, y+10, PDF_WHITE);
            x=x-80;
        }

        if(pmes==5 || ames==5)
        {
            if (ames==5)
                n=430;
            else
                n=0;
            if (var1==1)
                pdf_add_text(pdf, NULL, "MAIO", 10, x-n, y+10, PDF_WHITE);
            if (var1==2)
                pdf_add_text(pdf, NULL, "MAY", 10, x-n, y+10, PDF_WHITE);
            if(ames==5)
                alimite = 31;
            if(pmes==5)
                plimite = 31;
            x=x+80;
            pdf_add_text(pdf, NULL, s_ano, 10, x-n, y+10, PDF_WHITE);
            x=x-80;
        }

        if(pmes==6 || ames==6)
        {
            if (ames==6)
                n=430;
            else
                n=0;
            if (var1==1)
                pdf_add_text(pdf, NULL, "JUNHO", 10, x-n, y+10, PDF_WHITE);
            if (var1==2)
                pdf_add_text(pdf, NULL, "JUNE", 10, x-n, y+10, PDF_WHITE);
            if(ames==6)
                alimite = 30;
            if(pmes==6)
                plimite = 30;
            x=x+80;
            pdf_add_text(pdf, NULL, s_ano, 10, x-n, y+10, PDF_WHITE);
            x=x-80;
        }

        if(pmes==7 || ames==7)
        {
            if (ames==7)
                n=430;
            else
                n=0;
            if (var1==1)
                pdf_add_text(pdf, NULL, "JULHO", 10, x-n, y+10, PDF_WHITE);
            if(var1==2)
                pdf_add_text(pdf, NULL, "JULY", 10, x-n, y+10, PDF_WHITE);
            if(ames==7)
                alimite = 31;
            if(ames==7)
                plimite = 31;
            x=x+80;
            pdf_add_text(pdf, NULL, s_ano, 10, x-n, y+10, PDF_WHITE);
            x=x-80;
        }

        if(pmes==8 || ames==8)
        {
            if (ames==8)
                n=430;
            else
                n=0;
            if (var1==1)
                pdf_add_text(pdf, NULL, "AGOSTO", 10, x-n, y+10, PDF_WHITE);
            if(var1==2)
                pdf_add_text(pdf, NULL, "AUGUST", 10, x-n, y+10, PDF_WHITE);
            if(ames==8)
                alimite = 31;
            if(pmes==8)
                plimite = 31;
            x=x+80;
            pdf_add_text(pdf, NULL, s_ano, 10, x-n, y+10, PDF_WHITE);
            x=x-80;
        }

        if(pmes==9 || ames==9)
        {
            if (ames==9)
                n=430;
            else
                n=0;
            if(var1==1)
                pdf_add_text(pdf, NULL, "SETEMBRO", 10, x-n, y+10, PDF_WHITE);
            if(var1==2)
                pdf_add_text(pdf, NULL, "SEPTEMBER", 10, x-n, y+10, PDF_WHITE);
            if(ames==9)
                alimite = 30;
            if(pmes==9)
                plimite = 30;
            x=x+80;
            pdf_add_text(pdf, NULL, s_ano, 10, x-n, y+10, PDF_WHITE);
            x=x-80;
        }

        if(pmes==10 || ames==10)
        {
            if (ames==10)
                n=430;
            else
                n=0;
            if(var1==1)
                pdf_add_text(pdf, NULL, "OUTUBRO", 10, x-n, y+20, PDF_WHITE);
            if(var1==2)
                pdf_add_text(pdf, NULL, "OCTOBER", 10, x-n, y+10, PDF_WHITE);
            if(ames==10)
                alimite = 31;
            if(pmes==10)
                plimite = 31;
            x=x+80;
            pdf_add_text(pdf, NULL, s_ano, 10, x-n, y+10, PDF_WHITE);
            x=x-80;
        }

        if(pmes==11 || ames==11)
        {
            if (ames==11)
                n=430;
            else
                n=0;
            if(var1==1)
                pdf_add_text(pdf, NULL, "NOVEMBRO", 10, x-n, y+10, PDF_WHITE);
            if(var1==2)
                pdf_add_text(pdf, NULL, "NOVEMBER", 10, x-n, y+10, PDF_WHITE);
            if(ames==11)
                alimite = 30;
            if(pmes==11)
                plimite = 30;
            x=x+80;
            pdf_add_text(pdf, NULL, s_ano, 10, x-n, y+10, PDF_WHITE);
            x=x-80;
        }

        if(pmes==12 || ames==12)
        {
            if (ames==12)
                n=430;
            else
                n=0;
            if(var1==1)
                pdf_add_text(pdf, NULL, "DEZEMBRO", 10, x-n, y+10, PDF_WHITE);
            if (var1==2)
                pdf_add_text(pdf, NULL, "DECEMBER", 10, x-n, y+10, PDF_WHITE);
            x=x+80;
            if (ames==12)
            {
                ano = ano - 1;
                sprintf(s_ano, "%i", ano);
                pdf_add_text(pdf, NULL, s_ano, 10, x-n, y+10, PDF_WHITE);
                alimite = 31;
                ano = ano + 1;
                sprintf(s_ano, "%i", ano);

            }
            else
                pdf_add_text(pdf, NULL, s_ano, 10, x-n, y+10, PDF_WHITE);
            if(pmes==1)
                plimite = 31;

            x=x-80;
        }



        int z;
        z=15;
        if (var1==1)
        {
            pdf_add_text(pdf, NULL, "DOM", 5, x, y, PDF_BLUE);
            pdf_add_text(pdf, NULL, "SEG", 5, x+z, y, PDF_WHITE);
            pdf_add_text(pdf, NULL, "TER", 5, x+2*z, y, PDF_WHITE);
            pdf_add_text(pdf, NULL, "QUA", 5, x+3*z, y, PDF_WHITE);
            pdf_add_text(pdf, NULL, "QUI", 5, x+4*z, y, PDF_WHITE);
            pdf_add_text(pdf, NULL, "SEX", 5, x+5*z, y, PDF_WHITE);
            pdf_add_text(pdf, NULL, "SAB", 5, x+6*z, y, PDF_BLUE);

            if (v==3)
            {
                a=x-430;
                pdf_add_text(pdf, NULL, "DOM", 5, a, y, PDF_BLUE);
                pdf_add_text(pdf, NULL, "SEG", 5, a+z, y, PDF_WHITE);
                pdf_add_text(pdf, NULL, "TER", 5, a+2*z, y, PDF_WHITE);
                pdf_add_text(pdf, NULL, "QUA", 5, a+3*z, y, PDF_WHITE);
                pdf_add_text(pdf, NULL, "QUI", 5, a+4*z, y, PDF_WHITE);
                pdf_add_text(pdf, NULL, "SEX", 5, a+5*z, y, PDF_WHITE);
                pdf_add_text(pdf, NULL, "SAB", 5, a+6*z, y, PDF_BLUE);
            }
        }

        if (var1==1)
        {
            pdf_add_text(pdf, NULL, "SUN", 5, x, y, PDF_BLUE);
            pdf_add_text(pdf, NULL, "MON", 5, x+z, y, PDF_WHITE);
            pdf_add_text(pdf, NULL, "TUE", 5, x+2*z, y, PDF_WHITE);
            pdf_add_text(pdf, NULL, "WED", 5, x+3*z, y, PDF_WHITE);
            pdf_add_text(pdf, NULL, "THU", 5, x+4*z, y, PDF_WHITE);
            pdf_add_text(pdf, NULL, "FRI", 5, x+5*z, y, PDF_WHITE);
            pdf_add_text(pdf, NULL, "SAT", 5, x+6*z, y, PDF_BLUE);

            if (v==3)
            {
                a=x-430;
                pdf_add_text(pdf, NULL, "SUN", 5, a, y, PDF_BLUE);
                pdf_add_text(pdf, NULL, "MON", 5, a+z, y, PDF_WHITE);
                pdf_add_text(pdf, NULL, "TUE", 5, a+2*z, y, PDF_WHITE);
                pdf_add_text(pdf, NULL, "WED", 5, a+3*z, y, PDF_WHITE);
                pdf_add_text(pdf, NULL, "THU", 5, a+4*z, y, PDF_WHITE);
                pdf_add_text(pdf, NULL, "FRI", 5, a+5*z, y, PDF_WHITE);
                pdf_add_text(pdf, NULL, "SAT", 5, a+6*z, y, PDF_BLUE);
            }
        }


        for (i=0; i<6; i++)
        {
            if (i==0)
                y = y - 7;
            else
                y = y - 12;
            x = 450;
            a=x-430;
            for (j=0; j<7; j++)
            {
                if (v==3)
                {

                    if ((j +1 <acont) & (i==0))
                    {
                        pdf_add_text(pdf, NULL, "     ", 5, a, y, PDF_WHITE);
                        a = a + z;
                    }
                    else
                    {
                        if (dia2 <= alimite)
                        {
                            diapdf = dia2 + 48;
                            w=diapdf;
                            b[0]=w;
                            if (dia2 <10)
                            {
                                if(j==0||j==6)
                                    pdf_add_text(pdf, NULL, b, 5, a, y, PDF_BLUE);
                                else
                                    pdf_add_text(pdf, NULL, b, 5, a, y, PDF_WHITE);
                                a= a + z;

                            }
                            else
                            {
                                e = (dia2/10)+48;
                                u = (dia2%10)+48;
                                w=e;
                                c[0]=w;
                                w=u;
                                c[1]=w;
                                if(j==0||j==6)
                                    pdf_add_text(pdf, NULL, c, 5, a, y, PDF_BLUE);
                                else
                                    pdf_add_text(pdf, NULL, c, 5, a, y, PDF_WHITE);
                                a = a + z;

                            }
                            dia2++;
                        }
                    }

                }


                if ((j + 1 <pcont) & (i==0))
                {
                    pdf_add_text(pdf, NULL, "     ", 5, x, y, PDF_WHITE);

                    x = x + z;

                }
                else
                {
                    if (dia <= plimite)
                    {
                        diapdf = dia + 48;
                        w=diapdf;
                        b[0]=w;
                        if (dia <10)
                        {
                            if(j==0||j==6)
                                pdf_add_text(pdf, NULL, b, 5, x, y, PDF_BLUE);
                            else
                                pdf_add_text(pdf, NULL, b, 5, x, y, PDF_WHITE);
                            x = x + z;
                        }
                        else
                        {
                            e = (dia/10)+48;
                            u = (dia%10)+48;
                            w=e;
                            c[0]=w;
                            w=u;
                            c[1]=w;
                            if(j==0||j==6)
                                pdf_add_text(pdf, NULL, c, 5, x, y, PDF_BLUE);
                            else
                                pdf_add_text(pdf, NULL, c, 5, x, y, PDF_WHITE);
                            x = x + z;
                        }
                        dia++;
                    }
                }
            }
        }
    }


    pdf_save(pdf, "calendario.pdf");
    pdf_destroy(pdf);
}

void callpdf (int var1, char *nome_arquivo)
{
    int mes, ano, v;
    do
    {
        printf("\n");
        if (var1==1)
            printf("digite o mes: ");
        if (var1==2)
            printf("enter the month: ");
        scanf("%d", &mes);
        if(mes<=0 || mes>=13)
        {
            if (var1==1)
                printf("somente numeros entre 1 e 12\n");
            if (var1==2)
                printf("just numbers between 1-12\n");
        }


    }
    while(mes<=0 || mes>=13);

    if (var1==1)
        printf("digite o ano: ");
    if (var1==2)
        printf("enter the year: ");
    scanf("%d", &ano);

    if (var1==1)
        printf("digite o modo de calendario que deseja:\n1-apenas com o mes desejado\n2-mes desejado e proximo mes\n3-mes desejado, proximo mes e anterior\n");
    if (var1==2)
        printf("chose a calendar mod:\n1-only the month that I want\n2-the month that I want and the next month\n3-the month that I want and the adjacent months\n");
    scanf("%d", &v);
    pdf(mes, ano, v, nome_arquivo, var1);
}

void pesquisa3(int var1, char *nome_arquivo, int ano, int mes, int limite)
{

    char tipo[4];

    if (var1==1)
        printf("digite o(s) tipo(s) de evento desejado:");
    if (var1==2)
        printf("enter the event type:");
    scanf("%s", &tipo);

    FILE *arquivo;
    arquivo = fopen(nome_arquivo, "rt");
    if(arquivo == 0)
    {
        perror("fopen");
        exit(1);
    }
    int minano, maxano;
    minano=2000;
    maxano=2000;
    while(fscanf(arquivo, "%c %d %d %d", &ab.tipo_s, &ab.dia_s, &ab.mes_s, &ab.ano_s) != EOF)
    {
        if(ab.ano_s<minano && ab.ano_s != 0)
            minano=ab.ano_s;
        if(ab.ano_s>maxano)
            maxano=ab.ano_s;
    }
    int i;
    int j;
    int k;
    int l;
    if(var1==1)
        printf(" tipo/dia/mes/ano/evento\n");
    if(var1==2)
        printf(" type/day/mon/year/event\n");

    for (k=0; k<=maxano; k++)
    {
        for (i=0; i<13; i++)
        {
            for (l=0; l<32; l++)
            {
                for (j=0; j<4; j++)
                {
                    while(fscanf(arquivo, "%c %d %d %d", &ab.tipo_s, &ab.dia_s, &ab.mes_s, &ab.ano_s) != EOF)
                    {
                        fgets(ab.evento, 70,arquivo);
                        ab.evento[strlen(ab.evento)-1]='\0';
                        if(tipo[j] == ab.tipo_s && k == ab.ano_s && i == ab.mes_s && l == ab.dia_s)
                        {
                            if(ab.dia_s<10)
                                printf(" %c    0%d   %d %d", ab.tipo_s, ab.dia_s, ab.mes_s, ab.ano_s);
                            else
                                printf(" %c    %d   %d %d", ab.tipo_s, ab.dia_s, ab.mes_s, ab.ano_s);
                            puts(ab.evento);
                        }

                    }
                    fflush(stdin);
                    fseek(arquivo, SEEK_SET, 0);
                }
            }
        }
        if (k==0)
        {
            k=k+minano;
        }
    }
    fclose(arquivo);
}




void pesquisa2(int c,int var1, char *nome_arquivo)
{
    char hau[4] = "zzzz";
    char nome_evento[70];
    FILE *arquivo;
    fflush(stdin);
    arquivo = fopen(nome_arquivo, "rt");
    if (var1==1)
        printf("\ndigite o nome do evento desejado: ");
    if (var1==2)
        printf("\nenter the event:");
    scanf("%s", nome_evento);
    strcat(nome_evento, hau);
    int a = 0;
    int q = 0;
    while (q < 4)
    {
        if (nome_evento[a]== hau[0])
        {
            q++;
        }
        else
        {
            q--;
            if (q<0)
            {
                q=0;
            }
        }
        a++;
    }
    a = a - 4;
    q = 0;
    int u=0;
    int i;
    int j;
    while(fscanf(arquivo, "%c %d %d %d", &ab.tipo_s, &ab.dia_s, &ab.mes_s, &ab.ano_s) != EOF)
    {
        fgets(ab.evento, 70,arquivo);
        for (i=0; i<a; i++)
        {

            j = i+1;
            if (ab.evento[j] == nome_evento[i])
                q++;
        }
        if(q<a)
            q=0;
        else
        {
            if (ab.dia_s==0)
            {
                if(var1==1)
                    printf("o evento esta marcado para todos os dias\n");
                if(var1==2)
                    printf("this event happens everyday \n");
            }
            if (ab.mes_s==0 && ab.dia_s != 0)
            {
                if(var1==1)
                    printf("o evento acontece todos os meses no dia %d\n", ab.dia_s);
                if(var1==2)
                    printf("this event happens every month on the %dth\n", ab.dia_s);
            }
            if (ab.ano_s == 0 && ab.dia_s != 0 && ab.mes_s != 0)
            {
                if(var1==1)
                    printf("o evento acontece todos os anos em %d/%d\n", ab.dia_s, ab.mes_s);
                if(var1==2)
                    printf("this event happens every year on %d/%d\n", ab.mes_s, ab.dia_s);
            }
            if (ab.ano_s != 0 && ab.dia_s != 0 && ab.mes_s != 0)
            {
                if(var1==1)
                    printf("o evento esta marcado para %d/%d/%d\n", ab.dia_s, ab.mes_s, ab.ano_s);
                if(var1==2)
                    printf("this event happens %d/%d/%d\n", ab.mes_s, ab.dia_s, ab.ano_s);
            }
            q=0;
            u=1;

        }
    }
    if (u==0)
    {
        if (var1==1)
            printf("este evento nao existe");
        if (var1==2)
            printf("this event doesnt exist");
    }
    fflush(stdin);
    fclose(arquivo);
}

int zero(int var1)
{

    if(var1==1)
    {
        printf("..Fim..");
    }
    if(var1==2)
    {
        printf("..Bye..");
    }
    exit(0);
}

void pesquisa(int c,int var1, char *nome_arquivo, int ano, int mes,int limite)
{
    int diaD;
    int ijk;
    do
    {
        if(c==3)
        {
            if(var1==1)
            {
                printf("qual dia pesquisar? ");
            }
            if(var1==2)
            {
                printf("which day do you want? ");
            }
            scanf("%d",&diaD);
            if(diaD>limite && var1==1)
            {
                printf("dia nao existente nesse mes\n");
                ijk=1;
            }
            else if(diaD>limite && var1==2)
            {
                printf("the day doesnt exist on month\n");
                ijk=1;
            }
            else
                ijk=0;
        }
    }
    while(ijk!=0);

    char tipo_evento[4]="AFVO";
    FILE *arquivo;
    fflush(stdin);
    arquivo = fopen(nome_arquivo, "rt");
    printf("\n");
    int contador=1;
    int i;
    if (diaD<=limite)
    {
        for (i=0; i<4; i++)
        {
            while(fscanf(arquivo, "%c %d %d %d", &ab.tipo_s, &ab.dia_s, &ab.mes_s, &ab.ano_s) != EOF)
            {
                fgets(ab.evento, 70,arquivo);
                ab.evento[strlen(ab.evento)-1]='\0';
                if (ab.ano_s == 0)
                {
                    ab.ano_s = ano;
                }
                if (ab.mes_s == 0)
                {
                    ab.mes_s = mes;
                }
                if (ab.dia_s == 0)
                {
                    ab.dia_s = diaD;
                }
                if (mes == ab.mes_s && ano == ab.ano_s)
                {
                    if (ab.tipo_s == tipo_evento[i])
                    {
                        if(c==3)
                        {
                            if(diaD == ab.dia_s)
                            {
                                if(var1==1)
                                {
                                    printf("%d-evento do dia %d: %c", contador,diaD,ab.tipo_s);
                                    contador++;
                                }

                                if(var1==2)
                                {
                                    printf("%d-event on the %dth: %c", contador, diaD,ab.tipo_s);
                                    contador++;
                                }
                                puts(ab.evento);
                            }
                        }
                    }

                }
            }
            fflush(stdin);
            fseek(arquivo, SEEK_SET, 0);
        }

    }

    fflush(stdin);
    fclose(arquivo);
}

void imprime1(int mes,int ano,int var1,int limite,char *nome_arquivo)
{
    char tipo_evento[4]="AFVO";
    char tipo[4];
    int a;
    if(var1==1)
        printf("\ndeseja um tipo de evento especifico? (1)sim (2)nao");
    if (var1==2)
        printf("\nsearch a specific type of event? (1)yes (2)no");
    scanf("%d", &a);
    if (a==1)
    {
        if (var1==1)
            printf("digite o(s) tipo(s) de evento desejado:");
        if (var1==2)
            printf("enter the event type:");
        scanf("%s", &tipo);

    }
    FILE *arquivo;
    arquivo = fopen(nome_arquivo, "rt");
    if(arquivo == 0)
    {
        perror("fopen");
        exit(1);
    }
    int i;
    int j;
    if(var1==1)
        printf(" tipo/dia/mes/ano/evento\n");
    if(var1==2)
        printf(" type/day/mon/year/event\n");


    for(i=1; i<=limite; i++)
    {
        for (j=0; j<4; j++)
        {
            if (a==2)
            {
                while(fscanf(arquivo, "%c %d %d %d", &ab.tipo_s, &ab.dia_s, &ab.mes_s, &ab.ano_s) != EOF)
                {
                    fgets(ab.evento, 70,arquivo);
                    ab.evento[strlen(ab.evento)-1]='\0';
                    if (ab.ano_s == 0)
                    {
                        ab.ano_s = ano;
                    }
                    if (ab.mes_s == 0)
                    {
                        ab.mes_s = mes;
                    }
                    if (mes == ab.mes_s && ano == ab.ano_s)
                    {
                        if(tipo_evento[j] == ab.tipo_s)
                        {
                            if(i == ab.dia_s || ab.dia_s == 0)
                            {
                                ab.dia_s = i;
                                if(ab.dia_s<10)
                                    printf(" %c    0%d   %d %d", ab.tipo_s, ab.dia_s, ab.mes_s, ab.ano_s);
                                else
                                    printf(" %c    %d   %d %d", ab.tipo_s, ab.dia_s, ab.mes_s, ab.ano_s);
                                puts(ab.evento);
                            }
                        }
                    }
                }
                fflush(stdin);
                fseek(arquivo, SEEK_SET, 0);
            }
            if (a==1)
            {
                while(fscanf(arquivo, "%c %d %d %d", &ab.tipo_s, &ab.dia_s, &ab.mes_s, &ab.ano_s) != EOF)
                {
                    fgets(ab.evento, 70,arquivo);
                    ab.evento[strlen(ab.evento)-1]='\0';
                    if (ab.ano_s == 0)
                    {
                        ab.ano_s = ano;
                    }
                    if (ab.mes_s == 0)
                    {
                        ab.mes_s = mes;
                    }
                    if (mes == ab.mes_s && ano == ab.ano_s)
                    {
                        if(tipo[j] == ab.tipo_s)
                        {
                            if(i == ab.dia_s || ab.dia_s == 0)
                            {
                                ab.dia_s = i;
                                if(ab.dia_s<10)
                                    printf(" %c    0%d   %d %d", ab.tipo_s, ab.dia_s, ab.mes_s, ab.ano_s);
                                else
                                    printf(" %c    %d   %d %d", ab.tipo_s, ab.dia_s, ab.mes_s, ab.ano_s);
                                puts(ab.evento);
                            }
                        }
                    }
                }
                fflush(stdin);
                fseek(arquivo, SEEK_SET, 0);
            }

        }

    }
    fclose(arquivo);
}

void imprime2(int mes,int ano,int i,int var1,int limite,char *nome_arquivo)
{
    int k;
    char tipo_evento[4]="AFVO";
    FILE *arquivo;
    arquivo = fopen(nome_arquivo, "rt");
    if(arquivo == 0)
    {
        perror("fopen");
        exit(1);
    }
    for (k=0; k<4; k++)
    {
            while(fscanf(arquivo, "%c %d %d %d", &ab.tipo_s, &ab.dia_s, &ab.mes_s, &ab.ano_s) != EOF)
            {
                fgets(ab.evento, 70,arquivo);
                ab.evento[strlen(ab.evento)-1]='\0';
                if (ab.ano_s == 0)
                {
                    ab.ano_s = ano;
                }
                if (ab.mes_s == 0)
                {
                    ab.mes_s = mes;
                }
                if (mes == ab.mes_s && ano == ab.ano_s)
                {
                    if(tipo_evento[k] == ab.tipo_s)
                    {
                        if(i == ab.dia_s || ab.dia_s == 0)
                        {
                            printf("%c ", ab.tipo_s);
                            puts(ab.evento);
                        }
                    }
                }
            }
            fflush(stdin);
            fseek(arquivo, SEEK_SET, 0);
    }

    fclose(arquivo);
}

void calcula(int unica,int var1, char *nome_arquivo)
{
    int mes, dia, ano, bs, cont_dia, cont_ano, pjan, i, j, limite, f,var;
    fflush(stdin);
    if(unica!=5 && unica !=6)
    {
        do
        {
            if(var1==1)
            {
                printf("\nmes: ");
                scanf("%d", &mes);
                if(mes<=0 || mes>=13)
                    printf("somente numeros entre 1 e 12");
            }
            if(var1==2)
            {
                printf("\nmonth: ");
                scanf("%d", &mes);
                if(mes<=0 || mes>=13)
                    printf("just numbers between 1-12");
            }
        }
        while(mes<=0 || mes>=13);
        if(var1==1)
        {
            printf("ano: ");
            scanf("%d", &ano);

        }
        if(var1==2)
        {
            printf("year: ");
            scanf("%d", &ano);
        }
    }
    dia = 1;
    pjan = 3;
    bs = (ano - 1901)/4;
    if (bs < 0)
        bs = 0;
    cont_ano = ano - 1901;
    cont_dia = bs + cont_ano + pjan;
    if((ano - 1900)%4 == 0)
    {
        f=1;
    }
    else
        f=0;
    char d1[15];

    if (mes==3)
    {
        cont_dia = cont_dia + 3 + f;
        limite = 31;
    }
    else if (mes==11)
    {
        cont_dia = cont_dia + 3 +f;
        limite = 30;
    }
    else if (mes==4)
    {
        cont_dia = cont_dia + 6 +f;
        limite = 30;
    }
    else if (mes==7)
    {
        cont_dia = cont_dia + 6 +f;
        limite = 31;
    }
    else if(mes==9)
    {
        cont_dia = cont_dia + 5 + f;
        limite = 30;
    }
    else if(mes==12)
    {
        cont_dia = cont_dia + 5 + f;
        limite = 31;
    }
    else if(mes==8)
    {
        cont_dia = cont_dia + 2 + f;
        limite = 31;
    }
    else if(mes==5)
    {
        cont_dia = cont_dia + 1 + f;
        limite = 31;
    }
    else if (mes==6)
    {
        cont_dia = cont_dia + 4 + f;
        limite = 30;
    }
    else if (mes==10)
    {
        cont_dia = cont_dia + f;
        limite = 31;
    }
    else if (mes==2)
    {
        cont_dia = cont_dia + 3;
        limite = 28 + f;
    }
    else if (mes==1)
    {
        limite = 31;
    }
    while(cont_dia > 7)
        cont_dia = cont_dia - 7;
    printf("\n\n");
    var=unica;
    if(var==3)
        pesquisa(unica,var1,nome_arquivo,ano,mes,limite);
    if(var==5)
        pesquisa3(var1,nome_arquivo,ano,mes,limite);
    if(var==6)
        pesquisa2(unica,var1,nome_arquivo);
    printf("\n");
    if(var!=3 && var!=4 &&var!=5)
    {

        if(var!=3 && var!=5 && var!=6)
        {
            char jan1 []="janeiro";
            char jan2 []="january";
            char fev1 []="feveiro";
            char fev2 []="february";
            char mar1 []="marco";
            char mar2 []="march";
            char abr1 []="abril";
            char abr2 []="april";
            char mai1 []="maio";
            char mai2 []="may";
            char jun1 []="junho";
            char jun2 []="june";
            char jul1 []="julho";
            char jul2 []="july";
            char ago1 []="agosto";
            char ago2 []="august";
            char set1 []="setembro";
            char set2 []="september";
            char out1 []="outubro";
            char out2 []="october";
            char nov1 []="novembro";
            char nov2 []="november";
            char dez1 []="dezembro";
            char dez2 []="december";
            if(mes==1)
            {
                if(var1==1)
                {
                    strcpy(d1,jan1);
                    printf(" %s %d\n\n",d1,ano);
                }
                if(var1==2)
                {
                    strcpy(d1,jan2);
                    printf(" %s %d\n\n",d1,ano);
                }
            }
            if(mes==2)
            {
                if(var1==1)
                {
                    strcpy(d1, fev1);
                    printf(" %s %d\n\n",d1,ano);
                }
                if(var1==2)
                {
                    strcpy(d1, fev2);
                    printf(" %s %d\n\n",d1,ano);
                }
            }
            if(mes==3)
            {
                if(var1==1)
                {
                    strcpy(d1, mar1);
                    printf(" %s %d\n\n",d1,ano);
                }
                if(var1==2)
                {
                    strcpy(d1, mar2);
                    printf(" %s %d\n\n",d1,ano);
                }
            }
            if(mes==4)
            {
                if(var1==1)
                {
                    strcpy(d1, abr1);
                    printf(" %s %d\n\n",d1,ano);
                }
                if(var1==2)
                {
                    strcpy(d1, abr2);
                    printf(" %s %d\n\n",d1,ano);
                }
            }
            if(mes==5)
            {
                if(var1==1)
                {
                    strcpy(d1, mai1);
                    printf(" %s %d\n\n",d1,ano);
                }
                if(var1==2)
                {
                    strcpy(d1, mai2);
                    printf(" %s %d\n\n",d1,ano);
                }
            }
            if(mes==6)
            {
                if(var1==1)
                {
                    strcpy(d1, jun1);
                    printf(" %s %d\n\n",d1,ano);
                }
                if(var1==2)
                {
                    strcpy(d1, jun2);
                    printf(" %s %d\n\n",d1,ano);
                }
            }
            if(mes==7)
            {
                if(var1==1)
                {
                    strcpy(d1, jul1);
                    printf(" %s %d\n\n",d1,ano);
                }
                if(var1==2)
                {
                    strcpy(d1, jul2);
                    printf(" %s %d\n\n",d1,ano);
                }
            }
            if(mes==8)
            {
                if(var1==1)
                {
                    strcpy(d1, ago1);
                    printf(" %s %d\n\n",d1,ano);
                }
                if(var1==2)
                {
                    strcpy(d1, ago2);
                    printf(" %s %d\n\n",d1,ano);
                }
            }
            if(mes==9)
            {
                if(var1==1)
                {
                    strcpy(d1, set1);
                    printf(" %s %d\n\n",d1,ano);
                }
                if(var1==2)
                {
                    strcpy(d1, set2);
                    printf(" %s %d\n\n",d1,ano);
                }
            }
            if(mes==10)
            {
                if(var1==1)
                {
                    strcpy(d1, out1);
                    printf(" %s %d\n\n",d1,ano);
                }
                if(var1==2)
                {
                    strcpy(d1, out2);
                    printf(" %s %d\n\n",d1,ano);
                }
            }
            if(mes==11)
            {
                if(var1==1)
                {
                    strcpy(d1, nov1);
                    printf(" %s %d\n\n",d1,ano);
                }
                if(var1==2)
                {
                    strcpy(d1, nov2);
                    printf(" %s %d\n\n",d1,ano);
                }
            }
            if(mes==12)
            {
                if(var1==1)
                {
                    strcpy(d1, dez1);
                    printf(" %s %d\n\n",d1,ano);
                }
                if(var1==2)
                {
                    strcpy(d1, dez2);
                    printf(" %s %d\n\n",d1,ano);
                }
            }
            if(var==1)
            {
                if(var1==1)
                    printf(" dom seg ter qua qui sex sab");
                if(var1==2)
                    printf(" sun mon tue wed thu fri sat");
                for (i=0; i<6; i++)
                {
                    printf("\n");
                    for (j=0; j<7; j++)
                    {
                        if (j + 1 <cont_dia && i==0)
                            printf("  . ");
                        else
                        {
                            if (dia <= limite)
                            {
                                if (dia <10)
                                    printf(" 0%d ", dia);
                                else
                                    printf(" %d ", dia);
                                dia++;
                            }
                        }
                    }
                }
                printf("\n\n");
                imprime1(mes, ano,var1,limite,nome_arquivo);
            }

            if(var==2)
            {
                char seg[]="segunda\0";
                char seg1[]="monday\0";
                char t[]="terca\0";
                char t1[]="tuesday\0";
                char qa[]="quarta\0";
                char qa1[]="wednesday\0";
                char qui[]="quinta\0";
                char qui1[]="thursday\0";
                char sex[]="sexta\0";
                char sex1[]="friday\0";
                char sab[]="sabado\0";
                char sab1[]="saturday\0";
                char dom[]="domingo\0";
                char dom1[]="sunday\0";
                char d[100];
                for(i=1; i<=limite; i++)
                {
                    if(var1==1)
                    {
                        if(cont_dia==1)
                            strcpy(d,dom);
                        if(cont_dia==2)
                            strcpy(d, seg);
                        if(cont_dia==3)
                            strcpy(d, t);
                        if(cont_dia==4)
                            strcpy(d, qa);
                        if(cont_dia==5)
                            strcpy(d, qui);
                        if(cont_dia==6)
                            strcpy(d, sex);
                        if(cont_dia==7 || cont_dia==0)
                            strcpy(d, sab);
                    }
                    if(var1==2)
                    {
                        if(cont_dia==1)
                            strcpy(d,dom1);
                        if(cont_dia==2)
                            strcpy(d, seg1);
                        if(cont_dia==3)
                            strcpy(d, t1);
                        if(cont_dia==4)
                            strcpy(d, qa1);
                        if(cont_dia==5)
                            strcpy(d, qui1);
                        if(cont_dia==6)
                            strcpy(d, sex1);
                        if(cont_dia==7 || cont_dia==0)
                            strcpy(d, sab1);
                    }

                    printf("%d %s\n",i,d);
                    imprime2(mes, ano, i,var1,limite,nome_arquivo);
                    cont_dia++;
                    if (cont_dia==8)
                        cont_dia=1;
                }
            }
        }
    }
    printf("\n\n");
}

void menu1(int var1)
{
    if(var1==1)
    {
        printf("\nMenu:");
        printf("\n.visualizar o calendario e eventos modo 1(1)\n.visualizar o calendario e eventos modo 2(2)\n.pesquisar data de um tipo de evento(3)\n.modo ingles(4)\n.pesquisar tipo de evento(5)\n.pesquisar evento(6)\n.modo pdf(7)\n.sair(8)");
        printf("\ndigite o numero de interesse: ");
    }

    if(var1==2)
    {
        printf("\nMenu:");
        printf("\n.see calendar mod 1(1)\n.see calendar mod 2(2)\n.search day(3)\n.portuguese mod(4)\n.search event type(5)\n.search event(6)\n.pdf mod(7)\n.end(8)");
        printf("\n enter your choice: ");
    }
}

void acao(int a,int var1,int b,char *nome_arquivo)
{
    int c;
    c=a;
    switch (c)
    {
    case 1:
        calcula(c,var1,nome_arquivo);
        break;
    case 2:
        calcula(c,var1,nome_arquivo);
        break;
    case 3:
        calcula(c,var1,nome_arquivo);
        break;
    case 4:
        {
            if(var1==1){
                var1=2;
                menu1(var1);
                {
                    do{
                        c=1;
                        scanf(" %d",&a);
                        if(a==4){
                            var1=1;
                            menu1(var1);{
                            do{
                                c=1;
                                scanf(" %d",&a);
                        if(a<=0 || a>=9){
                            printf("numero nao identificado, tente novamente ");
                        }
                        if(a>=1 && a<=8){
                            acao(a,var1,b,nome_arquivo);
                            printf("\nReturn to Menu(0) try again(1) End(another number): ");
                            scanf(" %d",&b);
                            if(b!=0 && b!=1)zero(var1);
                            if(b==0)menu1(var1);
                            if(b==1)printf("digite o numero do menu de interesse: ");
                        }
                    }while(c!=0);
                }
                    }if(a<=0 || a>=9){
                            printf("invaild number, try again ");
                        }
                        if(a>=1 && a<=8){
                            acao(a,var1,b,nome_arquivo);
                            printf("\nReturn to Menu(0) try again(1) End(another number): ");
                            scanf(" %d",&b);
                            if(b!=0 && b!=1)zero(var1);
                            if(b==0)menu1(var1);
                            if(b==1)printf("Menu number: ");
                        }
                    }while(c!=0);
                }
            }
            if(var1==2){
                var1=1;
                menu1(var1);
                {
                    do{
                        c=1;
                        scanf(" %d",&a);
                        if(a==4){
                            var1=2;
                            menu1(var1);{
                                do{
                                    c=1;
                                    scanf(" %d",&a);
                                    if(a<=0 || a>=9){
                                        printf("invaild number, try again ");
                                    }
                                    if(a>=1 && a<=8){
                                        acao(a,var1,b,nome_arquivo);
                                        printf("\nReturn to Menu(0) try again(1) End(another number): ");
                                        scanf(" %d",&b);
                                        if(b!=0 && b!=1) zero(var1);
                                        if(b==0)menu1(var1);
                                        if(b==1)printf("Menu number: ");
                                    }
                                }while(c!=0);
                            }
                        }
                        if(a<=0 || a>=9){
                            printf("numero nao identificado, tente novamente ");
                        }
                        if(a>=1 && a<=8){
                            acao(a,var1,b,nome_arquivo);
                            printf("\nVoltar para menu(0) tentar novamente(1) Sair(outro numero): ");
                            scanf(" %d",&b);
                            if(b!=0 && b!=1)zero(var1);
                            if(b==0)menu1(var1);
                            if(b==1)printf("digite o numero do menu de interesse: ");
                        }

                    }while(c!=0);
                }
            }
            break;
        case 5:
            calcula(c,var1,nome_arquivo);
            break;
        case 6:
            calcula(c,var1,nome_arquivo);
            break;
        case 7:
            callpdf(var1,nome_arquivo);
        case 8:
            zero(var1);
            break;
        }
    }
}

void portugueseIngles(int var1, char *nome_arquivo)
{
    int a,b,c;
    if(var1==1)
    {
        printf("\nBem vindo!\nEste e o algoritmo calendario.c. Nele voce pode:\n");
        menu1(var1);
        do
        {
            c=1;
            scanf(" %d",&a);
            if(a<=0 || a>=9)
            {
                printf("numero nao identificado, tente novamente ");
            }
            if(a>=1 && a<=8)
            {
                acao(a,var1,b,nome_arquivo);
                printf("\nVoltar para menu(0) tentar novamente(1) Sair(outro numero): ");
                scanf(" %d",&b);
                if(b!=0 && b!=1)
                    c=0;
                if(b==0)
                    menu1(var1);
                if(b==1)
                    printf("digite o numero do menu de interesse: ");
            }
        }
        while(c!=0);
    }
    if(var1==2)
    {
        printf("\nWellcome!\nThis is the calendario.c. Here, you can do:\n");
        menu1(var1);
        do
        {
            c=1;
            scanf(" %d",&a);

            if(a<=0 || a>=9)
            {
                printf("invaild number, try again ");
            }
            if(a>=1 && a<=8)
            {
                acao(a,var1,b,nome_arquivo);
                printf("\nReturn to Menu(0) try again(1) End(another number): ");
                scanf(" %d",&b);
                if(b!=0 && b!=1)
                    c=0;
                if(b==0)
                    menu1(var1);
                if(b==1)
                    printf("Menu number: ");
            }
        }
        while(c!=0);
    }
}


int main()
{
    int a,c;
    do
    {
        c=1;
        printf(".Portugues(0)\n.English(1)\n");
        printf("opcao/option: ");
        scanf("%d",&a);
        a=a+1;
        char nome_arquivo[50];
        if(a==1)
        {
            printf("digite o nome do arquivo:");
            scanf("%s", nome_arquivo);
            strcat(nome_arquivo,".txt");
            portugueseIngles(a,nome_arquivo);
            c=0;
            printf("\n..fim..");
        }
        if(a==2)
        {
            printf("\nenter the file's name:");
            scanf("%s", nome_arquivo);
            strcat(nome_arquivo,".txt");
            portugueseIngles(a,nome_arquivo);
            c=0;
            printf("\n..Bye..");
        }
    }
    while(c!=0);

    return 0;
}
