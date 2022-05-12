#include <iostream>
#include <conio.h>
#include <clocale>
using namespace std;
int main()
{int n,x=0,k=0, y=0, b=0;
char s;
setlocale(0, "");
cout<<"n="; cin>>n;
cout<<"Enter a sequence of characters into a string ";
for(int i=1;i<=n;i++)
{
cin>>s;
if (s=='+')
{x++;
}
if (s=='*')
{k++;
}
if (s=='-')
{
    y++;
}
b=y+x+k;
}
cout<<"+: "<<x<<endl;
cout<<"*: "<<k<<endl;
cout<<"Total number: *,+,- "<<b;
_getch();
return 0;
}
