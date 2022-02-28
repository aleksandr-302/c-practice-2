#include <iostream>
using namespace std;
int main()
{
    int decimal,i,binary;
    i = 2;
    cin >> decimal;
    int bin[200];
    int t =0;
    while(decimal>1)
    {
        binary= decimal%i;
        bin[t] =binary;
        decimal/=i;
        t++;
    }
    t--;
    cout << 1;
    while(t>=0)
    {
        cout << bin[t];
        t--;
    }
    cout <<endl;
    return main();
}
