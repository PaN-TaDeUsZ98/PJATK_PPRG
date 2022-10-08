#include <iostream>

using namespace std;

int a, b, c;

int main()
{
   cout << "Podaj pierwszą liczbę: \n";
    cin >> a;
    
    cout << "Podaj drugą liczbę: \n";
    cin >> b;
    
    cout << "Podaj trzecią liczbę: \n";
    cin >> c;

   if ((a>=b) && (a>=c))
      cout<<"Najwiekszą liczbą jest "<<a;

   else if ((b>=a) && (b>=c))
      cout<<"Najwiekszą liczbą jest "<<b;

   else if ((c>=a) && (c>=b))
      cout<<"Najwiekszą liczbą jest "<<c;

    return 0;
}
