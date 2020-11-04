#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*template <class T> void funckja(T **p,T **q)
{
    T *c=*p;
    *p=*q;
    *q=c;

}*/
void funckja(int **p,int **q)
{
   swap(*p,*q);

}
int main()
{
     int a,b;
     int *p=&a;
     int *q=&b;
     cout<<"podaj a,b"<<endl;
     cin>>a;
     cin>>b;
     cout<<"adres a "<<&a<<endl;
     cout<<"adres b "<<&b<<endl;
     funckja(&p,&q);
     cout<<"wartosc na jaka wskazuje p "<<*p<<endl;
     cout<<"wartosc na jaka wskazuje q "<<*q<<endl;
    cout<<"na jaki adres wskazuje p "<<p<<endl;
    cout<<"na jaki adres wskazuje q "<<q<<endl;
}