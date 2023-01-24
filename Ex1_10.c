 #include <stdio.h>
 int main(void)
{
 float vet[5] = {1.1,2.2,3.3,4.4,5.5};
 float *f;
 int i;

 f = vet;  //aqui o código aponta para o endereço do valor do vetor

 printf("contador/valor/valor/endereco/endereco");

 for(i = 0 ; i <= 4 ; i++)
 {
   printf("\ni = %d",i);                    //exibe o valor da variavel i a cada repeticao
   printf(" vet[%d] = %.1f",i, vet[i]);     //exibe o valor do vetor em cada posicao
   printf(" *(f + %d) = %.1f",i, *(f+i));   //exibe o conteudo da variavel que o ponteiro esta apontando naquele momento
   printf(" &vet[%d] = %X",i, &vet[i]);     //exibe o endereco de cada valor do vetor
   printf(" (f + %d) = %X",i, f+i);         //exibe o endereco que o ponteiro esta apontando naquele momento
 }
}
