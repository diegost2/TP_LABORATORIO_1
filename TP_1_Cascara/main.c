#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int a=0;
    int b=0;
    int suma=0;
    int resta=0;
    float division=0;
    int multiplicacion=0;
    int factorial=0;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%d)\n",a);
        printf("2- Ingresar 2do operando (B=%d)\n",b);
        printf("3- Calcular la suma (%d+%d)\n",a,b);
        printf("4- Calcular la resta (%d-%d)\n",a,b);
        printf("5- Calcular la division (%d/%d)\n",a,b);
        printf("6- Calcular la multiplicacion (%d*%d)\n",a,b);
        printf("7- Calcular el factorial (%d!)\n",a);
        printf("8- Calcular todas las operaciones \n");
        printf("9- Salir\n");

        printf("Ingrese opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                {
                    a=PedirEntero("Ingresar primer numero: ",-1000,100000);
                    break;
                }

            case 2:
                {
                    b=PedirEntero("Ingresar segundo numero: ",-1000,100000);
                    break;
                }
            case 3:
                {
                    suma=Sumar(a,b);
                    printf("\nLa suma es de: %d\n",suma);
                    getch();
                    break;
                }
            case 4:
                {
                    resta=Restar(a,b);
                    printf("\nLa resta es de: %d\n",resta);
                    getch();
                    break;
                }
            case 5:
                {
                    division=Dividir(a,b);
                    printf("\nLa division es de: %.2f\n",division);
                    getch();
                    break;
                }
            case 6:
                {
                    multiplicacion=Multiplicar(a,b);
                    printf("\nLa multiplicacion es de: %d\n",multiplicacion);
                    getch();
                    break;
                }
            case 7:
                {
                    factorial=PedirFactorial(a);
                    printf("\nEl factorial de %d es de: %d\n",a,factorial);
                    getch();
                    break;
                }
            case 8:
                {
                    suma=Sumar(a,b);
                    resta=Restar(a,b);
                    division=Dividir(a,b);
                    multiplicacion=Multiplicar(a,b);
                    factorial=PedirFactorial(a);
                    printf("\nLa suma es de: %d\n",suma);
                    printf("\nLa resta es de: %d\n",resta);
                    printf("\nLa division es de: %.2f\n",division);
                    printf("\nLa multiplicacion es de: %d\n",multiplicacion);
                    printf("\nEl factorial de %d es de: %d\n",a,factorial);
                    getch();
                    break;
                }
            case 9:
                {
                    seguir = 'n';
                    break;
                }
        }
        while(opcion<=0||opcion>=10){
            system("cls");
            printf("\nError!!! el numero ingresado no aparece en la lista.");
            getch();
            break;
            }
        system("cls");
    }

    return 0;
}
