//
// Created by Roselyne on 23/10/2024.
//
#include <stdio.h>

int main(void)
{
    // Se realiza una llamada a una compañía que vende bombas mecánicas.

    // Declarar variables
    int numero;
    int descontado = 15;
    int cotizar;
    int menu_choice;
    int codigo_cliente;
    int menu_bombas;
    int menu_aditamentos;
    int cantidad;
    float precio_final;
    float precio_bomba1 = 3500;
    float precio_bomba2 = 1224.51;
    float precio_bomba3 = 6000;
    float precio_bomba4 = 2000;
    float precio_aditamento1 = 8824.49;
    float precio_aditamento2 = 1234.78;
    float precio_aditamento3 = 236;
    float descuento;
    char opcion;

    // Inicio, la bienvenida al usuario/cliente.
    printf("Bienvenido cliente.\n");
    printf("Esta usted hablando a bombas mecanicas rosa.\n");
    printf("Marque alguno de los siguientes numeros para su operacion.\n");
    printf("Ingrese '1' si desea conocer nuestras bombas mecanicas a la venta.\n");
    printf("Ingrese '2' si desea conocer los aditamentos disponibles.\n");
    printf("Ingrese '3' si desea realizar alguna cotizacion.\n");
    printf("Ingrese '4' si desea realizar alguna devolucion.\n");
    printf("Ingrese '5' si desea hablar con algun representante de la empresa.\n");
    scanf("%d", &numero);

    // Opciones de marcacion.
    switch (numero)
    {
        // Desea conocer las bombas mecanicas a la venta.
        case 1:
            printf("Nuestras bombas mecanicas mas vendidas actualmente son:\n");
            printf("1: Bomba Centrifuga de agua QC100 Vasser Motorarg 1hp con un precio de $%.2f.\n", precio_bomba1);
            printf("2: Bomba de desplazamiento positivo tipo Diafragma con un precio de $%.2f.\n", precio_bomba2);
            printf("3: Bomba Waukesha Bomba de pistones rotativos o lobulares con un precio de $%.2f.\n", precio_bomba3);
            printf("4: Bombas de Tornillo Helicoidal con un precio de $%.2f.\n", precio_bomba4);
            break;

        // Desea conocer los aditamentos disponibles para las bombas mecanicas.
        case 2:
            printf("Los aditamentos para nuestras bombas mecanicas disponibles son:\n");
            printf("1: Variador de velocidad para bombas SPEEDMATIC EASY con un precio de $%.2f.\n", precio_aditamento1);
            printf("2: Controlador electronico Zerone driver con un precio de $%.2f.\n", precio_aditamento2);
            printf("3: Sensor de Flujo Automatico de 3/4 con un precio de $%.2f.\n", precio_aditamento3);
            break;

        // Desea realizar una cotizacion.
        case 3:
            printf("Para realizar una cotizacion seleccione alguna de las siguientes opciones.\n");
            printf("1) Para realizar una cotizacion sobre alguna bomba mecanica.\n");
            printf("2) Para realizar una cotizacion sobre algun aditamento de bomba mecanica.\n");
            scanf("%d", &cotizar);

            // Opciones de cotizaciones.
            switch (cotizar)
            {
                // Cotizar bombas mecanicas.
                case 1:
                    printf("Antes de realizar la cotizacion\n");
                    printf("Cuenta con codigo de cliente frecuente?\n");
                    printf("De ser asi seleccione 1 por favor para continuar.\n");
                    printf("De lo contrario seleccione 2 por favor para continuar.\n");
                    scanf("%d", &menu_choice);

                    // Cuenta con descuento de cliente frecuente.
                    if (menu_choice == 1)
                    {
                        printf("Ingrese su numero codigo de cliente.\n");
                        scanf("%d", &codigo_cliente);
                        printf("Gracias por volver a tomarnos en cuenta para su compra.\n");
                    }
                    // Seleccionar bomba a cotizar.
                    printf("Por favor seleccione la bomba que desea cotizar.\n");
                    printf("1: Bomba Centrifuga de agua QC100 Vasser Motorarg 1hp\n");
                    printf("2: Bomba de desplazamiento positivo tipo Diafragma.\n");
                    printf("3: Bomba Waukesha Bomba de pistones rotativos o lobulares.\n");
                    printf("4: Bombas de Tornillo Helicoidal.\n");
                    scanf("%d", &menu_bombas);
                    printf("Ingrese una cantidad que desee.\n");
                    scanf("%d", &cantidad);

                    switch (menu_bombas)
                    {
                        // Cotizar la primera bomba.
                        case 1:
                            precio_final = precio_bomba1 * cantidad;
                            break;
                        // Cotizar la segunda bomba.
                        case 2:
                            precio_final = precio_bomba2 * cantidad;
                            break;
                        // Cotizar la tercera bomba.
                        case 3:
                            precio_final = precio_bomba3 * cantidad;
                            break;
                        // Cotizar la cuarta bomba.
                        case 4:
                            precio_final = precio_bomba4 * cantidad;
                            break;
                        // Opción no valida.
                        default:
                            printf("Opcion no valida\n");
                            return 1; // Terminar el programa en caso de opción inválida
                    }

                    // Aplicar descuento si corresponde.
                    if (menu_choice == 1)
                    {
                        descuento = descontado * precio_final / 100;
                        printf("Seria un total de: $%.2f con el 15%% de descuento\n", precio_final - descuento);
                    }
                    else
                    {
                        printf("Seria un total de: $%.2f\n", precio_final);
                    }
                    printf("Gracias por tomarnos en cuenta para su compra, Buen dia\n");
                    break;

                // Cotizar aditamentos de las bombas mecanicas.
                case 2:
                    printf("Antes de realizar la cotizacion\n");
                    printf("Cuenta con codigo de cliente frecuente?\n");
                    printf("De ser asi seleccione 1 por favor para continuar.\n");
                    printf("De lo contrario seleccione 2 por favor para continuar.\n");
                    scanf("%d", &menu_choice);

                    // Cuenta con descuento de cliente frecuente.
                    if (menu_choice == 1)
                    {
                        printf("Ingrese su numero codigo de cliente.\n");
                        scanf("%d", &codigo_cliente);
                        printf("Gracias por volver a tomarnos en cuenta para su compra.\n");
                    }

                    // Seleccionar aditamento a cotizar.
                    printf("Por favor seleccione el aditamento que desea cotizar.\n");
                    printf("1: Variador de velocidad para bombas SPEEDMATIC EASY\n");
                    printf("2: Controlador electronico Zerone driver.\n");
                    printf("3: Sensor de Flujo Automatico de 3/4.\n");
                    scanf("%d", &menu_aditamentos);
                    printf("Ingrese una cantidad que desee.\n");
                    scanf("%d", &cantidad);

                    switch (menu_aditamentos)
                    {
                        // Cotizar el primer aditamento.
                        case 1:
                            precio_final = precio_aditamento1 * cantidad;
                            break;
                        // Cotizar el segundo aditamento.
                        case 2:
                            precio_final = precio_aditamento2 * cantidad;
                            break;
                        // Cotizar el tercer aditamento.
                        case 3:
                            precio_final = precio_aditamento3 * cantidad;
                            break;
                        // Opción no valida.
                        default:
                            printf("Opcion no valida\n");
                            return 1; // Terminar el programa en caso de opción inválida
                    }

                    // Aplicar descuento si corresponde.
                    if (menu_choice == 1)
                    {
                        descuento = descontado * precio_final / 100;
                        printf("Seria un total de: $%.2f con el 15%% de descuento\n", precio_final - descuento);
                    }
                    else
                    {
                        printf("Seria un total de: $%.2f\n", precio_final);
                    }
                    printf("Gracias por tomarnos en cuenta para su compra, Buen dia\n");
                    break;

                default:
                    printf("Opcion no valida\n");
                    break;
            }
            break;

        // El cliente desea realizar una devolucion.
        case 4:
            printf("Entendemos que usted desea realizar una devolucion.\n");
            printf("Usted se encuentra en el area local a la sucursal? s/n \n");
            scanf(" %c", &opcion);
            if (opcion == 's' || opcion == 'S')
            {
                printf("De acuerdo, se realizara una recoleccion en el lugar donde se encuentre el producto.\n");
                printf("Esto sera en un lapso maximo de 2 dias.\n");
                printf("Muchas gracias por habernos permitido ser parte de su equipo.\n");
            }
            else if (opcion == 'n' || opcion == 'N')
            {
                printf("De acuerdo, por favor para seguir con el procedimiento, envie el producto por paqueteria\n");
                printf("El producto tendra que ser enviado con el siguiente codigo de guia 'LA345KD35J53'\n");
            }
            else
            {
                printf("Opcion no valida.\n");
            }
            break;

        // El cliente desea hablar con un representante de la empresa.
        case 5:
            printf("Bienvenido usted ha deseado hablar con un representante, por favor no cuelgue y espere en linea.\n");
            printf("Debido a largas colas de espera se estima que el proceso puede durar hasta 4 horas.\n");
            printf("Agradecemos su comprension y su paciencia.\n");
            break;

        default:
            printf("Opcion no valida\n");
            break;
    }

    printf("Fin del programa, hasta luego R. xp");
}
