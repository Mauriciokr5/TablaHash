#include <stdlib.h>
typedef struct{
  char nombre[50];
  char capital[50];
  int habitantes;
  char idioma[20];
  char moneda[20];
  char gentilicio[50];
} *Elem;

Elem nuevoElem(){
  Elem p = (Elem)malloc(sizeof(Elem));
  printf("nombre,capital,habitantes,idioma,moneda,gentilicio\n");
  //printf("Nombre de pais:");
  scanf("%s",p->nombre);
  //printf("Capital del pais:");
  scanf("%s",p->capital);
  //printf("Habitantes del pais:");
  scanf("%d",&p->habitantes);
  //printf("Idioma del pais:");
  scanf("%s",p->idioma);
  //printf("Moneda del pais:");
  scanf("%s",p->moneda);
  //printf("Gentilicio del pais:");
  scanf("%s",p->gentilicio);

  return p;
}
void ImpElem(Elem x){
  printf("%s\n", x->nombre);
  printf("%s\n", x->capital);
  printf("%d\n", x->habitantes);
  printf("%s\n", x->idioma);
  printf("%s\n", x->moneda);
  printf("%s\n", x->gentilicio);
}

/*void LeeElemF(char *nameFile){
  //printf("Hola\n");
  FILE *ent=fopen(nameFile,"r");
  Elem e = (Elem)malloc(sizeof(Elem));
  char nose[50];
  fscanf(ent,"%s",nose);
  printf("%s\n", nose);
  while (fscanf(ent,"%50s%50s%d%50s%50s%50s%50s",e->nombre,e->capital,&e->habitantes,e->idioma,e->moneda,e->gentilicio, nose)!=EOF) {
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
