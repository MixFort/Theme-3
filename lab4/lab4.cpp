#include <iostream>
#include <conio.h>
#include <clocale>
using namespace std;
int main()
{
    double n,a=0,x=2;
    setlocale(0, "");
     cout<<"Enter the number ";
        cin>>n;
    do
    {
        a+=1/x;
        x=x+1;

    }
    while(a<=n);
    x=x-2;
    cout<<"Result: "<<x<<endl;
    _getch();
    return 0;
}
