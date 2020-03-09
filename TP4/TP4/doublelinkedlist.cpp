#include <iostream>
#include "doublelinkedlist.h"

using namespace std;
bool isEmpty (List L) {
    if (first(L) != NULL) {
        return false;
    } else {
        return true;
    }
}
void createList(List &L) {
    first(L) = NULL;
    last(L) = NULL;
}
void createNewElm(address &P, infotype x) {
    P = new elmList;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;
}
void insertFirst(List &L, address P) {
    if (isEmpty(L)) {
        first(L) = P;
        last(L) = P;
    } else {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}
void insertAfter(List &L, address Prec, address P) {
    next(P) = next(Prec);
    prev(P) = Prec;
    next(Prec) = P;
}
void insertLast(List &L, address P) {
    if (isEmpty(L)) {
        first(L) = P;
        last(L) = P;
    } else {
        prev(P) = last(L);
        next(last(L)) = P;
        last(L) = P;
    }
}
void deleteFirst(List &L, address &P) {
    P = first(L);
    first(L) = next(P);
    prev(next(P)) = NULL;
    next(P) = NULL;
}
void deleteAfter(List &L, address Prec, address &P) {
    P = next(Prec);
    next(Prec) = next(P);
    prev(next(P)) = prev(P);
    next(P) = NULL;
    prev(P) = NULL;
}
void deleteLast(List &L, address &P) {
    P = last(L);
    last(L) = prev(P);
    next(prev(P)) = NULL;
    prev(P) = NULL;
}
void concat(List L1, List L2, List &L3) {
    first(L3) = first(L1);
    last(L3) = last(L2);
    next(last(L1)) = first(L2);
    prev(first(L2)) = last(L1);
}
float median(List L) {
    int jumElm = CountElm(L);
    int j = (jumElm/2)+1;
    address P = first(L);
    if (jumElm%2 != 0) {
        for(int i=1;i<j;i++) {
            P = next(P);
        }
        return info(P);
    } else {
        for(int i=1;i<j-1;i++) {
            P = next(P);
        }
        return (info(P)+info(next(P)))/2;
    }
}
void printInfo(List L) {
    address P = first(L);
    cout<<"{";
    while (P != NULL) {
        cout<<info(P);
        if (next(P) != NULL) {
            cout<<" ";
        }
        P = next(P);
    }
    cout<<"}";
    cout<<endl;
}
void InserAscending(List &L,infotype x) {
    address P;
    createNewElm(P,x);
    if (isEmpty(L)) {
        insertFirst(L,P);
    } else {
        if (x <= info(first(L))) {
            insertFirst(L,P);
        } else if (x >= info(last(L))) {
            insertLast(L,P);
        } else {
            address Prec = first(L);
        while (x > info(next(Prec))) {
            Prec = next(Prec);
        }
        insertAfter(L,Prec,P);
        }
    }
}
void deleteElm(List &L, infotype x) {
    address P;
    createNewElm(P,x);
    if (x == info(first(L))) {
        deleteFirst(L,P);
    } else if (x == info(last(L))) {
        deleteLast(L,P);
    } else {
        address Prec = first(L);
        while (x != info(next(Prec))) {
            Prec = next(Prec);
        }
        deleteAfter(L,Prec,P);
    }
}
int CountElm(List L) {
    address P = first(L);
    int i = 0;
    while (P != NULL) {
        i++;
        P = next(P);
    }
    return i;
}
