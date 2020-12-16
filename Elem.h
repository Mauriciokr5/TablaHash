#include <stdlib.h>
typedef struct pais{
  char nombre[50];
  char capital[50];
  int habitantes;
  char idioma[50];
  char moneda[50];
  char gentilicio[50];
} *Elem;

Elem nuevoElem(){
  Elem p = (Elem)malloc(sizeof(struct pais));
  //printf("nombre,capital,habitantes,idioma,moneda,gentilicio\n");
  printf("Nombre de pais:\t");
  scanf("%s",p->nombre);
  printf("Capital del pais:\t");
  scanf("%s",p->capital);
  printf("Habitantes del pais:\t");
  scanf("%d",&(p->habitantes));
  printf("Idioma del pais:\t");
  scanf("%s",p->idioma);
  printf("Moneda del pais:\t");
  scanf("%s",p->moneda);
  printf("Gentilicio del pais:\t");
  scanf("%s",p->gentilicio);

  return p;
}
void ImpElem(Elem x){
  /*printf("%s\t%s\t%s\t%s\t%s\n",x->nombre, x->capital, x->idioma,x->moneda,x->gentilicio);
  printf("%s\n", x->idioma);*/
  printf("--------------------------\n");
  printf("|Nombre: %s|\n", x->nombre);
  printf("|Capital: %s\n", x->capital);
  printf("|Habitantes: %d\n", x->habitantes);
  printf("|Idioma: %s\n", x->idioma);
  printf("|Moneda: %s\n", x->moneda);
  printf("|Gentilicio: %s\n", x->gentilicio);
  printf("--------------------------\n");
}
