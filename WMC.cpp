#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    float wzrost;
    cout << "Podaj wzrost:\n";
    cin >> wzrost;
    float waga;
    cout << "Podaj wage:\n";
    cin >> waga;
    float wmc = waga / (wzrost * wzrost);
    cout << wmc;

    if (wmc < 19)
    {
        cout << "Niedowaga\n";
    }
    if (wmc >= 19 && wmc <= 25)
    {
        cout << "Norma\n";
    }
    if (wmc > 25 && wmc <= 30)
    {
        cout << "Nadwaga\n";
    }
    if (wmc > 30)
    {
        cout << "Otyłość\n";
    }
    return 0;
    system("Pause");
}