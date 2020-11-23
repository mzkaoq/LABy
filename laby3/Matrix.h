#include <iostream>
#include <fstream>

using namespace std;

class Matrix
{
    public:
    int kol, rze;
    double **tab;
    //konstruktory
    Matrix(int x,int y);
    Matrix(int x);
    //metody
    void Print();
};