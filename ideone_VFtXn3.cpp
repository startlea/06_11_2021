#include <iostream>

using namespace std;

int main()

{

  int a,b,c;

   char znak;

cout<<"P - Pole prostokata \n";

cout<<"K - Pole kwadratu \n";

cout<<"T - Pole trojkata \n";

cout<<"Podaj odpowiadający figurze znak  \n";

cin>>znak;

  switch(znak)

  {

  case 'P':

      cout<<"Prosze podac dlugosci boków";

      cin>>a>>b;

      cout<<"Pole prostokata wynosi: "<<a*b;

      break;

  case 'K':

      cout<<"Prosze podac bok kwadratu";

      cin>>c;

      cout<<"Pole kwadratu wynosi "<<c*c;

      break;

  case 'T':

       cout<<"Prosze podac podstawe i wysokosc trojkata";

       cin>>a>>b;

       cout<<"Pole trojkata wynosi:  "<<0.5*a*b;

      break;

  default:

      cout<<"Wybrales zly znak";

      break;

  }

  return 0;

}
