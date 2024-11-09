//
// Created by Roselyne on 20/10/2024.
//
#include <stdio.h>

int main(void){

    //Queremos que el programa sea para convertir divisas de monedas.
    //Como siempre primero declaramos variables.

    int menu1;
    int menu2;
    float cantidad = 0;
    float dolar = 0;
    float euro = 0;
    float yenes = 0;
    float pesos = 0;
    float cambio = 0;

    //Tasas de conversión para cambiar las divisas.
    float dolar_euro = 0.95;
    float dolar_yen = 149.30;
    float dolar_peso = 18.00;
    float euro_dolar = 1.05;
    float euro_yen = 157.00;
    float euro_peso = 19.00;
    float yen_dolar = 0.0067;
    float yen_euro = 0.0064;
    float yen_peso = 0.12;
    float peso_dolar = 0.056;
    float peso_euro = 0.053;
    float peso_yen = 8.27;

    //Inicio.
    printf("Bienvenido usuario.\n");
    printf("Por favor seleccione su moneda a cambiar.\n");
    printf("1)Dolar\n2)Euro\n3)Yenes\n4)Pesos\n");
    printf("Ingrese una operacion: \n");
    scanf("%d", &menu1);

    if (menu1 == 1) {
        printf("Ingrese una operacion:\n");
        printf("\n1)Para cambiar a a Euros.\n2)Para cambiar a Yenes.\n3)Para cambiar a Pesos.\n");
        scanf("%d", &menu2);
    }
    if (menu1 == 2)
    {
        printf("Ingrese una operacion:\n");
        printf("1)Para cambiar a dolares.\n2)Para cambiar a yenes.\n3)Para cambiar a Pesos.\n");
        scanf("%d", &menu2);
    }
    if (menu1 == 3)
    {
        printf("Ingrese una operacion:\n");
        printf("1)Para cambiar a dolares.\n2)Para cambiar a euros.\n3)Para cambiar a Pesos.\n");
        scanf("%d", &menu2);
    }
    if (menu1 == 4)
    {
        printf("Ingrese una operacion: \n");
        printf("1)Para cambiar a dolares.\n2)Para cambiar a euros.\n3)Para cambiar a yenes.\n");
        scanf("%d", &menu2);
    }
    if (menu1 >= 5 && menu1 <= 0)
    {
        printf("Operacion invalida. \n");
    }

    //Ahora tocan los casos y sus conversiones.
    printf("Ingrese la cantidad a cambiar:\n");
    scanf("%f", &cantidad);

    switch (menu1) {
    case 1: // Dólar
        switch (menu2) {
    case 1: cambio = cantidad * dolar_euro; break; // Dólar a Euro
    case 2: cambio = cantidad * dolar_yen; break;  // Dólar a Yenes
    case 3: cambio = cantidad * dolar_peso; break; // Dólar a Pesos
    default: printf("Opcion invalida.\n"); return 0;
        }
        break;
    case 2: // Euro
        switch (menu2) {
    case 1: cambio = cantidad * euro_dolar; break; // Euro a Dólar
    case 2: cambio = cantidad * euro_yen; break;   // Euro a Yenes
    case 3: cambio = cantidad * euro_peso; break;  // Euro a Pesos
    default: printf("Opcion invalida.\n"); return 0;
        }
        break;
    case 3: // Yenes
        switch (menu2) {
    case 1: cambio = cantidad * yen_dolar; break;  // Yenes a Dólar
    case 2: cambio = cantidad * yen_euro; break;   // Yenes a Euro
    case 3: cambio = cantidad * yen_peso; break;   // Yenes a Pesos
    default: printf("Opcion invalida.\n"); return 0;
        }
        break;
    case 4: // Pesos
        switch (menu2) {
    case 1: cambio = cantidad * peso_dolar; break; // Pesos a Dólar
    case 2: cambio = cantidad * peso_euro; break;  // Pesos a Euro
    case 3: cambio = cantidad * peso_yen; break;   // Pesos a Yenes
    default: printf("Opcion invalida.\n"); return 0;
        }
        break;
    }
    
    printf("Su cambio es: %.2f\n", cambio);
    printf("Fin del programa, Hasta luego R. :P\n");

}