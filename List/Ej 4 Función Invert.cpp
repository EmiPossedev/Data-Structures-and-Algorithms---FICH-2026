#include <iostream>
#include <list>
using namespace std;

template <typename T>
void mostrarEstructura(const T &structure)
{
   for (const auto &valor : structure)
   {
      cout << valor << " ";
   }
   cout << endl;
}

/*
Invierte. Escribir una función void invert(list<int> &L), que invierte el orden de la lista L.
Este algoritmo debe implementarse in place y debe ser O(n).
Restricción: no utilizar el método size().
*/

void invert(list<int> &L)
{
   auto itLeft = L.begin();
   auto itRight = L.end();

   if (itRight != itLeft)
   {
      --itRight;
   }

   while (itLeft != itRight)
   {
      swap(*itLeft, *itRight);
      ++itLeft;

      if (itLeft == itRight)
      {
         break;
      }

      --itRight;
   }
}

int main()
{
   list<int> L = {1, 2, 3, 4, 5};
   mostrarEstructura(L);
   invert(L);
   mostrarEstructura(L);

   return 0;
}