#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string color, objeto, persona;

    cout << "¿De que color es el coche?: ";
    cin >> color;
    cout << "¿Que objeto es?: ";
    cin >> objeto;
    cout << "¿Quien eres?: ";
    cin >> persona;

    cout << "El coche es " << color << endl;
    cout << "El " << objeto << " es transparente" << endl;
    cout << "El programa es igual que " << persona << endl;

        return 0;
}