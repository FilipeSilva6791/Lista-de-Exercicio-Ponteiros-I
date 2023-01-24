 /****************************************************************************************
  Implemente a função descrita nas questões a seguir, seguindo as especificações. No mesmo
  exercício, construa a função main() que utilize ou teste a função desenvolvida.

  4. int sinal(float *frequencia, float *periodo );
  Função : Calcula o parâmetro cujo valor é zero.
  Parâmetros : frequencia – ponteiro para o valor de frequencia do sinal
  periodo – ponteiro para o valor do periodo do sinal
  Retorno : 0 para função realizada, -1 para erro de parametro (dois parametros em zero)
  ****************************************************************************************/

  #include<stdio.h>
  #include<stdlib.h>

  int sinal (float *frequencia, float *periodo)
  {
     if(*periodo == 0 && *frequencia !=0)
     {
        *periodo = (1 / *frequencia);
        return 0;
     }

     if(*frequencia==0 && *periodo!=0 )
     {
        *frequencia= (1 / *periodo) ;
        return 0;
     }

     if(*frequencia==0 && *periodo==0)
        return -1;
  }


  int main ()
  {

    float T;   //período
    float f;   //frequência

    float *pont_T;  //ponteiro que aponta pra variavel do periodo
    float *pont_f;  //ponteiro que aponta pra variavel da freq.

    pont_T = &T;    //apontando para o endereco da variavel T
    pont_f = &f;    //apontando para o endereco da variavel f

    printf("Digite o valor conhecido e atribua zero ao valor que deve ser calculado:\n\n");

    printf("frequencia = ");
    scanf("%f", &f);

    printf("Periodo = ");
    scanf("%f", &T);

    if (sinal(pont_f,pont_T) == 0)
    {
       printf("\nfuncao realizada ! \n");
       printf("frequencia = %.2f \nperiodo = %.2f\n\n", f,T);

    }
    else
       printf("\nErro de parametro. \n\n");

    system ("pause");
  }
