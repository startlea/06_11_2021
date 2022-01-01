#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, ""); // pokazuje polskie znaki

    float km;

    cout << "Podaj ile kilometrów chcesz zamienić na mile" << endl;
    cin >> km;
    float mil = km * 0.62;
    cout << km << " km, to: " << mil << " mil" << endl;

    system("Pause");
    return 0;
}