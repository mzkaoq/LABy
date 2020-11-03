#include <iostream>
#include <string>
using namespace std;

void funckja(int &p,int &q)
{
     swap(p,q);
}
int main()
{
     int a,b;
     cout<<"podaj a,b"<<endl;
     cin>>a;
     cin>>b;
     funckja(a,b);
     cout<<"a="<<a<<endl;
     cout<<"b="<<b<<endl;
}