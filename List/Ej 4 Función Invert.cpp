#include <iostream>
#include <list>
using namespace std;

/*
Invierte. Escribir una función void invert(list<int> &L), que invierte el orden de la lista L.
Este algoritmo debe implementarse in place y debe ser O(n).
Restricción: no utilizar el método size().
*/

void invert(list<int> &L)
{
   auto itLeft = L.begin();
   auto itRight = L.end();
   while(itLeft != itRight){
        auto aux = itLeft;
        itLeft = itRight;
        itRight = aux;
        
        left++;
        if(itLeft==itRight){
           break;
}
        right--;
   }
}
    

int main()
{

    return 0;
}