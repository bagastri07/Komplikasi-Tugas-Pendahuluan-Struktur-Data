#ifndef DOUBLELINKEDLIST_H_INCLUDED
#define DOUBLELINKEDLIST_H_INCLUDED
#define next(P) P->next
#define info(P) P->info
#define prev(P) P->prev
#define first(L) L.first
#define last(L) L.last

typedef int infotype;
typedef struct elmList *address;
struct elmList {
    infotype info;
    address next;
    address prev;
};
struct List {
    address first;
    address last;
};
bool isEmpty (List L);
void createList(List &L);
void createNewElm(address &P, infotype x);
void insertFirst(List &L, address P);
void insertAfter(List &L, address Prec, address P);
void insertLast(List &L, address P);
void deleteFirst(List &L, address &P);
void deleteAfter(List &L, address Prec, address &P);
void deleteLast(List &L, address &P);
void concat(List L1, List L2, List &L3);
float median(List L);
void printInfo(List L);
void InserAscending(List &L,infotype x);
void deleteElm(List &L, infotype x);
int CountElm(List L);

#endif // DOUBLELINKEDLIST_H_INCLUDED
