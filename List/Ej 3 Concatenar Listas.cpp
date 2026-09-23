#include <iostream>
#include <list>
using namespace std;

void mostrar_lista(const list<int> &L) // una función para mostrar mi lista
{
    cout << "{";

    for (auto it = L.begin(); it != L.end(); ++it)
    {
        cout << *it;
        if (next(it) != L.end())
        {
            cout << ", ";
        }
    }
    cout << "}" << endl;
}

/* Concatena. Escriba procedimientos para concatenar:
    a) dos listas L1 y L2 usando insert;
    b) una lista LL de n sublistas usando insert;
    c) una lista LL de n sublistas usando splice.
    Cada procedimiento debe retornar el resultado en una lista nueva.
*/

list<int> concatenar_2_listas_insert(list<int> &l1, list<int> &l2) // dos listas L1 y L2 usando insert;
{
    list<int> resultado;
    resultado.insert(resultado.end(), l1.begin(), l1.end());
    resultado.insert(resultado.end(), l2.begin(), l2.end());
    return resultado;
}

list<int> concatenar_2_listas_sublista_insert(list<list<int>> &ll) // una lista de n sublistas usando insert
{
    list<int> resultado;

    for (auto it = ll.begin(); it != ll.end(); it++)
    {
        resultado.insert(resultado.end(), it->begin(), it->end());
    }

    return resultado;
}

list<int> concatenar_lista_sublista_splice(list<list<int>> &ll, )

int main()
{
    // inciso a: concatenar dos listas de int con insert
    list<int> l1 = {1, 2, 3};
    list<int> l2 = {4, 5, 6};
    list<int> aux1 = concatenar_2_listas_insert(l1,l2);
    mostrar_lista(aux1);

    // inciso b_ concatenar una lista de sublistas de int usando insert
    list<int> l3 = {7, 8, 9};
    list<int> l4 = {10, 11, 12};
    list<list<int>> l5 = {l3,l4};
    list<int> aux2 = concatenar_2_listas_sublista_insert(l5);
    mostrar_lista(aux2);



    return 0;
}