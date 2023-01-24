/*****************************************************************************************
 Implemente a função descrita nas questões a seguir, seguindo as especificações. No mesmo
 exercício, construa a função main() que utilize ou teste a função desenvolvida.

 3. int ordena (int *n1, int *n2, int *n3, char ordem );
 Função :ordena os valores passados em ordem crescente ou decrescente.
 Parâmetros : n1, n2 e n3 – ponteiros com valores a serem ordenados
 ordem – ‘c’ para ordenamento crescente e ‘d’ para ordenamento decrescente.
 Pode ser maiusculo ou minusculo.
 Retorno : 0 para função realizada, -1 para erro de parametro
 *****************************************************************************************/

 #include<stdio.h>
 #include<stdlib.h>
 #include<locale.h>

 int ordena (int *n1, int *n2, int *n3, char ordem)
 {
   int troca;

   if(ordem=='d' || ordem=='D')
   {
        if(*n1>*n2 && *n1>*n3) //se n1 for a maior variavel
        {
             if(*n3>*n2)
             {
               troca=*n2;    //atribui o conteudo de n2 a variavel troca
               *n2=*n3;      //a variavel n2 recebe o conteudo de n3
               *n3=troca;    //a variavel n3 recebe o valor de troca
             }
          return 0;
        }

        else if(*n2>*n1 && *n2>*n3) //se n2 for a maior variavel
        {
           troca=*n1;    //atribui o conteudo de n1 a variavel troca
           *n1=*n2;      //a variavel n1 recebe o conteudo de n2
           *n2=troca;    //a variavel n2 recebe o valor de troca

           if(*n3>*n2)
             {
               troca=*n2;    //atribui o conteudo de n2 a variavel troca
               *n2=*n3;      //a variavel n2 recebe o conteudo de n3
               *n3=troca;    //a variavel n3 recebe o valor de troca
             }
          return 0;
        }

        else //n3 é a maior variável
        {
           troca=*n1;    //atribui o conteudo de n1 a variavel troca
           *n1=*n3;      //a variavel n1 recebe o conteudo de n3
           *n3=troca;    //a variavel n3 recebe o valor de troca

           if(*n3>*n2)
             {
               troca=*n2;    //atribui o conteudo de n2 a variavel troca
               *n2=*n3;      //a variavel n2 recebe o conteudo de n3
               *n3=troca;    //a variavel n3 recebe o valor de troca
             }
          return 0;
        }
   }

   if(ordem=='c' || ordem=='C')
  {
        if(*n1<*n2 && *n1<*n3) //se n1 for a menor variavel
        {
             if(*n3<*n2)
             {
               troca=*n2;    //atribui o conteudo de n2 a variavel troca
               *n2=*n3;      //a variavel n2 recebe o conteudo de n3
               *n3=troca;    //a variavel n3 recebe o valor de troca
             }
           return 0;
        }

        else if(*n2<*n1 && *n2<*n3) //se n2 for a menor variavel
        {
           troca=*n1;    //atribui o conteudo de n1 a variavel troca
           *n1=*n2;      //a variavel n1 recebe o conteudo de n2
           *n2=troca;    //a variavel n2 recebe o valor de troca

           if(*n3<*n2)
             {
               troca=*n2;    //atribui o conteudo de n2 a variavel troca
               *n2=*n3;      //a variavel n2 recebe o conteudo de n3
               *n3=troca;    //a variavel n3 recebe o valor de troca
             }
           return 0;
        }

        else //n3 é a menor variável
        {
           troca=*n1;    //atribui o conteudo de n1 a variavel troca
           *n1=*n3;      //a variavel n1 recebe o conteudo de n3
           *n3=troca;    //a variavel n3 recebe o valor de troca

           if(*n3<*n2)
             {
               troca=*n2;    //atribui o conteudo de n2 a variavel troca
               *n2=*n3;      //a variavel n2 recebe o conteudo de n3
               *n3=troca;    //a variavel n3 recebe o valor de troca
             }
           return 0;
        }

   }

   return -1;   //erro de parametro -> usuario digitou uma letra diferente de C ou D
 }




  int main ()
 {
  setlocale(LC_ALL,"");

  int x=10;
  int y=5;
  int z=20;
  char opcao;
  int retorno;

  int *px=&x;
  int *py=&y;
  int *pz=&z;

  printf("Valores de x, y e z respectivamente: %d, %d, %d . \n", x,y,z);

  printf("Digite C para ordena-los de forma crescente ou D, de forma decrescente: ");
  scanf("%c",&opcao);

  retorno=ordena(px,py,pz,opcao);

  if(retorno==-1)
    printf("Erro de parametros.\n\n");

  if(retorno==0)
  {
    printf("Ordenação concluída !! \n");
    printf("Valores de x, y e z respectivamente: %d, %d, %d . \n\n", x,y,z);
  }

  system("pause");

 }
