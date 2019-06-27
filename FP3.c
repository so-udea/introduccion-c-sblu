#include <stdio.h>
#include <math.h>

double function(double x, int n);
double factorial(int n);

int main(int argc, char *argv[])
{
    double x, res;
    int n;
    printf("Programa para el cálculo de la suma de la serie 1 - x^2/2! + x^4/4! - ... \n");
    printf("Valor de entrada de x: ");
    scanf("%lf", &x);
    printf("Número de terminos: ");
    scanf("%d", &n);
    res = function(x, n);
    printf("El resultado de la suma de la serie es: %lf\n", res);
    return 0;
}

double function(double x, int n)
{
    double sum = 1;
    double factorialTerm;
    int sign = 1;
    int index;
    for (int i = 1; i < n; i++)
    {
        sign *= -1;
        index = 2 * i;
        factorialTerm = factorial(index);
        sum += sign * pow(x, index) / factorialTerm;
    }
    return sum;
}

double factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}