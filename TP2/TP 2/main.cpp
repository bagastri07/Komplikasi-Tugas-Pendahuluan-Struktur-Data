#include <iostream>
#include "list.cpp"


using namespace std;

int main()
{
    List L;
    address P;

    createList(L);
    cout<<"Ketik 3 digit NIM terakhir"<<endl;

    cout<<"Masukan Angka Pertama : ";
    infotype x;
    cin>>x;
    P = allocate(x);
    insertFirst(L,P);
    printInfo(L);

    cout<<"Masukan Angka Kedua : ";
    cin>>x;
    P = allocate(x);
    insertFirst(L,P);
    printInfo(L);

    cout<<"Masukan Angka Ketiga : ";
    cin>>x;
    P = allocate(x);
    insertFirst(L,P);
    printInfo(L);

    cout<<"Syntax Delete Fisrt"<<endl;
    deleteFirst(L,P);
    printInfo(L);

    cout<<endl<<"==>Sesi Have Fun!!!<=="<<endl<<endl;

    cout<<"Insert Last :";
    cin >>x;
    P = allocate(x);
    inserLast(L,P);
    printInfo(L);

    cout<<"Insert After || Angka yang ingin dimasukan :";
    cin >>x;
    P = allocate(x);

    cout<<"Insert After || Setelah angka :";
    cin >>x;
    address Q = searchAddress(L,x);
    insertAfter(L,P,Q);
    printInfo(L);

    cout<<"Delete Last"<<endl;
    deleteLast(L,P);
    printInfo(L);

    cout<<"Delete After || Setelah angka :";
    cin >>x;
    Q = searchAddress(L,x);
    deleteAfter(L,P,Q);
    printInfo(L);

    cout<<endl<<"INPUT NIM 10 Digit"<<endl;
    List L1;
    createList(L1);
    for(int i = 1; i <= 10; i++) {
        cout<<"Digit "<<i<<" : ";
        cin >> x;
        P = allocate(x);
        if (first(L1)==NULL) {
            insertFirst(L1,P);
        } else {
            inserLast(L1,P);
        }
    }
    cout<<"Isi List : ";
    printInfoNim(L1);

    /**
        Nama    : Bagas Tri Wibowo
        NIM     : 1301194051
    */


    return 0;
}
