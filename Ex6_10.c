/*****************************************************************************************
 Implemente a função descrita nas questões a seguir, seguindo as especificações. No mesmo
 exercício, construa a função main() que utilize ou teste a função desenvolvida.

 6. void ordena_alfa (char *p1, char *p2 );
 Função :coloca as palavras p1 e p2 em ordem alfabética
 Parâmetros : p1 e p2 – duas strings a serem ordenadas
 Dica : use a função strcmp();
 *****************************************************************************************/

 #include<stdlib.h>
 #include<stdlib.h>
 #include<string.h>
 #include<locale.h>

 void ordena (char *p1, char *p2)
 {
   char stringtroca [30];
   int i=0, teste=0;


   do
   {
     if(*(p1+i) < *(p2+i)) //p1 vem antes
        teste=-1;
     if(*(p1+i) > *(p2+i)) //p2 vem antes
        teste=1;
     if(*(p1+i) == *(p2+i))//mesma letra
        teste=0;
     if(*(p1+i)=='\0' && *(p2+i)=='\0') //as duas strings são exatamente iguais
        teste=2;
     i++;
   } while(teste == 0 );



   if(teste==-1) //se p1 vem antes
   {
     //não faz nada, já está em ordem
   }

   else if(teste==1)
   {
     //passando a string1 para a variavel stringtroca
     i=0;
     while(*(p1+i) != '\0')
     {
      stringtroca[i]=*(p1+i);
      i++;
     }
     stringtroca[i]='\0';

     //passando a string2 para a string1
     i=0;
     while(*(p2+i) != '\0')
     {
      *(p1+i)= *(p2+i);
      i++;
     }
     *(p1+i)= '\0';

     //passando a stringtroca para a string2
     i=0;
     while(stringtroca[i] != '\0')
     {
      *(p2+i)= stringtroca[i];
      i++;
     }
     *(p2+i)= '\0';
   }

   else
    printf("\nAs strings digitadas são iguais. \n");
 }

 void primeiramaiuscula (char *pa, char *pb)
 {
   if (*pa>'Z')
        *pa-=('a'-'A');

   if (*pb>'Z')
        *pb-=('a'-'A');

 }

 void primeiraminuscula (char *pa, char *pb)
 {
   if (*pa<'a')
        *pa+=('a'-'A');

   if (*pb<'a')
        *pb+=('a'-'A');
 }


 int main ()
 {
    setlocale(LC_ALL,"");

    char string1[30];
    char string2[30];

    char *pstring1;
    char *pstring2;

    pstring1 = string1;
    pstring2 = string2;


    printf("Digite duas palavras: \nPalavra 1: ");
    gets(string1);
    printf("Palavra 2: ");
    gets(string2);


    primeiramaiuscula(pstring1,pstring2);
    ordena(pstring1,pstring2);
    primeiraminuscula(pstring1,pstring2);

    printf("\nPalavras ordenadas em ordem alfabética: \n");
    printf("Palavra 1: %s \n",string1);
    printf("Palavra 2: %s \n\n",string2);

    system("pause");
 }
