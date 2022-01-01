#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int punkty;
    cout << "Podaj punkty: \n";
    cin >> punkty;

    // litera równa jest 0
    if (punkty == 0)
    {
        cout << "Błędna wartość\n";
    }

    else
    {
        if (punkty <= 50)
        {
            cout << "ndst\n";
        }
        if (punkty >= 51 && punkty <= 60)
        {
            cout << "mrn\n";
        }
        if (punkty >= 61 && punkty <= 70)
        {
            cout << "dst\n";
        }
        if (punkty >= 71 && punkty <= 80)
        {
            cout << "db\n";
        }
        if (punkty >= 81 && punkty <= 90)
        {
            cout << "bdb\n";
        }
        if (punkty >= 91 && punkty <= 100)
        {
            cout << "cel\n";
        }
        if (punkty > 100 || punkty < 0)
        {
            cout << "Podano niewłaściwą wartość\n";
        }
    }
    system("Pause");
    return 0;
}