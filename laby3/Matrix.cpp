#include "Matrix.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

Matrix::Matrix(int x,int y) : rze(x), kol(y)
{
    if(x>0 && y>0)
    {
        tab = new double*[rze];
        for (int i = 0; i < rze; ++i)
        {
            tab[i] = new double[kol];
        }
        for (int i = 0; i < rze; ++i) 
        {
            for (int j = 0; j < kol; ++j)    
            {
                tab[i][j] = 0;
            }
        }
    }
    else
    {
        cout << "bledne parametry" <<endl;
    }
}

Matrix::Matrix(int x) : rze(x), kol(x)
{
    if(x>0)
    {
        tab = new double*[rze];
        for (int i = 0; i < rze; ++i)
        {
            tab[i] = new double[kol];
        }
        for (int i = 0; i < rze; ++i) 
        {
            for (int j = 0; j < kol; ++j)    
            {
                tab[i][j] = 0;
            }
        }
    }
    else
    {
        cout << "bledne parametry" <<endl;
    }
}

void Matrix::Print()
{
    cout << endl;
    for (int i=0; i<rze; i++)
    {
    for (int j=0; j<kol; j++)
    {
    cout << tab[i][j] << " ";
    }
    cout << endl;
    }
}
