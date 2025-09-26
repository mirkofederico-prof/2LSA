//WHILE ciclo senza iterazione
#include <iostream>

using namespace std;

int main()
{

int x = 10;

    cout << "Inizio ciclo" << endl;

    do
    {
        cout << "x e': " << x << endl;
        x ++;
        cout << "x adesso e': " << x << endl;
    }
    while (x < 10);

    cout << "ciclo finito" << endl;
}
