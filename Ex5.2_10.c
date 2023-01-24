/****************************************************************************************
  Implemente a função descrita nas questões a seguir, seguindo as especificações. No mesmo
  exercício, construa a função main() que utilize ou teste a função desenvolvida.

  5. int divisorTensao (float ve, float vs, float *r1, float *r2);
  Função :Calcula o valor de r1 ou r2 para os valores de ve e vs dados.
  Se um dos valores de r1 ou r2 forem 0, calcular o valor deste componente com
  base no valor do outro.
  Se ambos forem zero, notificar erro de parametro
  Parâmetros :
  ve – tensão de entrada
  vs – tensão de saída (tensão de r2)
  r1 e r2 – resistores do divisor
  Retorno : 0 para função realizada, -1 r1 e r2 em zero, -2 para vs > ve.
 *****************************************************************************************/

  #include<stdio.h>
  #include<stdlib.h>

  int divisorTensao (float ve, float vs, float *r1, float *r2)
  {
    float corrente;

    if(vs>ve)            //erro de parametro
        return -2;

    if(*r1==0 && *r2==0) //erro de parametro
        return -1;

    if(*r1==0 && *r2>0)  //quando o usuario quiser calcular r1
    {
       corrente=vs / *r2;
       *r1=(ve-vs)/corrente;

       return 0;
    }


    if(*r1>0 && *r2==0) //quando o ususraio quiser calcular r2
    {
       corrente=((ve-vs)/ *r1);
       *r2=vs/corrente;

        return 0;
    }
  }

  int main ()
  {
    float Vin, Vout;    //tensao de entrada e de saida
    float RA,RB;        //resistor a e resistor b

    float *p_RA, *p_RB;  //ponteiros para RA e RB

    //apontando os ponteiros
    p_RA=&RA;
    p_RB=&RB;

    printf("Calculo de uma das resistencias do divisor de tensao.\n\n");

    printf("V entrada = ");
    scanf("%f",&Vin);

    printf("V saida = ");
    scanf("%f",&Vout);

    printf("\nPara as resistencias, digite o valor do r conhecido e atribua zero ao que sera calculado.\n");

    printf("R1 = ");
    scanf("%f",&RA);

    printf("R2 = ");
    scanf("%f",&RB);

    if(divisorTensao(Vin,Vout,p_RA,p_RB)==0)
    {
       printf("\nFuncao realizada !!\n");
       printf("Vin = %.2f \nVout = %.2f \nRA = %.2f \nRB = %.2f\n\n",Vin,Vout,RA,RB);
    }

    if(divisorTensao(Vin,Vout,p_RA,p_RB)==-1)
        printf("\nErro de parametro. R1 e R2 sao iguais a zero\n\n");

    if(divisorTensao(Vin,Vout,p_RA,p_RB)==-2)
        printf("\nErro de parametro. Tensao de saida e maior que tensao de entrada.\n\n");


    system("pause");
  }
