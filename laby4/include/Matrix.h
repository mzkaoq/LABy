#include <iostream>
#include <fstream>

using namespace std;

#ifndef MATRIX
#define MATRIX

class Matrix
{
    public:
    int kol, rze;
    double **tab;
    //konstruktory
    Matrix(int x,int y);
    Matrix(int x);
    Matrix(string fullpath);
    //metody
    void Print();
    void Set(int n, int m, double val);
    double  Get(int n, int m);
    Matrix Add(Matrix m2);
    Matrix Sub(Matrix m2);
    Matrix Multiply(Matrix m2);
    int cols();
    int rows();
    void store(string filename, string path);
};

#endif