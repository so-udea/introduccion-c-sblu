#include <stdio.h>

int reverseNumber(int num);

int main(int argc, char *argv[])
{
    int num, reverseNum;
    printf("Ingrese un número para ser Invertido: ");
    scanf("%d", &num);
    reverseNum = reverseNumber(num);
    printf("El número invertido es: %d\n", reverseNum);
}

int reverseNumber(int num)
{
    int auxNumber;
    int reverseNum = 0;
    while (num > 0)
    {
        auxNumber = num % 10;
        num /= 10;
        reverseNum = reverseNum * 10 + auxNumber;
    }
    return reverseNum;
}