#include <iostream>
#include <string>
using namespace std;

int main()
{
    string imie; // wpisujesz tutaj imie
    cout << "podaj imie \n";
    cin >> imie;

    cout << "długość imienia: " << imie.length() << '\n';
    if (imie[imie.length() - 1] == 'a' || imie[imie.length() - 1] == 'A')
        cout << "Imie " << imie << " to imie żeńskie! " << '\n';
    else
        cout << "Imie " << imie << " to imie meskie!" << '\n';

    system("Pause");
    return 0;
}