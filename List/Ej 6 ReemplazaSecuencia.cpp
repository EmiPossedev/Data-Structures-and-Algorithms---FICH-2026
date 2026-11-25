#include <iostream>
#include <list>
using namespace std;

template <typename T>
void showStructure(const T &structure)
{

    for (const auto &data : structure)
    {
        cout << data << " ";
    }
    cout << endl;
}

/*
6) ReemplazaSecuencia. Dada una lista de enteros L y dos listas SEQ y REEMP, posiblemente de
distintas longitudes, escribir una función void reemplaza(list<int> &L, list<int>& SEQ,
list<int> &REEMP), que busca todas las secuencias de SEQ en L y las reemplaza por REEMP. Por
ejemplo, si L=(1,2,3,4,5,1,2,3,4,5,1,2,3,4,5), SEQ=(4,5,1) y REEMP=(9,7,3), entonces
después de llamar a reemplaza(L,SEQ,REEMP), debe quedar L=(1,2,3,9,7,3,2,3,9,7,3,2,3,4,5).
Para implementar este algoritmo primero buscar desde el principio la
secuencia SEQ, al encontrarla, reemplazar por REEMP, luego seguir buscando
a partir del siguiente elemento al último de REEMP.
*/

void reemplaza(list<int> &L, const list<int> &SEQ, const list<int> &REEMP)
{
    if (SEQ.empty())
        return;

    auto pos = L.begin();

    while (pos != L.end())
    {
        auto candidato = pos;
        auto itseq = SEQ.begin();

        while (candidato != L.end() &&
               itseq != SEQ.end() &&
               *candidato == *itseq)
        {
            ++candidato;
            ++itseq;
        }

        if (itseq != SEQ.end())
        {
            ++pos;
            continue;
        }

        pos = L.erase(pos, candidato);

        for (int valor : REEMP)
        {
            pos = L.insert(pos, valor);
            ++pos;
        }
    }
}

int main()
{
    list<int> L = {1, 2, 3, 5, 4, 7, 8};
    list<int> SEQ;
    list<int> REEMP;
    int cantSEQ;
    cout << "Ingrese la cant de elementos de la secuencia buscada: ";
    cin >> cantSEQ;
    cout << "Ingrese los elementos de la secuencia que se quiere reemplazar: " << endl;
    for (int i = 0; i < cantSEQ; i++)
    {
        int x;
        cin >> x;
        SEQ.push_back(x);
    }
    showStructure(L);

    cout << "Ingrese la cant de elementos de reemplazo: ";
    int cantREEMP;
    cin >> cantREEMP;
    cout << "Ingrese los elementos de la secuencia a reemplazar" << endl;
    for (int i = 0; i < cantREEMP; i++)
    {
        int x;
        cin >> x;
        REEMP.push_back(x);
    }

    reemplaza(L, SEQ, REEMP);
    showStructure(L);

    return 0;
}