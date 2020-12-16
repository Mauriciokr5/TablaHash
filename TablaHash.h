typedef Lista *TablaH;
//#define TAM_TABLA 100
//es necesario definir el tamano de la tabla solo en el main o en ambos
TablaH consTH(int n){
     int i;
     TablaH t=(TablaH)malloc(sizeof(Lista)*n);
     for(i=0;i<n;i++)
         t[i]=vacia();
     return t;
}

int Hash(char *llave){
  int sum = 0;
  for (int i = 0; llave[i]!='\0'; i++) {
    sum+=llave[i];
  }
  return sum%TAM_TABLA;
}

TablaH InsertaTablaH(Elem e, TablaH th){
  int pos = Hash(e->nombre);
  //printf("%d---%s\n",Hash(e->nombre), e->nombre);
  th[pos]=cons(e,th[pos]);
  return th;
}

Elem BuscarTablaH(char * nombre, TablaH th){
  int pos = Hash(nombre);
  Lista aux = th[pos];
  while(!esvacia(aux)){

    if (!strcmp(cabeza(aux)->nombre,nombre)) {
      return cabeza(aux);
    }
    aux=resto(aux);
  }
  return NULL;
}

TablaH EliminarTablaH(char * nombre, TablaH th){
  int pos = Hash(nombre);
  int flag = 0;
  Lista aux = th[pos];
  Lista help = vacia();
  while(!esvacia(aux)){
    if (!strcmp(cabeza(aux)->nombre,nombre)) {
      flag = 1;
      th[pos]=PegaListas(help, resto(aux));
      break;
    }else{
      cons(cabeza(aux), help);
    }
    aux=resto(aux);
  }
  if (flag)
    printf("||Eliminado exitosamente||\n");
  else
    printf("||No se ha encontrado||\n");

  return th;
}

TablaH LeeElemF(char *nameFile, TablaH th){
  FILE *ent;
  if ((ent = fopen(nameFile,"r")) == NULL) {
     printf("||No existe el archivo||\n");
     return th;
 }
  Elem e = (Elem)malloc(sizeof(struct pais));
  char nose[50];
  while (fscanf(ent,"%s%s%d%s%s%s",e->nombre,e->capital,&e->habitantes,e->idioma,e->moneda,e->gentilicio)!=EOF) {
    th=InsertaTablaH(e, th);
    e = (Elem)malloc(sizeof(struct pais));
  }

  fclose(ent);
  printf("||Insertado exitosamente||\n");
  return th;

}
