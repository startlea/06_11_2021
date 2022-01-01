// a do potęgi n

#include <iostream>

using namespace std;

int main()
{
    int a, n, k = 1;
    cout << "Podaj liczbe: ";
    cin >> a;
    cout << "Podaj potege: ";
    cin >> n;

    for (n; n > 0; n--)
    {
        k = k * a;
    }

    cout << k << endl;

    return 0;
}
