#include <iostream>

#include <cstdlib>

using namespace std;

int main()

{

    setlocale(LC_ALL, "");

    // okreslamy wszystkie zmienne na ktorych bedziemy wykonywac obiczenia

    int r, w, a, b, c, d, e, A, B;

    cout << "Program obliczający datę Wielkanocy w danym roku z XIX - XXIIw. Podaj rok: ";

    cin >> r;

    // dzielimy kazdy wiek ze wzgledu na roznice w liczbach A i B. wykonujemy obliczenia

    if ((r >= 1800) && (r <= 1899))

    {

        A = 23;

        B = 4;

        a = r % 19;

        b = r % 4;

        c = r % 7;

        d = (a19 + A) % 30;

        e = (2b + 4c + 6d + B) % 7;

        w = 22 + d + e;
    }

    if ((r >= 1900) && (r <= 2099))

    {

        A = 24;

        B = 5;

        a = r % 19;

        b = r % 4;

        c = r % 7;

        d = (a19 + A) % 30;

        e = (2b + 4c + 6d + B) % 7;

        w = 22 + d + e;
    }

    if ((r >= 2100) && (r <= 2199))

    {

        A = 24;

        B = 6;

        a = r % 19;

        b = r % 4;

        c = r % 7;

        d = (a19 + A) % 30;

        e = (2b + 4c + 6d + B) % 7;

        w = 22 + d + e;
    }

    if (r == 2200)

    {

        A = 25;

        B = 0;

        a = r % 19;

        b = r % 4;

        c = r % 7;

        d = (a19 + A) % 30;

        e = (2b + 4c + 6d + B) % 7;

        w = 22 + d + e;
    }

    // jezeli liczba wynosi ponad 31 musimy ja skrocic o caly miesiac, wtedy wielkanoc wypada w kwietniu

    if (w > 31)

    {

        w = w - 31;

        cout << "Wielkanoc w roku " << r << " przypada " << w << " kwietnia.";
    }

    else

    {

        cout << "Wielkanoc w roku " << r << " przypada " << w << " marca.";
    }

    return 0;
}