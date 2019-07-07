#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, producto;
    printf("Tabla de multiplicación desde 1 hasta N\n");
    printf("Número final (empezando de 1): ");
    scanf("%d", &n);
    printf("\n");
    printf("Tabla de multiplicación desde 1 hasta %d:", n);
    printf("\n");

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            producto = j * i;
            printf("%dx%d=%d  ", j, i, producto);
        }
        printf("\n");
    }

    return 0;
}