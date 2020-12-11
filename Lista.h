#include <stdio.h>
#include <stdlib.h>



typedef struct Nodo{
  Elem dato;
  struct Nodo *next;
} *Lista;



int EsMenor(Elem x, Elem y){ return x<y; }

Lista vacia(){ return NULL; }

Lista cons(Elem e, Lista l){
  Lista t = (Lista)malloc(sizeof(struct Nodo));
  t->dato=e;
  t->next=l;
  return t;
}

int esvacia(Lista l){ return l==NULL; }
Elem cabeza(Lista l){ return l->dato; }
Lista resto(Lista l){ return l->next; }

int NumElems(Lista l){
  if (esvacia(l)) {
    return 0;
  }else{
    return 1 + NumElems(resto(l));
  }
}

void ImpElems(Lista l){
  if (!esvacia(l)) {
    ImpElem(cabeza(l));
    ImpElems(resto(l));
  }
}


Lista PegaListas(Lista a, Lista b){
  if (esvacia(a)) {
    return b;
  }else{
    return cons(cabeza(a),PegaListas(resto(a),  b));
  }
}
Lista InvierteLista(Lista l){
  if (esvacia(l)) {
    return l;
  }else{
    return PegaListas( InvierteLista(resto(l)),  cons(cabeza(l), vacia()));
  }
}

Lista InsOrd(Elem e, Lista l){
  if (esvacia(l)) {
    return cons(e,l);
  }else if(EsMenor(e, cabeza(l))){
    return cons(e, l);
    }else{
      return cons(cabeza(l), InsOrd(e, resto(l)));
    }
}

Lista OrdListaAsc(Lista l){
  if (esvacia(l)) {
    return l;
  }else{
    return InsOrd(cabeza(l),OrdListaAsc(resto(l)));
  }
}
