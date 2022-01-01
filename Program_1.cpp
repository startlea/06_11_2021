#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, ""); // pokazuje polskie znaki

    float podstawa;
    float procent1 = 0.1775;
    float procent2 = 0.32;
    float wolna = 4400;

    cout << "Podaj podstawę opodatkowania: " << endl;
    cin >> podstawa;

    if (podstawa > 0 && podstawa <= 85528)
    {
        float kwota1 = podstawa * procent1 - wolna;
        cout << "Kwota końcowa podatku to: " << kwota1 << endl;
    }
    if (podstawa > 85528)
    {
        float kwota2 = podstawa * procent2 - wolna;
        cout << "Kwota końcowa podatku to: " << kwota2 << endl;
    }
    else if (podstawa < 0)
    {
        cout << "Podatek nie może być mniejszy od zera!" << endl;
    }

    system("Pause");
    return 0;
}