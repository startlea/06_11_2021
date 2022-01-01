// tabliczka mnożenia do n

#include <iostream>

using namespace std;

int main()

{
    int n;
    do
    {
        cout << "Podaj liczbę: ";
        cin >> n;
        cout << endl;
    }

    while (n > 15); // chcemy, żeby liczba n byla mniejsza od 15
    cout << "TABLICZKA MNOZENIA" << endl;

    // pętla w pętli daje nam możliwość narysować "tabelke"

    for (int i = 1; i <= n; i++)
    {
        cout << "Wielokrotnosc: " << i << "    ";
        for (int j = 1; j <= n; j++)
            cout << i * j << " "; // i*j daje nam wielokrotnosci kazdej liczby
       cout << endl;
    }
    cout << endl;

    return 0;
}
