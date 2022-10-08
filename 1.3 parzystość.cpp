#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int liczba;

    cout << "podaj liczbe \n";
    cin >> liczba;
    
    if (liczba==0)
        cout << "Liczba jest równa zero" ;

    else if (liczba%2==0) 
        cout << "liczba jest parzysta" ;
        
    else
        cout << "liczba jest nieparzysta" ;

    return(0);
}