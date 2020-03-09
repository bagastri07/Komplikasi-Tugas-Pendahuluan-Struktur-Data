#ifndef PERPUSTAKAAN_H_INCLUDED
#define PERPUSTAKAAN_H_INCLUDED
#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define last(P) L.last
#define info(P) P->info
#define NIL NULL


using namespace std;

struct buku {
    string ID, judul, pengarang, penerbit;
    int Tahun;
};

typedef buku infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
};

struct List {
    address first;
    address last;
};

void buatList(List &L);
bool listKosong(List L);
address cariElemen(List L, string X);
void buatElemen(address &P, string ID, string judul, string pengarang, string penerbit, int tahun);
void tambahDataTerakhir(List &L, address P);
void tambahDataSetelah(List &L, address Prec, address P);
void hapusDataTerakhir(List &L, address &P);
void lihatList(List L);
int jumBuku(List L, int thn);

#endif // PERPUSTAKAAN_H_INCLUDED
