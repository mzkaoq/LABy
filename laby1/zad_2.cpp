#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    int a=argc-1;
    int dlugosc;
    int j=0;
    if(a==1)
    {
        string slowo=argv[1];
        dlugosc=slowo.length();
        for(j=0;j<=dlugosc/2;j++)
        {
            if(slowo[j]!=slowo[dlugosc-j-1])
            {
                cout<<"slowo nie jest palindromem";
                break;
            }
        }
        if(j+1>dlugosc/2)
        {
            cout<<"slowo jest palindromem";
        }
    }
    else
    {
           cout<<"podaj tylko jedno slowo"<<endl;
           return 1;
    }
    
   return 0;
}

