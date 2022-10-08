#include <iostream>

using namespace std;

int a, b, c, m;

int main()
{
    cout << "Podaj pierwszą liczbę: \n";
    cin >> a;
    
    cout << "Podaj drugą liczbę: \n";
    cin >> b;
    
    cout << "Podaj trzecią liczbę: \n";
    cin >> c;

    m=a;
    if (b>m) m=b;
    if (c>m) m=c;

    cout << "największą liczbą jest: " << m;

    return 0;
}