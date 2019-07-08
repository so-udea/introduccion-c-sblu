#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio();
int multiplicar(int n, int m);

int main(int argc, char *argv[])
{
    srand(time(NULL));
    int bandera = 1;
    int num1, num2, producto, respuesta, correcto;
    printf("Programa que ayudaría a un alumno de escuela de primaria a aprender a multiplicar.\n");

    while (bandera==1)
    {   
        num1 = aleatorio();
        num2 = aleatorio();
        producto = num1 * num2;
        respuesta = multiplicar(num1, num2);
        correcto = 0;        
        while(correcto == 0){
        if (producto == respuesta){
            printf("Muy bien!\n");
            correcto = 1;
        }else{
            printf("No. Por favor trata de nuevo.\n");
            respuesta = multiplicar(num1, num2);
        }
        }

        printf("¿Continuar practicando? (1=SI  0=NO): ");
        scanf("%d", &bandera);
        printf("\n");
        if (bandera==0){
            printf("Hasta pronto.\n");
        }    
    }
    return 0;
}

int aleatorio()
{
    return rand() %10;
}

int multiplicar(int n, int m)
{
    int producto;
    printf("¿Cuánto es %d veces %d?: ", n, m);
    scanf("%d", &producto);
    printf("\n");
    return producto;
}