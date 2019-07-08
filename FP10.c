#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio(int n);
int multiplicar(int n, int m);

int main(int argc, char *argv[])
{
    srand(time(NULL));
    int bandera = 1;
    int num1, num2, producto, respuesta, correcto;
    //const char* incorrecto[] = {"No. Por favor trata de nuevo.","Incorrecto. Trata una vez más.","No te rindas!","No. Trata de nuevo"};
    printf("Programa que ayudaría a un alumno de escuela de primaria a aprender a multiplicar.\n");

    while (bandera==1)
    {   
        num1 = aleatorio(10);
        num2 = aleatorio(10);
        producto = num1 * num2;
        respuesta = multiplicar(num1, num2);
        correcto = 0;

        while(correcto == 0){
            if (producto == respuesta){
                switch (aleatorio(4))
                {
                    case 0 :printf("Muy bien!\n");
                            break;
                    case 1 :printf("Excelente!\n");
                            break;
                    case 2 :printf("Buen trabajo!\n");
                            break;
                    case 3 :printf("Sigue haciéndolo bien!\n");
                            break;
                }
                correcto = 1;
            }else{
                switch (aleatorio(4))
                {
                    case 0 :printf("No. Por favor trata de nuevo.\n");
                            break;
                    case 1 :printf("Incorrecto. Trata una vez más.\n");
                            break;
                    case 2 :printf("No te rindas!\n");
                            break;
                    case 3 :printf("No. Trata de nuevo.\n");
                            break;
                }
                //printf("%s \n", incorrecto[aleatorio(4)]);
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