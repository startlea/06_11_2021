// suma nieparzystych cyfr liczby

#include <iostream>

using namespace std;

int main()

{
    int n, k, sum = 0;
    cout << "Podaj liczbe: ";
    cin >> n;

    // dzieki % otrzymamy ostatnia cyfrę w liczbie, zapisujemy ja w zmiennej pomocniczej k i sprawdzamy czy jest nieparzysta, jesli jest dodajemy ją do sumy

    while (n > 0)
    {
        k = n % 10;
        n = n / 10;
        if (k % 2 != 0)

        {
            sum += k;
        }
    }

    cout << sum << endl;

    return 0;
}