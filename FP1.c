#include <stdio.h>

int isMultiple(int a, int b);

int main(int argc, char *argv[])
{
    int n;
    printf("Calcular si el segundo número es multiplo del primero.\n");
    printf("¿Cuántos pares de números vas a ingresar?: ");
    scanf("%d", &n);
    int vector[n][2];
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese el primer número del par #%d: ", i + 1);
        scanf("%d", &vector[i][0]);
        printf("Ingrese el segundo número del par #%d: ", i + 1);
        scanf("%d", &vector[i][1]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d %s es multiplo de %d\n", vector[i][1], isMultiple(vector[i][0], vector[i][1]) == 1 ? "si" : "no", vector[i][0]);
    }

    return 0;
}

int isMultiple(int a, int b)
{
    return b % a == 0 ? 1 : 0;
}