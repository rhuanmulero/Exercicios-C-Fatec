#include <stdio.h>

int main () {
float numero;

printf("Bem-Vindo ao Positivo ou Negativo..., Analisamos Se Seus Numeros Sao Positivos ou Negativos...\n");
printf("Insira Um Numero: ");
scanf("%f", &numero);

if (numero >

     0){

    printf("O numero escolhido foi: %f \n", numero);
    printf("Este e um numero Positivo! \n");

}

else if (numero < 0) {

    printf("O numero escolhido foi: %f \n", numero);
    printf("Este e um numero Negativo! \n");

}

else {
    printf("Este Numero e o Proprio Zero!\nEle nao e positivo nem negativo\n");

}
}



