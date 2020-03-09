#include "Perpustakaan.h"

void buatList(List &L) {
    first(L) = NIL;
    last(L) = NIL;
}
bool listKosong(List L) {
    if (first(L) == NIL) {
        return true;
    }else {
        return false;
    }
}
address cariElemen(List L, string X) {
    address look = first(L);
    bool found = false;
    while (look != NIL && !found) {
        if (info(look).penerbit == X) {
            found = true;
        } else {
            look = next(look);
        }
    }
    return look;
}
void buatElemen(address &P, string ID, string judul, string pengarang, string penerbit, int tahun) {
    P = new elmList;
    info(P).ID = ID;
    info(P).judul = judul;
    info(P).pengarang = pengarang;
    info(P).penerbit = penerbit;
    info(P).Tahun = tahun;
    next(P) = NIL;
}
void tambahDataTerakhir(List &L, address P) {
    if (listKosong(L) == false) {
        next(last(L)) = P;
        last(L) = P;
    } else {
        first(L) = P;
        last(L) = P;
    }
}
void tambahDataSetelah(List &L, address Prec, address P) {
    next(P) = next(Prec);
    next(Prec) = P;
}
void hapusDataTerakhir(List &L, address &P) {
    P = last(L);
    address Q = first(L);
    while (next(next(Q)) != NIL) {
        Q = next(Q);
    }
    last(L) = Q;
    next(Q) = NIL;
}
void lihatList(List L) {

    address Cetak = first(L);
    while (Cetak != NIL) {
        cout<<info(Cetak).ID<<"     ";
        cout<<info(Cetak).judul<<"      ";
        cout<<info(Cetak).pengarang;
        cout<<endl;
        Cetak = next(Cetak);
    }
    cout<<endl;
}
int jumBuku(List L, int thn) {
    int i = 0;
    address P = first(L);
    while (P != NIL) {
        if (info(P).Tahun <= thn) {
            i = i + 1;
        }
        P = next(P);
    }
    return i;
}
