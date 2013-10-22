#include<stdio.h>
//#include<unistd.h>
#include<windows.h>
#include<stdlib.h>

int sleep=0;

int um=0, dois=0, tres=0, quatro=0, cinco=0, seis=0;
int combinacao = 1;
int inicializacao=0;

void combinacao1 () // OK
{
    int i = 1;
    while(i>0)
      {
        if(inicializacao == 0)
        {
            printf("Inicializando, aguarde......\n");
            inicializacao++;
        }
        printf("\n             |  |             ");
        printf("\n             |  |             ");
        printf("\n             +  |             ");
        printf("\n             %d  |             ", seis);
        printf("\n-------------    %d+-----------", cinco);
        printf("                                ");
        printf("\n-------------    -------------");
        printf("\n             |  %d            ",quatro);
        printf("\n             +  +             ");
        printf("\n             %d  |             ", tres);
        printf("\n-------------    -------------");
        printf("                                ");
        printf("\n------------+%d   --------------", um);
        printf("\n             |  %d             ", dois);
        printf("\n             |  +             ");
        printf("\n             |  |             ");

        Sleep(7000);
        system("cls");
        if ( combinacao == 1)
        {
            um = 1;
            if(sleep == 0)
            {


            printf("\n             |  |             ");
        printf("\n             |  |             ");
        printf("\n             +  |             ");
        printf("\n             %d  |             ", seis);
        printf("\n-------------    %d+-----------", cinco);
        printf("                                ");
        printf("\n-------------    -------------");
        printf("\n             |  %d            ",quatro);
        printf("\n             +  +             ");
        printf("\n             %d  |             ", tres);
        printf("\n-------------    -------------");
        printf("                                ");
        printf("\n------------+%d   --------------", um);
        printf("\n             |  %d             ", dois);
        printf("\n             |  +             ");
        printf("\n             |  |             ");
                Sleep(3000);
                system("cls");
                sleep++;
            }
            quatro = 1;

            cinco = 0;
            seis = 0;
            tres = 0;
            dois = 0;
       }
       else
       if ( combinacao == 2)
       {
            dois = 1;
            quatro = 1;

            um = 0;
            cinco = 0;
            tres = 0;
            seis = 0;
       }

       else

       if ( combinacao == 3)
       {
            tres = 1;
            cinco = 1;

            um = 0;
            dois = 0;
            quatro = 0;
            seis = 0;
       }

       else

       if ( combinacao == 4)
       {
            seis = 1;
            tres = 1;

            um = 0;
            dois = 0;
            quatro = 0;
            cinco = 0;
       }

       combinacao++;
       if(combinacao == 5)
                     combinacao = 1;
    }
}
void combinacao2 ()
{
sleep = 0;
inicializacao=0;
int i = 1;
while(i>0)
      {
          if(inicializacao == 0)
        {
            printf("Inicializando, aguarde......\n");
            inicializacao++;
        }

        printf("\n             |  |             ");
        printf("\n             |  |             ");
        printf("\n             +  |             ");
        printf("\n             %d  |             ", seis);
        printf("\n-------------    %d+-----------", cinco);
        printf("                                ");
        printf("\n-------------    -------------");
        printf("\n             |  %d            ",quatro);
        printf("\n             +  +             ");
        printf("\n             %d  |             ", tres);
        printf("\n-------------    -------------");
        printf("                                ");
        printf("\n------------+%d   --------------", um);
        printf("\n             |  %d             ", dois);
        printf("\n             |  +             ");
        printf("\n             |  |             ");

        Sleep(7000);
        system("cls");

        if ( combinacao == 1)
       {
            dois = 1;
            if(sleep == 0)
            {

            printf("\n             |  |             ");
        printf("\n             |  |             ");
        printf("\n             +  |             ");
        printf("\n             %d  |             ", seis);
        printf("\n-------------    %d+-----------", cinco);
        printf("                                ");
        printf("\n-------------    -------------");
        printf("\n             |  %d            ",quatro);
        printf("\n             +  +             ");
        printf("\n             %d  |             ", tres);
        printf("\n-------------    -------------");
        printf("                                ");
        printf("\n------------+%d   --------------", um);
        printf("\n             |  %d             ", dois);
        printf("\n             |  +             ");
        printf("\n             |  |             ");
                Sleep(3000);
                system("cls");
                sleep = 1;
            }

            quatro = 1;

            um = 0;
            cinco = 0;
            tres = 0;
            seis = 0;
       }
        if ( combinacao == 2)
        {
            um = 1;
            quatro = 1;

            cinco = 0;
            seis = 0;
            tres = 0;
            dois = 0;
       }

       if ( combinacao == 3)
       {
            tres = 1;
            cinco = 1;

            um = 0;
            dois = 0;
            quatro = 0;
            seis = 0;
       }
       if ( combinacao == 4)
       {
            seis = 1;
            tres = 1;

            um = 0;
            dois = 0;
            quatro = 0;
            cinco = 0;
       }

       combinacao++;
       if(combinacao == 5)
                     combinacao = 1;
    }
}

void combinacao3 ()
{
    inicializacao=0;
      sleep = 0;
      int i = 1;
      while(i>0)
      {
          if(inicializacao == 0)
        {
            printf("Inicializando, aguarde......\n");
            inicializacao++;
        }

        printf("\n             |  |             ");
        printf("\n             |  |             ");
        printf("\n             +  |             ");
        printf("\n             %d  |             ", seis);
        printf("\n-------------    %d+-----------", cinco);
        printf("                                ");
        printf("\n-------------    -------------");
        printf("\n             |  %d            ",quatro);
        printf("\n             +  +             ");
        printf("\n             %d  |             ", tres);
        printf("\n-------------    -------------");
        printf("                                ");
        printf("\n------------+%d   --------------", um);
        printf("\n             |  %d             ", dois);
        printf("\n             |  +             ");
        printf("\n             |  |             ");

        Sleep(7000);
        system("cls");

        if ( combinacao == 1)
       {
            tres = 1;
            if(sleep == 0)
            {
             printf("\n             |  |             ");
        printf("\n             |  |             ");
        printf("\n             +  |             ");
        printf("\n             %d  |             ", seis);
        printf("\n-------------    %d+-----------", cinco);
        printf("                                ");
        printf("\n-------------    -------------");
        printf("\n             |  %d            ",quatro);
        printf("\n             +  +             ");
        printf("\n             %d  |             ", tres);
        printf("\n-------------    -------------");
        printf("                                ");
        printf("\n------------+%d   --------------", um);
        printf("\n             |  %d             ", dois);
        printf("\n             |  +             ");
        printf("\n             |  |             ");
                Sleep(3000);
                system("cls");
                sleep++;
            }
            seis = 1;


            um = 0;
            dois = 0;
            quatro = 0;
            cinco = 0;
       }
       if ( combinacao == 2)
        {
            um = 1;
            quatro = 1;

            cinco = 0;
            seis = 0;
            tres = 0;
            dois = 0;
       }
       if ( combinacao == 3)
       {
            dois = 1;
            quatro = 1;

            um = 0;
            cinco = 0;
            tres = 0;
            seis = 0;
       }

       if ( combinacao == 4)
       {
            tres = 1;
            cinco = 1;

            um = 0;
            dois = 0;
            quatro = 0;
            seis = 0;
       }

       combinacao++;
       if(combinacao == 5)
                     combinacao = 1;
    }
}
void combinacao4 ()
{
    inicializacao=0;

      sleep = 0;
      int i = 1;
      while(i>0)
      {

if(inicializacao == 0)
        {
            printf("Inicializando, aguarde......\n");
            inicializacao++;
        }
        printf("\n             |  |             ");
        printf("\n             |  |             ");
        printf("\n             +  |             ");
        printf("\n             %d  |             ", seis);
        printf("\n-------------    %d+-----------", cinco);
        printf("                                ");
        printf("\n-------------    -------------");
        printf("\n             |  %d            ",quatro);
        printf("\n             +  +             ");
        printf("\n             %d  |             ", tres);
        printf("\n-------------    -------------");
        printf("                                ");
        printf("\n------------+%d   --------------", um);
        printf("\n             |  %d             ", dois);
        printf("\n             |  +             ");
        printf("\n             |  |             ");

        Sleep(3000);
        system("cls");
        if ( combinacao == 1)
        {
            quatro = 1;
            if(sleep == 0)
            {
                printf("\n             |  |             ");
        printf("\n             |  |             ");
        printf("\n             +  |             ");
        printf("\n             %d  |             ", seis);
        printf("\n-------------    %d+-----------", cinco);
        printf("                                ");
        printf("\n-------------    -------------");
        printf("\n             |  %d            ",quatro);
        printf("\n             +  +             ");
        printf("\n             %d  |             ", tres);
        printf("\n-------------    -------------");
        printf("                                ");
        printf("\n------------+%d   --------------", um);
        printf("\n             |  %d             ", dois);
        printf("\n             |  +             ");
        printf("\n             |  |             ");

                Sleep(5000);
                system("cls");
                sleep++;
            }
            um = 1;
            cinco = 0;
            seis = 0;
            tres = 0;
            dois = 0;
       }
       if ( combinacao == 2)
       {
            dois = 1;
            quatro = 1;

            um = 0;
            cinco = 0;
            tres = 0;
            seis = 0;
       }
       if ( combinacao == 3)
       {
            tres = 1;
            cinco = 1;

            um = 0;
            dois = 0;
            quatro = 0;
            seis = 0;
       }
       if ( combinacao == 4)
       {
            seis = 1;
            tres = 1;

            um = 0;
            dois = 0;
            quatro = 0;
            cinco = 0;
       }
       combinacao++;
       if(combinacao == 5)
                     combinacao = 1;
    }
}
void combinacao5 ()
{
      inicializacao=0;
      sleep = 0;
      int i = 1;
      while(i>0)
      {
          if(inicializacao == 0)
        {
            printf("Inicializando, aguarde......\n");
            inicializacao++;
        }

        printf("\n             |  |             ");
        printf("\n             |  |             ");
        printf("\n             +  |             ");
        printf("\n             %d  |             ", seis);
        printf("\n-------------    %d+-----------", cinco);
        printf("                                ");
        printf("\n-------------    -------------");
        printf("\n             |  %d            ",quatro);
        printf("\n             +  +             ");
        printf("\n             %d  |             ", tres);
        printf("\n-------------    -------------");
        printf("                                ");
        printf("\n------------+%d   --------------", um);
        printf("\n             |  %d             ", dois);
        printf("\n             |  +             ");
        printf("\n             |  |             ");

        Sleep(7000);
        system("cls");
        if ( combinacao == 1)
       {
            cinco = 1;
            if(sleep == 0)
            {


                printf("\n             |  |             ");
        printf("\n             |  |             ");
        printf("\n             +  |             ");
        printf("\n             %d  |             ", seis);
        printf("\n-------------    %d+-----------", cinco);
        printf("                                ");
        printf("\n-------------    -------------");
        printf("\n             |  %d            ",quatro);
        printf("\n             +  +             ");
        printf("\n             %d  |             ", tres);
        printf("\n-------------    -------------");
        printf("                                ");
        printf("\n------------+%d   --------------", um);
        printf("\n             |  %d             ", dois);
        printf("\n             |  +             ");
        printf("\n             |  |             ");
        Sleep(3000);
        system("cls");
                sleep++;
            }
            tres = 1;


            um = 0;
            dois = 0;
            quatro = 0;
            seis = 0;
       }
        if ( combinacao == 2)
        {
            um = 1;
            quatro = 1;

            cinco = 0;
            seis = 0;
            tres = 0;
            dois = 0;
       }
       if ( combinacao == 3)
       {
            dois = 1;
            quatro = 1;

            um = 0;
            cinco = 0;
            tres = 0;
            seis = 0;
       }

       if ( combinacao == 4)
       {
            seis = 1;
            tres = 1;

            um = 0;
            dois = 0;
            quatro = 0;
            cinco = 0;
       }
       combinacao++;
       if(combinacao == 5)
                     combinacao = 1;
    }
}
void combinacao6 ()
{
      inicializacao=0;
      sleep = 0;
      int i = 1;
      while(i>0)
      {
          if(inicializacao == 0)
        {
            printf("Inicializando, aguarde......\n");
            inicializacao++;
        }

        printf("\n             |  |             ");
        printf("\n             |  |             ");
        printf("\n             +  |             ");
        printf("\n             %d  |             ", seis);
        printf("\n-------------    %d+-----------", cinco);
        printf("                                ");
        printf("\n-------------    -------------");
        printf("\n             |  %d            ",quatro);
        printf("\n             +  +             ");
        printf("\n             %d  |             ", tres);
        printf("\n-------------    -------------");
        printf("                                ");
        printf("\n------------+%d   --------------", um);
        printf("\n             |  %d             ", dois);
        printf("\n             |  +             ");
        printf("\n             |  |             ");

        Sleep(7000);
        system("cls");
        if ( combinacao == 1)
       {
            seis = 1;
            if(sleep == 0)
            {


                printf("\n             |  |             ");
        printf("\n             |  |             ");
        printf("\n             +  |             ");
        printf("\n             %d  |             ", seis);
        printf("\n-------------    %d+-----------", cinco);
        printf("                                ");
        printf("\n-------------    -------------");
        printf("\n             |  %d            ",quatro);
        printf("\n             +  +             ");
        printf("\n             %d  |             ", tres);
        printf("\n-------------    -------------");
        printf("                                ");
        printf("\n------------+%d   --------------", um);
        printf("\n             |  %d             ", dois);
        printf("\n             |  +             ");
        printf("\n             |  |             ");
        Sleep(3000);
        system("cls");
                sleep++;
            }
            tres = 1;

            um = 0;
            dois = 0;
            quatro = 0;
            cinco = 0;
       }
        if ( combinacao == 2)
        {
            um = 1;
            quatro = 1;

            cinco = 0;
            seis = 0;
            tres = 0;
            dois = 0;
       }
       if ( combinacao == 3)
       {
            dois = 1;
            quatro = 1;

            um = 0;
            cinco = 0;
            tres = 0;
            seis = 0;
       }
       if ( combinacao == 4)
       {
            tres = 1;
            cinco = 1;

            um = 0;
            dois = 0;
            quatro = 0;
            seis = 0;
       }

       combinacao++;
       if(combinacao == 5)
                     combinacao = 1;
    }
}



int main()
{
    int semaforoinicial;



    printf("Informe o numero do semaforo inicial: ");
    scanf("%d", &semaforoinicial);

    if( semaforoinicial == 1)
        combinacao1();
    if( semaforoinicial == 2)
        combinacao2();
    if( semaforoinicial == 3)
        combinacao3();
    if( semaforoinicial == 4)
        combinacao4();
    if( semaforoinicial == 5)
        combinacao5();
    if( semaforoinicial == 6)
        combinacao6();

    printf("\n\n");
    system("pause");
    return (0);
}
