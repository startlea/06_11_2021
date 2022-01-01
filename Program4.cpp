#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, ""); // pokazuje polskie znaki

    float mama;
    float tata;
    float odsetki;
    float razem;
    float am;
    float opl;
    float dom;
    float ubranka;
    float tel;
    float czesne;
    float aut;
    float samoch;
    float inne;
    float razeem;
    float calosc;

    cout << "Wydatki rodzinne\n\n";

    cout << "Pensja mamy: ";
    cin >> mama;
    cout << "Pensja taty: ";
    cin >> tata;
    cout << "Odsetki z lokat bankowych: ";
    cin >> odsetki;
    razem = mama + tata + odsetki;
    cout << "Suma dochodów: " << razem << endl
         << endl;

    cout << "Żywność: ";
    cin >> am;
    cout << "Użytkowanie mieszkania i opłaty energii: ";
    cin >> opl;
    cout << "Prowadzenie gosp. domowego: ";
    cin >> dom;
    cout << "Odzież obuwie: ";
    cin >> ubranka;
    cout << "Telefony: ";
    cin >> tel;
    cout << "Czesne za studia: ";
    cin >> czesne;
    cout << "Transport: ";
    cin >> aut;
    cout << "Użytkowanie samochodu: ";
    cin >> samoch;
    cout << "Inne wydatki: ";
    cin >> inne;
    razeem = am + opl + dom + ubranka + tel + czesne + aut + samoch + inne;
    cout << "Suma wydatków: " << razeem << endl;

    calosc = razem - razeem;
    cout << "Nadwyżka lub nie budżetu domowego: " << calosc << endl
         << endl;

    cout << "Żywność to: " << am / razem*100 << "% twoich wszystkich wydatków" << endl;
    cout << "Prowadzenie gosp. domowego to: " << dom / razem*100 << "% twoich wszystkich wydatków" << endl;

    system("Pause");
    return 0;
}