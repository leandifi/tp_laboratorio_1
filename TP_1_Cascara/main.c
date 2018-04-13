#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float x=0, y=0;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingresa el primer operando: \n");
                scanf("%d", &x);
                break;
            case 2:
                printf("Ingresa el segundo operando: \n");
                scanf("%d", &y);
                break;
            case 3:
                printf("La suma es %f \n", sumar(x,y));
                break;
            case 4:
                printf("La resta es: %f \n",restar(x,y));
                break;
            case 5:
                if(y!=0)
                {
                    printf("La division es: %f \n",dividir(x,y));
                }
                else
                {
                    printf("Error, no puede realizarse la division por 0\n");
                }
                break;
            case 6:
                 printf("La multiplicacion es: %f \n",multiplicar(x,y));
                break;
            case 7:
                 if(x>=0)
                {
                printf("El factorial es: %d \n",factorial(x));
                }
                else
                {
                    printf("El factorial solo puede calcularse en numeros iguales o mayores a 0");
                }
                break;
            case 8:
                printf("La suma es: %f\n",sumar(x,y));
                printf("La resta es: %f\n",restar(x,y));
                if(y!=0)
                {
                    printf("La division es: %f \n",dividir(x,y));
                }
                else
                {
                    printf("No puede realizarse la division por 0\n");
                }
                printf("La multiplicacion es: %f\n",multiplicar(x,y));
                if(x>=0)
                {
                printf("El factorial es: %d \n",factorial(x));
                }
                else
                {
                    printf("El factorial solo puede calcularse en numeros iguales o mayores a 0");
                }
                break;
            case 9:
                seguir = 'n';
                break;
        }


    return 0;
}
}
