#include <iostream>
#include "cdll.cpp"

using namespace std;

int main()
{
    /**
        Nama    : Bagas Tri Wibowo
        NIM     : 1301194051
        Kelas   : IF-43-04
        */
    List L;
    address P;
    createList(L);
    printInfo(L);
    createNewElmt('a',P);
    insertFirst(L,P);
    createNewElmt('t',P);
    insertFirst(L,P);
    createNewElmt('t',P);
    insertAfter(Next(First(L)),P);
    createNewElmt('c',P);
    insertAfter(First(L),P);
    createNewElmt('a',P);
    insertAfter(Prev(First(L)),P);
    createNewElmt('s',P);
    insertAfter(Prev(First(L)),P);
    createNewElmt('c',P);
    insertAfter(Prev(First(L)),P);
    createNewElmt('a',P);
    insertAfter(Prev(First(L)),P);
    printInfo(L);
    char data[] = {'c','a','t'};
    int sizeArray = sizeof(data)/sizeof(data[0]);
    cout<<countWord(data,L,sizeArray);


    return 0;
}
