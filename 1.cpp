#include <iostream>
using namespace std;

int main()
{
    int liczba;
    cout << "podaj liczbe \n";
    cin >> liczba;
    int liczba2;
    cout << "podaj liczbe2 \n";
    cin >> liczba2;
    //instrukcja warunkowa
    //if(warunek logiczny)
    //{instrukcja jeśli warunek logiczny jest prawdziwy}
    //else
    //{instrukcja jesli warunek logiczny jest właściwy}
    if (liczba == 5)
    {
        cout << "Gratulacje wygrałeś \n";
    }
    else
    {
        cout << "Nie trafiłeś \n";
    }
    //instrukcja warunkowa z and (&&) warunek zostaje spełniony jeśli obie instrukcje są prawdziwe
    if (liczba==5 && liczba2==7){
        cout << "Gratulacje wygrałeś \n";

    }
    else {
        cout << "Przegrałeś \n";
    }
    //instrukcja warunkowa z operatorem or (||) warunek zostaje spełniony jeśli przynajmniej jedna instrukcja jest prawdziwa
    if (liczba==5 || liczba2==7){
        cout << "Gratulacje wygrałeś!! \n";
    }
    else {
        cout << "Przegrałeś \n";
    }
//instrukcja warunkowa z negacją (!)
    if (liczba!=5){
        cout << "Przegrałeś \n";
    }
    else{
        cout << "Gratulacje wygrałeś \n";
    }
}