#include <stdio.h>

int main(int argc, char *argv[])
{
    int rows, pos;
    const char SEQUENCE_CHARS[] = {'1', '0'};
    printf("Impresora de secuencia (0's y 1's en piramide)\n");
    printf("Ingresa el número de renglones: ");
    scanf("%d", &rows);
    printf("\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            pos = (i + j) % 2;
            printf("%c", SEQUENCE_CHARS[pos]);
        }
        printf("\n");
    }

    return 0;
}