#include <iostream>
#include <list>
using namespace std;

/*
Escribir una función void selection_sort(list<int> &L), que ordena los
elementos de L de menor a mayor. Para ello debe tomarse el menor elemento de L e intercambiarlo
(swap) con el primer elemento de la lista. Luego intercambiar el menor elemento de la lista
restante, con el segundo elemento, y así sucesivamente. Esta función debe ser IN PLACE.
*/

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

void selection_sort(list<int> &L)
{
    for (list<int>::iterator itAfuera = L.begin(); itAfuera != L.end(); itAfuera++) // primero itero desde el primer elemento
    {
        auto itMenor = itAfuera ; // hago que el primer elemento sea el más pequeño
        for (list<int>::iterator itAdentro = next(itMenor); itAdentro != L.end(); itAdentro++) // mantengo el iterador externo en su posición actual, y recorro con un iterador interno
        {                                                                                       // todos los elementos faltantes DESDE la posición SIGUIENTE a la de mi iterador externo
            if (*itAdentro < *itMenor)
            {
                itMenor = itAdentro; // si mi iterador interno es menor al menor elemento, lo asigno al itMenor
            }
        }
        swap(*itAfuera, *itMenor); // una vez identificados la posición del menor, intercambio el valor del menor con el de mi iterador externo, y avanzo al proximo elemento de la lista
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
    selection_sort(L);
    mostrar_lista(L);

    return 0;
}