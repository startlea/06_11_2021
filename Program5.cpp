#include <iostream>

using namespace std;

int main()
{
    int dystans, paliwo, srednie_spalanie;

    cout << "Podaj dlugosc przejechanej trasy: ";
    cin >> dystans;
    cout << "Podaj ilosc zuzytego paliwa: ";
    cin >> paliwo;

    srednie_spalanie = (paliwo * 100) / dystans;

    cout << "Średnie spalanie wynosi: " << srednie_spalanie << "/100 km" << endl;
    return 0;
}