#include <iostream>
#include <list>
using namespace std;

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

list<list<int>> concatenar_2_listas_anidadas(list<list> &l1, list<int> &l2)
{
    
}

int main()
{

    return 0;
}