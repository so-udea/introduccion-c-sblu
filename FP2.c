#include <stdio.h>
#include <math.h>

double sumGeometricProgression(double x, int n);

int main(int argc, char *argv[])
{
    double x, res;
    int n;
    printf("Programa para el cálculo de la suma de la progresión geométrica 1 + x + x^2 + x^3 + x^4 + ⋯ + x^n \n");
    printf("Valor de entrada de x: ");
    scanf("%lf", &x);
    printf("Valor de entrada de n: ");
    scanf("%d", &n);
    res = sumGeometricProgression(x, n);
    printf("El resultado de la suma de la progresión geométrica es: %lf\n", res);
    return 0;
}

double sumGeometricProgression(double x, int n)
{
    double sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum += ( pow(x, i) );
    }
    return sum;
}