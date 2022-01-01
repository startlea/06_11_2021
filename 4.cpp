#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int liczba;
    cout << "Podaj liczbę\n";
    cin >> liczba;
    if (liczba >= 10)
    {
        cout << "Liczba jest większa bądz równa 10\n";
        if (liczba >= 50)
        {
            cout << "Liczba jest większa bądż równa 50\n";
            if (liczba <= 100)
            {
                cout << "Liczba jest mniejsza bądż równa 100\n";
            }
        }
    }
    cout << "Koniec\n";
    if (liczba >= 10 && liczba <= 50)
    {
        cout << "Liczba jest większa bądz równa 10\n";
    }
    if (liczba >= 50)
    {
        cout << "Liczba jest większa bądz równa 50\n";
    }
    if (liczba <= 100)
    {
        cout << "Liczba jest mniejsza bądż równa 100\n";
    }

    system("pause");
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    setlocale( LC_ALL, "" );
	int liczba;
    cout << "Podaj liczbę\n";
    cin  >>liczba;
    if (liczba >= 10){
		cout << "Liczba jest większa bądz równa 10\n";
			if (liczba >= 50){
				cout << "Liczba jest większa bądż równa 50\n";
					if (liczba <= 100){
						cout << "Liczba jest mniejsza bądż równa 100\n";
					}
			}
	}
   cout << "Koniec\n"; 
   	   if (liczba >= 10 && liczba <= 50){
		cout << "Liczba jest większa bądz równa 10\n";
	}
		 if (liczba >= 50){
		cout << "Liczba jest większa bądz równa 50\n";
}
					if (liczba <= 100){
						cout << "Liczba jest mniejsza bądż równa 100\n";
					}

system ("pause");
	return 0;
}