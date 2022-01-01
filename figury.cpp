#include <iostream>

using namespace std;

int main()

{

    int a, b, c;

    char znak;

    cout << "P - Pole prostokata \n";

    cout << "K - Pole kwadratu \n";

    cout << "T - Pole trojkata \n";

    cout << "\nPodaj odpowiadający figurze znak  \n";

    cin >> znak;

    switch (znak)

    {

    case 'P':
    case 'p':

        cout << "Prosze podac dlugosci boków \n";

        cin >> a >> b;

        cout << "Pole prostokata wynosi: " << a * b << "\n";

        break;

    case 'K':
    case 'k':

        cout << "Prosze podac bok kwadratu \n";

        cin >> c;

        cout << "Pole kwadratu wynosi " << c * c << "\n";

        break;

    case 'T':
    case 't':

        cout << "Prosze podac podstawe i wysokosc trojkata \n";

        cin >> a >> b;

        cout << "Pole trojkata wynosi:  " << 0.5 * a * b << "\n";

        break;

    default:

        cout << "\nWybrales zly znak \n\n";
        break;
    }

    system("pause");
    return 0;
}