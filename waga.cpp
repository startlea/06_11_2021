#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int wzrost;
    cout << "Podaj wzrost\n";
    cin >> wzrost;
    int waga ;
    cout << "Podaj wage\n";
    cin >> waga;
    
        
    if (waga/wzrost > 30)
    {
        cout << "Otylosc\n";
    }
    if (waga/wzrost < 19)
    {
        cout << "Niedowaga\n";
    }
    if (waga/wzrost > 19 && waga/wzrost < 25)
    {
        cout << "Norma\n";
    }
    if (waga/wzrost >25 && waga/wzrost <30)
    {
        cout << "Nadwaga\n";
    }

    system("pause");
    return 0;
}
