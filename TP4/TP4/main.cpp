#include <iostream>
#include "doublelinkedlist.cpp"

using namespace std;

int main()
{
    /**
        Nama    : Bagas Tri Wibowo
        Kelas   : IF-43-04
        NIM     : 1301194051
    */
    List L1,L2,L3;
    createList(L1);
    createList(L2);
    createList(L3);

    cout<<"=====> List 1 <====="<<endl;
    cout<<"Insert Asc (10)"<<endl;
    InserAscending(L1,10);
    printInfo(L1);
    cout<<"Insert Asc (5)"<<endl;
    InserAscending(L1,5);
    printInfo(L1);
    cout<<"Insert Asc (15)"<<endl;
    InserAscending(L1,15);
    printInfo(L1);
    cout<<"Insert Asc (6)"<<endl;
    InserAscending(L1,6);
    printInfo(L1);

    cout<<"Median List 1 : ";
    cout<<median(L1)<<endl<<endl;

    cout<<"=====> List 2 <====="<<endl;
    InserAscending(L2,30);
    InserAscending(L2,70);
    InserAscending(L2,24);
    InserAscending(L2,20);
    InserAscending(L2,42);
    InserAscending(L2,10);
    InserAscending(L2,14);
    printInfo(L2);
    cout<<"delete Elm (10)"<<endl;
    deleteElm(L2,10);
    printInfo(L2);
    cout<<"delete Elm (70)"<<endl;
    deleteElm(L2,70);
    printInfo(L2);
    cout<<"delete Elm (24)"<<endl;
    deleteElm(L2,24);
    printInfo(L2);
    cout<<"Median List 2 : ";
    cout<<median(L2)<<endl<<endl;

    cout<<"=====> List 3 <====="<<endl;
    cout<<"List 3 = List 1 + List 2"<<endl;;
    concat(L1,L2,L3);
    printInfo(L3);
    return 0;
}
