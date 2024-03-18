#include <stdio.h>

int main () {
float numero, antecessor, sucessor;

printf("Bem-Vindo a Calculadora do 1..., calculamos apenas com 1..., sempre um\n");
printf("Insira Um Numero: ");
scanf("%f", &numero);

antecessor = numero - 1;
sucessor = numero + 1;


if (numero >= 0){

    printf("Antecessor do Seu Numero: %f \n", antecessor);
    printf("Sucessor do Seu Numero: %f \n", sucessor);

}

else if (numero <= 0) {

    printf("Antecessor do Seu Numero: %f \n", antecessor);
    printf("Sucessor do Seu Numero: %f \n", sucessor);


}
}



