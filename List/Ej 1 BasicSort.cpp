#include <iostream>
#include <list>
using namespace std;

/*
BasicSort. Escribir una función void basic_sort(list<int> &L), que ordena los elementos de L
de menor a mayor. Para ello emplear el siguiente algoritmo simple: utilizando una lista auxiliar L2,
tomar el menor elemento de L, eliminarlo de L e insertarlo al final de L2 hasta que L este vacía.
Luego insertar los elementos de L2 en L.
*/

void mostrar_lista(const list<int> &L)
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

void basic_sort(list<int> &L)
{
    list<int> L2;

    while (!L.empty())
    {
        auto itMenor = L.begin(); // elijo como menor al primer elemento de mi lista

        for (auto it = L.begin(); it != L.end(); ++it)
        {
            if (*it < *itMenor)
            {
                itMenor = it;
            }
        }
        L2.push_back(*itMenor); // pongo en mi lista aux al menor
        L.erase(itMenor);       // y luego lo borro de mi lista original
    }

    for (int x : L2)
    {
        L.push_back(x);
    }
}

int main()
{
    list<int> L;
    int cant;
    cout << "Ingrese la cant de ints que desea ingresar: ";
    cin >> cant;
    for (int i = 0; i < cant; i++)
    {
        int x;
        cout << "Ingrese el int: ";
        cin >> x;
        L.push_back(x);
    }

    mostrar_lista(L);
    basic_sort(L);
    mostrar_lista(L);

    return 0;
}
