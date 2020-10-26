#include <iostream>

using namespace std;

int main()
{
    int a,b,i=1,suma_a=0,suma_b=0;
    cout<<"podaj liczby a i b"<<endl;
    cin>>a>>b;
    for(i=1;i<=a/2;i++)
    {
        if(a%i==0) suma_a+=i;
    }
    for(i=1;i<=b/2;i++)
    {
        if(b%i==0) suma_b+=i;
    }
    if(suma_a==b+1&&suma_b==a+1) cout<<"liczby sa skojarzone"<<endl;
    else cout<<"liczby nie sa skojarzone"<<endl;
    return 0;
}
