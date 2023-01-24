/*****************************************************************************************
 Implemente a fun��o descrita nas quest�es a seguir, seguindo as especifica��es. No mesmo
 exerc�cio, construa a fun��o main() que utilize ou teste a fun��o desenvolvida.

 2. void troca (int *p1, int *p2);
 Fun��o : coloca o valor de p2 em p1 e visce-versa
 Parametros : parametros para as variaveis a serem trocadas
 *****************************************************************************************/

 #include<stdio.h>
 #include<stdlib.h>

 void troca (int *p1, int *p2)
 {
    int troca;    //variavel utilizada apenas para troca

    troca=*p1;    //atribui o conteudo de P1 a variavel troca
    *p1=*p2;      //a variavel P1 recebe o conteudo de P2
    *p2=troca;    //a variavel P2 recebe o valor de troca
 }

 int main ()
 {
    int x =20;
    int y =10;

    int *px=&x;   //declarando o ponteiro e apontando para X
    int *py=&y;   //declarando o ponteiro e apontando para Y

    printf("antes -> x= %d y= %d \n", x, y);

    troca(px,py); //testando a fun��o

    printf("depois-> x= %d y= %d \n\n", x, y);


    system("pause");

 }
