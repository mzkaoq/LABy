#include <iostream>
#include <string>
using namespace std;

void funckja(int *p,int *q)
{
    if(*p > *q)
    {
        swap(*p,*q);
    }
}
int main()
{
     int a,b;
     int *p=&a;
     int *q=&b;
     cout<<"podaj a,b"<<endl;
     cin>>a;
     cin>>b;
     funckja(p,q);
     cout<<"a="<<a<<endl;
     cout<<"b="<<b<<endl;
}