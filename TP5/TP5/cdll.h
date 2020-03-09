#ifndef CDLL_H_INCLUDED
#define CDLL_H_INCLUDED
#define First(L) L.First
#define Next(P) P->Next
#define Prev(P) P->Prev
#define Info(P) P->Info

/**
    Nama    : Bagas Tri Wibowo
    NIM     : 1301194051
    Kelas   : IF-43-04
    */

typedef char infotype;
typedef struct elmList *address;
struct elmList {
    infotype Info;
    address Next;
    address Prev;
};
struct List {
    address First;
};

bool isEmpty(List L);
void createList(List &L);
void createNewElmt(infotype x, address &P);
void insertFirst(List &L, address P);
void insertAfter(address Prec, address P);
void deleteFirst(List &L, address &P);
void deleteAfter(address Prec, address &P);
int countWord(char data[], List L, int sizeArray);
void printInfo(List L);




#endif // CDLL_H_INCLUDED
