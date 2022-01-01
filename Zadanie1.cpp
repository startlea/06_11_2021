#include <iostream>

using namespace std;
int main()

{
    setlocale(LC_ALL, "");
    //n - liczba oznaczajaca rok
    //a - reszta z dzielenia n przez 19
    //b - reszta z dzielenia n przez 4
    //c - reszta z dzielenia n przez 7
    //d – reszta z dzielenia liczby (19*a + k) przez 30
    //e - reszta z dzielenia liczby (2*b + 4*c + 6*d + l) przez 7
    int n, k, l, a, b, c, d, e;

    cout << "Wprowadź rok, którego date Wielkanocy chcesz obliczyć z przedziału (1800 <= n < 2200), następnie naciśnij enter: \n";
    while (cin >> n)
    {
        if (n < 1800 || n >= 2200)
        {
            cout << "Błąd. Wprowadź rok jeszcze raz, z przedziału między 1800 a 2200 \n";
        }
        else if (n >= 1800 & n < 2200)
        {

            if (n >= 1800 && n <= 1899)
            {
                k = 23;
                l = 4;
            }
            else if (n >= 1900 && n <= 2099)
            {
                k = 24;
                l = 5;
            }
            else if (n >= 2100 && n <= 2199)
            {
                k = 24;
                l = 6;
            }

            a = n % 19;
            b = n % 4;
            c = n % 7;
            d = (19 * a + k) % 30;
            e = (2 * b + 4 * c + 6 * d + l) % 7;
            // 2 wyjątki gdy d=29 lub d=28 oraz e=6

            if (e == 6 && d == 29)
            {

                cout << "Wielkanoc obchodzimy: 19.04 \n";
            }
            else if (e == 6 && d == 28)
            {
                cout << "Wielkanoc obchodzimy: 18.04 \n";
            }

            else if ((d + e) < 10)
            {
                int l;
                l = 22 + d + e;
                cout << "W tym roku Wielkanoc obchodzimy: \n" << l << ".03 \n";
            }
            else if ((d + e) > 9)
            {
                int k;
                k = d + e - 9;
                cout << "W tym roku Wielkanoc obchodzimy: \n" << k << ".04 \n";
            }
        }
    }
    return 0;
}
