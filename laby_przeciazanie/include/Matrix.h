#include <iostream>
#include <fstream>
#include <list>

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
    Matrix ();
    Matrix(string fullpath);
    //metody
    void Print();
    void Set(int n, int m, double val);
    double  Get(int n, int m);
    double  get(int n, int m);
    Matrix Add(Matrix m2);
    Matrix Sub(Matrix m2);
    Matrix Multiply(Matrix m2);
    int cols();
    int rows();
    void store(string filename, string path);

    Matrix operator+ (Matrix m2);
    Matrix operator- (Matrix m2);
    Matrix operator* (Matrix m2);
    friend ostream& operator << (ostream& out, Matrix m1);
    bool operator == (Matrix m2);
    double* operator [] (int n);
    Matrix operator ++ ();
    Matrix operator % (double n);
    bool operator < (double n);
};

#endif