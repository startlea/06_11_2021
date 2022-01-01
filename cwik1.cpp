#include <iostream>

#include <cstdlib>

using namespace std;

int main()

{
    setlocale(LC_ALL, "");

    float bok, pole;

    cout << "Program oblicza pole kwadratu.\n";

    cout << "Podaj długość boku a=";

    cin >> bok;

    while (bok <= 0)

    {

        cout << "Długość boku musi być większa od zera!\n\n";

        cout << "Podaj długość boku a=";

        cin >> bok;
    }
    pole = bok * bok;

    cout << "\n\nPole kwadratu = " << pole << endl
         << endl;

    system("PAUSE");

    return 0;
}