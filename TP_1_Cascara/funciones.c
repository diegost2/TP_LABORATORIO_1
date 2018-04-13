#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/** \brief
 *
 * \param mensaje[] char Muestra el mensaje puesto en main
 * \param min int numero minimo para ingresar
 * \param max int numero maximo para ingresar
 * \return int retorna el numero escrito, si cumple con la validacion
 *
 */
int PedirEntero(char mensaje[], int min,int max)
{
    int numero;
    printf("%s",mensaje);
    scanf("%d",&numero);
    while(numero<min || numero>max)
    {
        printf("Error!!! %s",mensaje);
        scanf("%d",&numero);
    }
    return numero;
}
/** \brief Pide ingresar un numero float / ingresa un mensaje, un maximo y minimo
 *
 * \param mensaje[] char Muestra el mensaje puesto en main
 * \param min int numero minimo para ingresar
 * \param max int numero maximo para ingresar
 * \return float retorna el numero escrito, si cumple con la validacion
 *
 */

float PedirFloat(char mensaje[], float min, float max)
{
    float num;
    printf("%s",mensaje);
    scanf("%f",&num);

     while(num<min || num>max)
    {
        printf("\nError!!! %s",mensaje);
        scanf("%f",&num);
    }
    return num;

}

/** \brief
 *
 * \param mensaje[] char Muestra el mensaje puesto en main
 * \param aux1 int numero ASCII para validacion(si es necesario)
 * \param aux2 int numero ASCII para validacion(si es necesario)
 * \return char Devuelve el mensaje si cumple la validacion
 *
 */
 /*
char PedirChar(char message[], int aux1 ,int aux2)
{
    char mensaje[20];

    printf("%s",message);
    fflush(stdin);
    gets(mensaje);

    Por si pide validacion

    while('  ' || ' ')
        {
            printf("%s",message);
            fflush(stdin);
            gets(mensaje);
        }
    return mensaje;
}
*/
/** \brief Suma dos variables y devuelve el resultado
 *
 * \param num1 int primer numero ingresado a sumar
 * \param num2 int segundo numero ingresado a sumar
 * \return int Retorna resultado de la suma
 *
 */
int Sumar(int num1, int num2)
{
    int resultado;
    resultado=num1+num2;
    return resultado;
}

/** \brief Resta dos variables y devuelve el resultado
 *
 * \param num1 int Primer numero a restar
 * \param num2 int Segundo numero a restar
 * \return int Retorna resultado de la resta
 *
 */
int Restar(int num1, int num2)
{
    int resultado;
    resultado=num1-num2;
    return resultado;
}

/** \brief Multiplica dos varibles y devuelve el resultado
 *
 * \param num1 int Primer numero de la multiplicacion
 * \param num2 int Segundo numero de la multiplicacion
 * \return int Retorna el producto
 *
 */
int Multiplicar(int num1, int num2)
{
    int resultado;
    resultado=num1*num2;
    return resultado;
}

/** \brief Divide dos variables y retorna el resultado
 *
 * \param num1 int Ingresa el Dividendo
 * \param num2 int Ingresa el Divisor
 * \return float Retorna el resultado de la division si cumple la validacion
 *
 */
float Dividir(int num1, int num2)
{
    float resultado;

    while(num1 == 0 || num2==0)
    {
        if(num1==0)
            {
                printf("\nError, no puede ingresar 0 en una division.");
                printf("\nReingrese Primer numero: ");
                scanf("%d",&num1);

            }
        else
            {
                printf("\nError, no puede ingresar 0 en una division.");
                printf("\nReingrese Segundo numero: ");
                scanf("%d",&num2);

            }

    }
    resultado=(float)num1/num2;
    return resultado;
}

/** \brief Saca el factorial de un numero
 *
 * \param numero int Numero a sacar factorial
 * \return int Retorna resultado del factorial
 *
 */
int PedirFactorial(int numero)
{
    int factor=1;
    for(int i=numero ; i>=1;i--)
        {
            if(i>=1){
            factor=factor*i;
            }
            else
            {
                factor=1;
            }
        }
        return factor;
}
