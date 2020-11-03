#include <iostream>
#include <string>
using namespace std;

int funckja(int p,int *q)
{
     int iloczyn;
     iloczyn=p * *q;
    *q=*q+p;
    return iloczyn;
}
int main()
{
     int a,b;
     cout<<"podaj a,b"<<endl;
     cin>>a;
     cin>>b;
     cout<<"iloczyn="<<funckja(a,&b)<<endl;
     cout<<"suma="<<b<<endl;
}