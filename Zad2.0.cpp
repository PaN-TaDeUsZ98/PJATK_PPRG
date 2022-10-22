#include <iostream>

using namespace std;

int main()
{
    int goscie;
    int pizza;
    int reszta;
    int calosc;
    cout << "Ilosc gosci:";
    cin >> goscie;
    cout << "Ilosc kawalkow pizzy:";
    cin >> pizza;
    calosc = goscie/pizza;
    reszta = goscie%pizza;
    
    if (goscia%pizza==0)
    cout<<"organizator glodny, Ilosc kawalka pizzy na jednego goscia to: " << calosc << endl;
    else 
    cout<<"organizator bedzie mial:" << reszta << endl;
 
    return 0;
}
