#include <stdio.h>

/* e) Declare un puntero en el procedimiento principal que apunte a una
variable de algún tipo y muestre por pantalla lo siguiente:
1) El contenido del puntero
2) La dirección de memoria almacenada por el puntero.
3) la dirección de memoria de la variable.
4) la dirección de memoria del puntero.
5) el tamaño de memoria utilizado por esa variable usando la
función sizeof()
f) Hacer el segundo commit del archivo y subirlo a la plataforma
g) Si resolvió correctamente los apartados 2 y 3 del punto anterior notará
que el resultado es el mismo. ¿a qué se debe? ¿Qué obtiene en el
punto 4? ¿Es igual a los anteriores? ¿Por qué? Responder en el archivo
readme.md
*/

int cuadrado(int num) {
    return num * num;
}

void main(){

    int* p, x,n;
    x=10;
    p = &x;

    printf("\nEl contenido del puntero %d",*p);
    printf("\nLa dirección de memoria almacenada por el puntero. %p",p);
    printf("\nLa dirección de memoria de la variable. %p",&x);
    printf("\nLa dirección de memoria del puntero. %p",&p);
    printf("\nEl tamaño de memoria utilizado por esa variable usando la función sizeof %d",sizeof(x));

}