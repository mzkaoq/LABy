#include <iostream>
#include <string>
using namespace std;

void funckja(int *p,int *q)
{
    swap(*p,*q);
}
int main()
{
     int a,b;
     int c,d;
     int *p=&a;
     int *q=&b;
     cout<<"podaj a,b"<<endl;
     cin>>a;
     cin>>b;
     c=a;
     d=b;
     funckja(p,q);
     cout<<"a="<<a<<endl;
     cout<<"b="<<b<<endl;
    if(c==b&&d==a)
    {
        cout<<"test zdany pomyslnie";
    }
}