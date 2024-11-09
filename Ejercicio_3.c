//
// Created by Roselyne on 25/10/2024.
//
#include <stdio.h>

int main(void)
{
    //La udg tiene su carrera anual solicitar la edad y con esta asignarle una categoria

    int opcion = 0;


    printf("Bienvenido a la carrera anual de udg.\n");
    printf("Para concursar por favor selecciona una de las siguientes opciones en base a tu edad\n");
    printf("1) 15 a 18\n");
    printf("2) 19 a 39\n");
    printf("3) 40 en adelante.\n");
    scanf("%d", &opcion);

    switch (opcion)
    {
        case 1:
            printf("Usted ha sido seleccionado para concursar en la carrera como categoria de junior\n");
            break;
        case 2:
            printf("Usted ha sido seleccionado para concursar en la carrera como categoria de Senior\n");
            break;
        case 3:
            printf("Usted ha sido seleccionado para concursar en la carrera como categoria de Veteranos\n");
            break;
        default:
            printf("Opcion invalida\n");
            break;
    }

    printf("Fin del programa, hasta luego R. :P\n");
}