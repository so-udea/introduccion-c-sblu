#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio(int n);
int multiplicar(int n, int m);

int main(int argc, char *argv[])
{
    int bandera = 1;
    int num1, num2, producto, respuesta, correct;
    const char* correcto[] = {"Muy bien!","Excelente!","Buen trabajo!","Sigue haciéndolo bien!"};
    const char* incorrecto[] = {"No. Por favor trata de nuevo.","Incorrecto. Trata una vez más.","No te rindas!","No. Trata de nuevo"};
    printf("Programa que ayudaría a un alumno de escuela de primaria a aprender a multiplicar.\n");

    while (bandera==1)
    {   
        num1 = aleatorio(10);
        num2 = aleatorio(10);
        producto = num1 * num2;
        respuesta = multiplicar(num1, num2);
        correct = 0;

        while(correct == 0){
        if (producto == respuesta){
            printf("%s \n", correcto[aleatorio(4)]);
            correct = 1;
        }else{
            printf("%s \n", incorrecto[aleatorio(4)]);
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

int aleatorio(int n)
{
    srand(time(NULL));
    return rand() %n;
}

int multiplicar(int n, int m)
{
    int producto;
    printf("¿Cuánto es %d veces %d?: ", n, m);
    scanf("%d", &producto);
    printf("\n");
    return producto;
}