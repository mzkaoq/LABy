#include <thread>
#include <mutex>
#include <iostream>
#include <cstdio>
#include <unistd.h>

using namespace std;

void jedzenie(int i,mutex widelce[])
{
    printf("filozof %d mysli\n", i);
    widelce[i].lock();
    printf("filozof %d bierze widelec %d\n", i, i);
    widelce[(i+1)%5].lock();
    printf("filozof %d bierze widelec %d\n", i, (i+1)%5);

    printf("filozof %d je \n", i);
    sleep(1);
    
    widelce[i].unlock();
    printf("filozof %d odklada widelec %d\n", i, i);
    widelce[(i+1)%5].unlock();
    printf("filozof %d odklada widelec %d\n", i, (i+1)%5);
    printf("filozof %d wychodzi\n",i);

    
}

int main()
{
    thread filozofowie[5];
    mutex widelce[5];

    int i=0;

    for(int i=0;i<5;i++)
    {
        filozofowie[i] = thread (jedzenie,i,widelce);
    }
    for(int j=0;j<5;j++)
    {
        filozofowie[j].join();
    }
    cout<<"koniec";
}



