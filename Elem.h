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
  printf("|Nombre: %s\n", x->nombre);
  printf("|Capital: %s\n", x->capital);
  printf("|Habitantes: %d\n", x->habitantes);
  printf("|Idioma: %s\n", x->idioma);
  printf("|Moneda: %s\n", x->moneda);
  printf("|Gentilicio: %s\n", x->gentilicio);
  printf("--------------------------\n");
}

/*void LeeElemF(char *nameFile){
  //printf("Hola\n");
  FILE *ent=fopen(nameFile,"r");
  Elem e = (Elem)malloc(sizeof(Elem));
  char nose[50];
  fscanf(ent,"%s",nose);
  printf("%s\n", nose);
  fscanf(ent,"%s%s%d%s%s%s",e->nombre,e->capital,&e->habitantes,e->idioma,e->moneda,e->gentilicio);
  ImpElem(e);
  /*for (int i = 0; i < 5; i++) {
    fscanf(ent,"%s%s%d%s%s%s",e->nombre,e->capital,&e->habitantes,e->idioma,e->moneda,e->gentilicio);
    ImpElem(e);
    printf("------\n" );
  }
  /*while (fscanf(ent,"%s%s%d%s%s%s%s",e->nombre,e->capital,&e->habitantes,e->idioma,e->moneda,e->gentilicio)!=EOF) {
    //printf("%s\n", e->idioma);
    ImpElem(e);
    printf("------\n" );
    //printf("%s\n", nose);
    //fflush(ent);
  }
  fclose(ent);
    //fscanf(ent,"%s%s%d%f",e->sim,e->nombre,e->na,e->ma);


}*/
//void ImpElem(Elem x){ printf("%d\n", x);}
