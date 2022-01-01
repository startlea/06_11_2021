// suma odwrotności

#include <iostream>

using namespace std;

int main()
{
    float n, s = 0;
    cout << "Podaj ilosc liczb: ";
    cin >> n;

    // odwortność to 1/n, dodajemy odwrotności do siebie

    for (int i = 1; i <= n; i++)
    {
        s += (1.0 / i);
    }

    cout << s << endl;

    return 0;
}
