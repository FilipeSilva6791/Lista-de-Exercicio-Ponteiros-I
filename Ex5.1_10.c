/****************************************************************************************
  Implemente a fun��o descrita nas quest�es a seguir, seguindo as especifica��es. No mesmo
  exerc�cio, construa a fun��o main() que utilize ou teste a fun��o desenvolvida.

  5.1 int triangulo-retangulo(float *oposto, *float adjacente, float *hipotenusa);
  Fun��o : Calcula o segmento do tri�ngulo ret�ngulo cujo valor � zero.
  Par�metros : oposto � cateto oposto
  adjacente � cateto adjacente
  hipotenusa - hipotenusa
  Retorno : 0 para fun��o realizada, -1 para erro de parametro (dois ou mais parametros
  em zero)
 ****************************************************************************************/

 #include<stdio.h>
 #include<stdlib.h>
 #include<math.h>

 int triangulo_retangulo (float *oposto, float *adjacente, float *hipotenusa)   //*var -> conteudo da variavel no qual o ponteiro esta apontando
 {
   if(*oposto==0 && *adjacente>0 && *hipotenusa>0)
   {
      *oposto=sqrt(pow(*hipotenusa,2) - pow(*adjacente,2));    //pow(x,y) = x^y   /  sqrt = raiz quadrada
      return 0;
   }

   if(*oposto>0 && *adjacente==0 && *hipotenusa>0)
   {
      *adjacente=sqrt(pow(*hipotenusa,2) - pow(*oposto,2));
      return 0;

   }

   if(*oposto>0 && *adjacente>0 && *hipotenusa==0)
   {
      *hipotenusa=sqrt(pow(*oposto,2) + pow(*adjacente,2));
      return 0;
   }

    return -1;   //se n�o entrar em nenhum if -> erro de parametro
 }

  int main ()
  {
     float co, ca, hip;             //cateto oposto, cateto adjacente e hipotenusa
     float *p_co, *p_ca, *p_hip;    //ponteiro para cada uma das variaveis acima

     //apontando os ponteiros
     p_co=&co;
     p_ca=&ca;
     p_hip=&hip;

     printf("Digite os valores conhecidos e atribua zero ao lado que sera calculado: \n");

     printf("hipotenusa = ");
     scanf("%f", &hip);

     printf("cateto adjacente = ");
     scanf("%f", &ca);

     printf("cateto oposto = ");
     scanf("%f", &co);


     if (triangulo_retangulo(p_co,p_ca,p_hip)==0 )
     {
         printf("\nfuncao realizada !!\n\n");
         printf("Hip = %.2f\n CA = %.2f\n CO = %.2f\n\n",hip,ca,co);

     }
     else
         printf("\nerro de parametro !!\n\n" );

      system("pause");
  }
