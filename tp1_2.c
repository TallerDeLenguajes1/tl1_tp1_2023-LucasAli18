#include <stdio.h>

//FUNCIONES Y PROCEDIMIENTOS

       int cuadrado(int x)
       {
        return x*x;
       }
        void cuadradoV(int x)
        {
            printf("\n%d",x*x);
        }

        void recibirVar(int variable)
        {
            printf("\nLa direccion de la variable es: %p", &variable);
            printf("\nEl contenido de la variable es: %d", variable);
        }

        void Invertir(int a, int b)
        {
            printf("\nEl valor de a es %d y el valor de b es %d", a, b);
            int aux;
            aux = a;
            a = b;
            b = aux;
            printf("\nEl valor de a es %d y el valor de b es %d", a, b);
        }
        void orden(int a,int b)
        {
            int aux;
            if (a>b)
            {
                aux = a;
                a = b;
                b = aux;
                printf("\nEl valor de a es %d y el valor de b es %d", a, b);
            }else
            {
                printf("\nEl valor de a es %d y el valor de b es %d", a, b);
            }
            
        }

void main()
{
    int *puntero, variable,cuadrad;
    variable=10;
    cuadrad=cuadrado(variable);
    printf("\n%d",cuadrad);
    cuadradoV(4);
    recibirVar(variable);
    Invertir(1,17);
    orden(7,2);
    orden(1,5);
}