#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, ""); // pokazuje polskie znaki

    float dystans;
    float spalone;

    cout << "Podaj przejechany dystans motocyklem w kilometrach: " << endl;
    cin >> dystans;
    cout << "Podaj ilość spalonego paliwa w litrach: " << endl;
    cin >> spalone;
    if (dystans < 0 spalone < 0)
    {
        cout << "Podaj poprawne dane! Nie mogłeś np. przejechać i nic nie spalić!" << endl;
    }
    else if (dystans >= 0 spalone >= 0)
    {

        cout << "Twoje średnie spalanie to: " << spalone / dystans * 100 << "l/100km" << endl;
    }

    system("Pause");
    return 0;
}