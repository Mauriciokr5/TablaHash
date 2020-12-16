#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM_TABLA 100
#include "Elem.h"
#include "Lista.h"
#include"TablaHash.h"

int menu();
TablaH fd(TablaH th, int opcion);

//preguntas hay manera de saber el tamano de nuestra tabla?
int main(){

  int i=1, j;
  TablaH th=consTH(TAM_TABLA);

  while (i=menu()) {
    th=fd(th, i);
    getchar();
  }

     return 0;
}

int menu(){
  int opcion;
  printf("------------------------\n" );
  printf("Que desea hace?\n" );
  printf("1.-Agregar nuevo pais\n");
  printf("2.-Buscar pais\n");
  printf("3.-Eliminar pais\n");
  //printf("4.-Agregar paises archivo\n");
  printf("0.-Salir\n");
  printf("------------------------\n" );
  scanf("%d", &opcion);
  return opcion;

}

TablaH fd(TablaH th, int opcion){
  char id[50];
  Elem e;
  switch (opcion) {
    case 1:
      printf("INGRESE DATOS\n");
      e=nuevoElem();
      th=InsertaTablaH(e, th);
      ImpElem(e);
    break;

    case 2:
      printf("Ingrese nombre:\n");
      scanf("%s", id);
      e=BuscarTablaH(id, th);
      if (e!=NULL)
        ImpElem(e);
      else
        printf("||No se ha encontrado||\n");
    break;

    case 3:
      printf("Ingrese nombre:\n");
      scanf("%s", id);
      th=EliminarTablaH(id, th);
    break;

    case 4:
      printf("Ingrese nombre del documento:\n");
      scanf("%s", id);
    break;
  }
  return th;
}
