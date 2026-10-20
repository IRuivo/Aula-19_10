#include<stdio.h>
#include<math.h>

int main()
{
    //se udar int ermos ter problemas com casting, por isso é melhor usar float ou double
    float numero1 = 9.0f; // letra f depois dp numero para indicar o 'float' (convenção do C)
    double raiz = sqrt(numero1); //tipo double com float

    //potencia (pow) ~ Valor 10
    //primeiro valor
    float x = 10.0f;
    //segundo valor
    float y = 2.0f;
    //resultado da potencia
    float resultado = pow(x, y); // 10^2 = 100

    printf("O resultado de %.2f elevado a %.2f é %.2f\n", x, y, resultado);


    printf("A raiz quadrada de %.2f é %.2f\n", numero1, raiz);

    return 0;
}