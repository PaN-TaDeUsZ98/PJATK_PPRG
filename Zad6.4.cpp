#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string str;
    int n;
 
    cout << "Podaj napis ktory chcialbys powielic n razy: ";
    cin >> str;
    cout << "Podaj n: ";
    cin >> n;
 
    string result = "";
    for (int i = 0; i < n; i++)
        result += str;
 
    cout << result << endl;
 
    return 0;
}