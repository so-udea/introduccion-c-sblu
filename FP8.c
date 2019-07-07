#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lanzarMoneda();

int main(int argc, char *argv[])
{
    char resultado[100];
    const char SEQUENCE_CHARS[] = {'C', 'S'};
    int n, lado;
    int bandera = 1;
    printf("Programa para simular el lanzamiento de una moneda\n\n");

    while (bandera==1)
    {   
        int cara = 0;
        int sello = 0;
        printf("¿Cuántas veces se lanzará la moneda?: ");
        scanf("%d", &n);
        printf("\n");
        printf("El resultado fue: ");
        while (n != 0){
            lado = lanzarMoneda();
            if (lado==1){
                sello++;
            }else{
                cara++;
            }
            printf("%c", SEQUENCE_CHARS[lado]);
            n -= 1;
        }
        sprintf(resultado,", #de caras=%d, #de sellos=%d", cara, sello);
        printf("%s", resultado);
        printf("\n");

        printf("¿Desea volver a lanzar la moneda? (1=SI  0=NO): ");
        scanf("%d", &bandera);
        printf("\n");
        if (bandera==0){
            printf("Hasta pronto.\n");
        }    
    }
    return 0;
}

int lanzarMoneda()
{
    srand(time(NULL)); /*Devuelve el número de segundos según el reloj del sistema
    Esto con el fin de que la funcion rand() no arranque en el mismo numero
    cada vez que es llamada*/
    return rand() %2; /*Devuelve un entero entre 0 y La constante RAND_MAX que vale 32767 */   
}