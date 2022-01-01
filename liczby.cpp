#include <iostream>

using namespace std;

int main()
{

    setlocale(LC_ALL, ""); // pokazuje polskie znaki

    // Program, pobierający trzy dowolne liczby od użytkownika i wypisujący najmniejszą i największą z nich

    int a, b, c;

    cout << "Podaj liczbe a,b,c"
         << "\n";

    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << " Najwieksza " << a << "\n";
        if (c > b)
            cout << " Najmniejsza " << b << "\n";
        else
            cout << " Najmniejsza " << c << "\n";
    }

    else if (b > a && b > c)
    {
        cout << " Najwieksza " << b << "\n";
        if (a > c)
            cout << " Najmniejsza " << c << "\n";

        else
            cout << " Najmniejsza " << a << "\n";
    }

    else
    {
        cout << " Najwieksza " << c << "\n";
        if (a > b)
            cout << " Najmniejsza " << b << "\n";
        else
            cout << " Najmniejsza " << a << "\n";
    }

    return 0;
}
