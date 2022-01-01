#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int kat;
    cout << "Podaj miare kata\n";
    cin >> kat;

    if (kat > 90)
    {
        cout << "Kat jest rozwarty\n";
    }
    if (kat < 90)
    {
        cout << "kat jest ostry\n";
    }
    if (kat == 90)
    {
        cout << "kat jest prosty\n";
    }

    system("pause");
    return 0;
}