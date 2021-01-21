#include <Matrix.h>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;
Matrix::Matrix()
{

}

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
    for (int i=0; i<rze; i++)
    {
        for (int j=0; j<kol; j++)
        {
          cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void Matrix::Set(int n, int m, double val)
{
    tab[n][m]=val;
}
double Matrix::Get(int n, int m)
{
    cout<<tab[n][m];
    cout<< endl;
    return tab[n][m];
}
double Matrix::get(int n, int m)
{
    return tab[n][m];
}
Matrix Matrix::Add(Matrix m2)
{
    if(this->rze!=m2.rze || this->kol!=m2.kol)
    {
        cout << "nie mozna dodac macierzy"<<endl;
        exit(1);
    }
    Matrix m3(rze,kol);
     for (int i=0; i<m3.rze; i++)
    {            
        for (int j=0; j<m3.kol; j++)
        {   
            m3.tab[i][j]=this->tab[i][j]+m2.tab[i][j];
        }
    }
    return m3;
}
Matrix Matrix::Sub(Matrix m2)
{
    if(this->rze!=m2.rze || this->kol!=m2.kol)
    {
        cout << "nie mozna odjac macierzy"<<endl;
        exit(1);
    }
    Matrix m3(rze,kol);
     for (int i=0; i<m3.rze; i++)
    {            
        for (int j=0; j<m3.kol; j++)
        {   
            m3.tab[i][j]=this->tab[i][j]-m2.tab[i][j];
        }
    }
    return m3;
}
Matrix Matrix::Multiply(Matrix m2)
{
    int k=0;
    if(this->rze!=m2.kol)
    {
        cout << "nie mozna przemnozyc macierzy"<<endl;
        exit(1);
    }
    Matrix m3(this->rze,m2.kol);
    double suma=0;
     for (int i=0; i<m2.kol; i++)
    {            
        for (int j=0; j<m3.rze; j++)
        {   
            for(k=0; k<m3.kol;k++)
            {
                suma+=this->tab[j][k]*m2.tab[k][i];
            }
            m3.tab[j][i]=suma;
            suma=0;
        }
    }
    return m3;
}

int Matrix::cols()
{
    return kol;
}

int Matrix::rows()
{
    return rze;
}

void Matrix::store(string filename, string path)
{
    string fullpath = path + '/' + filename;
    ofstream File;
    File.open(fullpath);
    if (File.is_open())
    {
        File << kol << " " << rze << endl;
        for (int i = 0; i < kol; i++)
        {
            for (int j = 0; j < rze; j++)
            File << tab[i][j] << " ";
        
        File << endl;
        }
        File.close();
    }
    else 
    {
        cout<<"blad otwarcia"<<endl;
        exit(3);
    }
}

Matrix::Matrix(string fullpath)
{
    ifstream File;
    File.open(fullpath);
     if (File.is_open())
    {
        File>>kol;
        File>>rze;

        if(kol>0 && rze>0)
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
                    File>>tab[i][j];
                }
            }
        }
        File.close();
    }
    else 
    {
        cout<<"blad otwarcia"<<endl;
        exit(3);
    }
}
Matrix Matrix :: operator+ (Matrix m2)
{
    if(rze!=m2.rze || kol!=m2.kol)
    {
        cout << "nie mozna dodac macierzy"<<endl;
        exit(1);
    }
    Matrix wynik(m2.rze,m2.kol);
    for (int i=0; i<m2.rze; i++)
    {            
        for (int j=0; j<m2.kol; j++)
        {   
            wynik.tab[i][j]=tab[i][j]+m2.tab[i][j];
        }
    }
    return wynik;
}
Matrix Matrix :: operator- (Matrix m2)
{
    if(rze!=m2.rze || kol!=m2.kol)
    {
        cout << "nie mozna dodac macierzy"<<endl;
        exit(1);
    }
    Matrix wynik(m2.rze,m2.kol);
    for (int i=0; i<m2.rze; i++)
    {            
        for (int j=0; j<m2.kol; j++)
        {   
            wynik.tab[i][j]=tab[i][j]-m2.tab[i][j];
        }
    }
    return wynik;
}
Matrix Matrix::operator* (Matrix m2)
{
    int k=0;
    if(rze!=m2.kol)
    {
        cout << "nie mozna przemnozyc macierzy"<<endl;
        exit(1);
    }
    Matrix m3(m2.rze,m2.kol);
    double suma=0;
     for (int i=0; i<m2.kol; i++)
    {            
        for (int j=0; j<m3.rze; j++)
        {   
            for(k=0; k<m3.kol;k++)
            {
                suma+=tab[j][k]*m2.tab[k][i];
            }
            m3.tab[j][i]=suma;
            suma=0;
        }
    }
    return m3;
}
ostream &operator<< (ostream &out, Matrix m1)
{
    out << m1.kol << " " << m1.rze << endl;
    for (int i = 0; i < m1.kol; i++) 
    {
        for (int j = 0; j < m1.rze; j++)
        {
            out << m1.get(i, j) << " ";
        }
        out << endl;
    }
    return out;
}
bool Matrix::operator== (Matrix m2)
{
   if(rze!=m2.rze || kol!=m2.kol)
    {
        cout << "nie mozna porownac"<<endl;
        exit(1);
    }
    for (int i=0; i<m2.rze; i++)
    {            
        for (int j=0; j<m2.kol; j++)
        {   
            if(tab[i][j]!=m2.tab[i][j]) return 0;
        }
    }
    return 1;
}
double *Matrix::operator[](int n)
{ 
   return tab[n];
}
Matrix Matrix :: operator++ ()
{
    Matrix wynik(rze,kol);
    for (int i=0; i<rze; i++)
    {            
        for (int j=0; j<kol; j++)
        {   
            wynik.tab[i][j]=tab[i][j]+1;
        }
    }
    return wynik;
}
Matrix Matrix :: operator % (double n)
{
    Matrix wynik(rze,kol);
    for (int i=0; i<rze; i++)
    {            
        for (int j=0; j<kol; j++)
        {   
            wynik.tab[i][j]=tab[i][j];
            while(wynik.tab[i][j]>=n)
            {
                wynik.tab[i][j]-=n;
            }
        }
    }
    return wynik;
}
bool Matrix :: operator < (double n)
{
    for (int i=0; i<rze; i++)
    {            
        for (int j=0; j<kol; j++)
        {   
            if(tab[i][j]>=n) return false;
        }
    }
    return 1;
}