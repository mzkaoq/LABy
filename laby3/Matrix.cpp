#include "Matrix.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

Matrix::Macierz(int x,int y)
{
    if(x>0 && y>0)
    {
        tab[x][y] = 0;
    }
    else
    {
        cout << "bledne parametry" <<endl;
    }
}

Matrix::Macierz(int x)
{
    if(x>0)
    {
        tab[x][x] = 0;
    }
    else
    {
        cout << "bledne parametry" <<endl;
    }
}

void Matrix::Print()
{
    cout << endl;
    for (int i=0; i<x; i++)
    {
    for (int j=0; j<y; j++)
    {
    cout << tab[i][j] << " ";
    }
    cout << endl;
    }
}
