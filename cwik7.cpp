// liczba w odwrotnej kolejnosci

#include <iostream>

#include <string>

using namespace std;

int main()
{
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;

    // tu wyświetlamy po prostu każdą kolejna cyfre dzieki obliczeniu % z liczby wprowadzonej

    while (n > 0)
    {
        cout << n % 10;
        n /= 10;
    }

    return 0;
}
