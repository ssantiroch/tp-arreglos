#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
int cargar2 (float arr [],int dim);
int insertar (char arreglito[],int validos, char dato);
int cargar3 (char arr [],int dim);
int main()
{
    /** PUNTO 1: */

    /*int arreglo [5];
    int validos,i,total;
    validos =cargar(arreglo,5);*/
    //printf("se cargaron %i elementos", validos);

    /** PUNTO 2:*/
    //mostrarA (arreglo,validos);


    /** PUNTO 3: */

   /*total=suma(arreglo,validos);
    printf("\nLa suma total es de: %i",total);*/

    /** PUNTO 4*/
    /*Pila pila1;
    inicpila(&pila1);
    mostrarA (arreglo,validos);
    arrpila(arreglo,validos,&pila1);
    mostrar(&pila1);*/

    /** PUNTO 5 */

    /*float nuevo[100];
    int validos2;
    validos2 =cargar2(nuevo,100);
    mostrar2(cargar2,validos2);*/


    /** PUNTO 6 */

    char arreglito [100];
    char dato;
    int validos = cargar3(arreglito,100);

    mostrar3(arreglito,validos);

    /*printf("\n\nIngrese el dato a buscar: \n") ;
    fflush (stdin);
    scanf("%c",&dato);
    busqueda3(arreglito,validos,dato);*/

    /**PUNTO 7 */

    printf("\nIngrese el dato a insertar: ");
    fflush (stdin);
    scanf("%c",&dato);

    int final2=insertar(arreglito,validos,dato);

    mostrar3(arreglito,final2);








    return 0;
}

/** Como cargar un arreglo: (con función) */

/*int cargar (int arr [],int dim){
    char op='s';
    int i =0;

    while (op == 's' && i<dim){
        printf("Ingrese el dato que desea: ");
        fflush(stdin);
        scanf("%i", &arr[i]); // Importante los corchetes para esto. Es para poner el dato el la posicion que querramos.
    i++;
     printf("ingrese 'S' si desea continuar: ");
     fflush(stdin);
     scanf ("%c",&op);

    }


    return i;
}

  /** Como mostrar el ARREGLO (con funcion) */

/*void mostrar (int arr[],int validos){
int i=0;
while (i<validos){
    printf("\n\n|%i|", arr[i]);
    i++;
}
}

int busqueda (int arr[],int validos,int dato){
int i=0;
int flag=0;
while (i< validos && flag==0){
    if (dato == arr[i]){
    flag=1;
    }

    i++;
}
return flag;
}

int suma(int arr[],int validos){
int i=0;
int suma=0;
while (i<validos){
    suma= suma + arr[i];
    i++;
}

return suma;
}

void arrpila (int arreglo[],int validos, Pila *pila1){
int i=0;

while (i<validos){
    apilar(pila1,arreglo[i]);
    i++;
}

}

int cargar2 (float arr [],int dim){
    char op='s';
    int i =0;

    while (op == 's' && i<dim){
        printf("Ingrese el dato que desea: ");
        fflush(stdin);
        scanf("%f", &arr[i]); // Importante los corchetes para esto. Es para poner el dato el la posicion que querramos.
    i++;
     printf("ingrese 'S' si desea continuar: ");
     fflush(stdin);
     scanf ("%c",&op);

    }


    return i;
}
*/
void mostrar2 (float arr[],int validos){
int i=0;
while (i<validos){
    printf("\n\n|%i|", arr[i]);
    i++;
}
}
int cargar3 (char arr [],int dim){
   int op= 0;
    int i =0;

    while (op == 0 && i<dim){
        printf("Ingrese el dato que desea: ");
        fflush(stdin);
        scanf("%c", &arr[i]); // Importante los corchetes para esto. Es para poner el dato el la posicion que querramos.
    i++;
     printf("ingrese '0' si desea continuar: ");
     fflush(stdin);
     scanf ("%i",&op);

    }
return i;
}
void mostrar3 (char arr[],int validos){
int i=0;
while (i<validos){
    printf("\n\n|%c|", arr[i]);
    i++;
}
}


int busqueda3 (char arr[],int validos,int dato){
int i=0;
int flag=0;
while (i< validos && flag==0){
    if (dato == arr[i]){
    flag=1;
    }

    i++;
}

if (flag==1){
    printf("\nel dato se encuentra en el arreglo.");
}else {
printf("\nel dato no se encuentra en el arreglo.");
}
return flag;
}



int insertar (char arreglito[],int validos, char dato){
int i;
i=validos-1;

while (i>=0 && dato<arreglito[i]){
    arreglito[i+1]=arreglito[i];
    i--;
}


arreglito[i+1]=dato;
return validos+1;
}


int mayor (int arr[],int validos){





}
