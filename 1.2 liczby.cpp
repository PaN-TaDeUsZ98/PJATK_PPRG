#include <iostream>
using namespace std;
 
int main()
{
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
     
    if (liczba<0)
        cout << "Liczba jest mniejsza od zera" ;
    else if (liczba>0)
        cout << "Liczba jest większa od zera" ;
        
    else 
        cout << "Liczba jest równa zero" ;
 
    return 0;
}