#include <stdio.h>

int main(int argc, char *argv[])
{
    int quarterlySales;
    float commission;
    printf("Calculadora de comisiones Harry’s Car Sales \n");
    printf("Ingresa el número de ventas realizadas en el último trimestre: ");
    scanf("%d", &quarterlySales);
    if (quarterlySales < 0)
    {
        printf("El número de ventas ingresadas es incorrecto.\n");
        return 0;
    }
    else if (quarterlySales <= 20000)
    {
        commission = quarterlySales * 0.05;
    }
    else if (quarterlySales <= 50000)
    {
        commission = quarterlySales * 0.07 + 1000;
    }
    else
    {
        commission = quarterlySales * 0.1 + 3100;
    }
    printf("La comisión correspondiente a %d ventas corresponde a %.2f \n", quarterlySales, commission);

    return 0;
}