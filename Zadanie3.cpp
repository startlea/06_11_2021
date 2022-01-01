#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int punkty;
    cout << "Podaj punkty: \n";
    cin >> punkty;

    if (punkty <= 0)
    {
        cout << "Podaj poprawne dane\n";
    }


    else
    {
        if (punkty <= 10)
        {
            cout << "100\n";
        }
        if (punkty >= 11 && punkty <= 30)
        {
            cout << "200\n";
        }
        if (punkty > 30)
        {
            cout << "400\n";
        }
    }
    system("Pause");
    return 0;
}