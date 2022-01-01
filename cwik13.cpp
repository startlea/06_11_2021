// tabliczka mnożenia - trójkąt

#include <iostream>

using namespace std;

int main()

{
    int n, k = 1;
    cout << "Podaj liczbe: ";
    cin >> n;
    cout << endl;

    // dałam zmienna pomocniczą k, aby rozmiar tabeli w poziomie zwiększał sie
    // z każdą linijką począwszy od 1

    while (k <= n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= k; j++)
                cout << i * j << " ";
            cout << endl;

            k++;
        }
    }
    cout << endl;

    return 0;
}