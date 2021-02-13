/*Problema "temperatura"
Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa.
Para isso, você deve construir um programa que leia a letra "C" ou "F" indicando em qual escala
vai ser informada uma temperatura.
Em seguida o programa deve mostrar a temperatura na outra escala com
duas casas decimais. A seguir é dada a fórmula para converter de Fahrenheit para Celsius
(você deve deduzir a fórmula de Celsius para Fahrenheit):*/

#include<stdio.h>
#include<stdlib.h>

int main()
{

    char sel;
    double f, c;

    printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
    scanf("%c",&sel);
    if ((sel == 'F') || (sel == 'f'))
    {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf",&f);
        c = (5.0 / 9.0) * ( f - 32.0);
        printf("Temperatura equivalente em Celsius: %.2lf",c);
    }
    else if ((sel = 'C') || (sel = 'c'))
    {
        printf("Digite a temperatura em Celcius: ");
        scanf("%lf",&c);
        f = 9.0 * c / 5.0 + 32.0;
        printf("Temperatura equivalente em Fahrenheit: %.2lf",f);
    }

    return 0;
}
