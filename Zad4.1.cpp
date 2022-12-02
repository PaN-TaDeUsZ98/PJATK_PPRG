#include <iostream>
 
using namespace std;
 
int max_value(int* tab, unsigned int ilosc)
{
    int max=tab[0];
    for (int l=0; l<ilosc; l++)
    {
        int x=tab[l];
        if(x>max)
            max=tab[l];
    }
    return max;
}
 
int main()
{
     
unsigned int ilosc;
 
cout<<"Podaj ile liczb chcesz wprowadzic: ";
cin>>ilosc;
cout<<endl;
 
int* tab = new int[ilosc];
int i;
 
for (i=0; i<ilosc; i++)
{
    cout<<i+1<<" liczba: ";
    cin>>tab[i];
}
 
cout<<"Najwieksza liczba to: "<<max_value(tab,ilosc)<<endl;
 
   
  return 0;
}