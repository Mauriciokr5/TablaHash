#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM_TABLA 100
#include "Elem.h"
#include "Lista.h"
#include"TablaHash.h"

int Hash(char *llave);
TablaH InsertaTablaH(Elem e, TablaH th);
Elem BuscarTablaH(char * nombre, TablaH th);
TablaH EliminarTablaH(char * nombre, TablaH th);

//preguntas hay manera de saber el tamano de nuestra tabla?
int main(){

     int i, j;
     TablaH th=consTH(TAM_TABLA);
     th=InsertaTablaH(nuevoElem(),th);
     //LeeElemF("paises.txt");
     Elem nose = BuscarTablaH("nose",  th);
     ImpElem(nose);

     /*th=InsertaTablaH(nuevoElem(),th);
     nose = BuscarTablaH("jst",  th);
     printf("---%s\n", nose->nombre);

     nose = BuscarTablaH("nose",  th);
     printf("---%s\n", nose->nombre);
     th=EliminarTablaH("jst", th);

     nose = BuscarTablaH("jst",  th);
     printf("---%s\n", nose->nombre);*/


     return 0;
}
