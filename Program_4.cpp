#include <iostream>
#include <cstdlib>

// Mariusz Fedorowicz
using namespace std;
int main()
{
    setlocale(LC_ALL, ""); // pokazuje polskie znaki

    float pensjam;
    float pensjat;
    float dochod;
    float odsetki;
    float wydatki;
    float zywnosc;
    float oplaty;
    float dom;
    float odziez;
    float telefon;
    float czesne;
    float transport;
    float samochod;
    float inne;
    float roznica;

    cout << "Podaj dochody w rodzinie.\n";
    cout << "Pensja netto Mamy:\t";
    cin >> pensjam;
    cout << "Pensja netto Taty:\t";
    cin >> pensjat;
    cout << "odsetki bankowe:\t";
    cin >> odsetki;
    cout << "Podaj wydatki miesięczne w rodzinie.\n";
    cout << "Wydatki na żywność:\t";
    cin >> zywnosc;
    cout << "Wydatki na mieszkanie i opłaty:\t";
    cin >> oplaty;
    cout << "Wydatki na prowadzenie domu:\t";
    cin >> dom;
    cout << "Wydatki na obież i obuwie:\t";
    cin >> odziez;
    cout << "Wydatki na telefony:\t";
    cin >> telefon;
    cout << "Czesne na studia:\t";
    cin >> czesne;
    cout << "Wydatki na tranaport:\t";
    cin >> transport;
    cout << "Wydatki na użytkowanie samochodu:\t";
    cin >> samochod;
    cout << "Wydatki inne niż wymienione wyżej:\t";
    cin >> inne;

    dochod = pensjam + pensjat + odsetki;
    wydatki = zywnosc + oplaty + dom + odziez + telefon + czesne + transport + samochod + inne;
    roznica = dochod - wydatki;

    if (roznica < 0)
    {
        cout << "Wydatki przekraczają dochód.\n"
             << endl;
    }
    if (roznica = 0)
    {
        cout << "Wydatki i dochody są równe.\n"
             << endl;
    }
    if (roznica > 0)
    {
        cout << "Wydatki są mniejsze od dochodów.\n";
        cout << "Nadwyżka wynosi:\t" << roznica << endl;
    }

    cout << "Dochód w rodzinie wynosi:\t" << dochod << endl;
    cout << "Wydatki miesięczne w rodzinie wynoszą:\t" << wydatki << endl;

    system("Pause");
    return 0;
}