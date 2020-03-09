#include <iostream>
#include "list.h"

using namespace std;

void createList(List &L) {
    /** this procedure will initialase
        the list L*/
    first((L)) = NULL;
}

address allocate(infotype x) {

    address p = new elmlist;
    info(p) = x;
    next(p) = NULL;

    return p;
}

void insertFirst(List &L, address P) {
    next(P) = first(L);
    first(L) = P;
}

void insertAfter(List &L,address P,address Q) {
    next(P) = next(Q);
    next(Q) = P;
}
void inserLast(List &L, address P) {
    address last = first(L);
    while (next(last) != NULL) {
        last = next(last);
    }
    next(last) = P;
}
void deleteFirst(List &L, address &P) {
    if (first(L) != NULL) {
        P = first(L);
        first(L) = next(P);
        next(P) = NULL;
    }
}
void deleteAfter(List &L, address &P, address Q) {
    P = next(Q);
    next(Q) = next(P);
    next(P) = NULL;
}
void deleteLast(List &L, address &P) {
    address last = first(L);
    while (next(next(last))!= NULL) {
        last = next(last);
    }
    P = next(last);
    next(last) = NULL;
}

address searchAddress(List L,infotype key) {
    address look =first(L);

    while (look!=NULL) {
        if (key == info(look)) {
            return look;
        }
        look = next(look);
    }
    return NULL;
}

void printInfo(List L) {
    address p = first(L);
    while(p != NULL) {
        cout<<info(p)<<", ";
        p = next(p);
    }
    cout<<endl;
}

void printInfoNim(List L) {
    address p = first(L);
    while(p != NULL) {
        cout<<info(p);
        p = next(p);
    }
    cout<<endl;
}

