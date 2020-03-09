#include <iostream>
#include "cdll.h"
using namespace std;

/**
    Nama    : Bagas Tri Wibowo
    NIM     : 1301194051
    Kelas   : IF-43-04
    */

bool isEmpty(List L) {
    if (First(L) != NULL) {
        return false;
    } else {
        return true;
    }
}
void createList(List &L) {
    First(L) = NULL;
}
void createNewElmt(infotype x, address &P) {
    P = new elmList;
    if (P != NULL) {
        Info(P) = x;
        Next(P) = NULL;
        Prev(P) = NULL;
    }
}
void insertFirst(List &L, address P) {
    if (isEmpty(L)) {
        First(L) = P;
        Next(P) = P;
        Prev(P) = P;
    } else {
        Next(P) = First(L);
        Prev(P) = Prev(First(L));
        Next(Prev(First(L))) = P;
        Prev(First(L)) = P;
        First(L) = P;
    }
}
void insertAfter(address Prec, address P) {
    Next(P) = Next(Prec);
    Prev(P) = Prec;
    Prev(Next(Prec)) = P;
    Next(Prec) = P;

}
void deleteFirst(List &L, address &P) {
    if (First(L) == Next(First(L))) {
        P = First(L);
        First(L) = NULL;
        Next(P) = NULL;
        Prev(P) = NULL;
    } else {
        P = First(L);
        First(L) = Next(P);
        Prev(Next(P)) = Prev(P);
        Next(Prev(P)) = Next(P);
        Next(P) = NULL;
        Prev(P) = NULL;

    }
}
void deleteAfter(address Prec, address &P) {
    P = Next(Prec);
    Next(Prec) = Next(P);
    Prev(Next(Prec)) = Prec;
    Next(P) = NULL;
    Prev(P) = NULL;
}
int countWord(char data[], List L, int sizeArray) {
    int i = 0;
    int j = 0;
    address A = First(L);
    do {
        if (data[j] == Info(A)) {
            A = Next(A);
            j++;
            if (j == sizeArray) {
                i++;
                j = 0;
            }
        } else {
            A = Next(A);
            j = 0;
        }
    }
    while (A != First(L));
    if (data[j] == Info(A)) {
        j++;
        if (j == sizeArray) {
            i++;
        }
    }
    return i;
}
void printInfo(List L) {
    if (isEmpty(L)) {
        cout<<"List Kosong"<<endl;
    } else {
        address A = First(L);
        do {
            cout<<Info(A);
            A = Next(A);
        }
        while (A != First(L));
        cout<<endl;
}
}
