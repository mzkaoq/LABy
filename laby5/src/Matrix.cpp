#include <Matrix.h>
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
       if(x<=0&&y>0) throw invalid_argument("zla liczba rzedow <=0");
       else if(x>0&&y<=0) throw invalid_argument("zla liczba kolumn <=0");
       else throw invalid_argument("za mala liczba liczba i kolumn rzedow <=0");
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
        throw invalid_argument(" zla wielkosc macierzy <=0");
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
    if(n<0||m<0||n>=this->rze||m>=this->kol)
    {
        if(n<0||m<0) throw invalid_argument(" kolumna lub rzad [lub oba] <=0");
        else if(n>=this->rze||m>=this->kol) throw invalid_argument("kolumna lub rzad wieksza [lub oba] od rozmiaru macierzy");
        else if(n<0||m<0 && n>=this->rze||m>=this->kol) throw invalid_argument("nieporawna liczba kolumn i rzedow");
    }
    else
    {
      tab[n][m]=val;
    }
}
double Matrix::Get(int n, int m)
{
    if(n<0||m<0||n>=this->rze||m>=this->kol)
    {
        if(n<0||m<0) throw invalid_argument(" kolumna lub rzad [lub oba] <=0");
        else if(n>=this->rze||m>=this->kol) throw invalid_argument("kolumna lub rzad wieksza [lub oba] od rozmiaru macierzy");
        else if(n<0||m<0 && n>=this->rze||m>=this->kol) throw invalid_argument("nieporawna liczba kolumn i rzedow");
    }
    cout<<tab[n][m];
    cout<< endl;
    return tab[n][m];
}
Matrix Matrix::Add(Matrix m2)
{
    if(this->rze!=m2.rze || this->kol!=m2.kol)
    {
        throw invalid_argument ("liczba rzedow lub kolumn jest rozna");
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
        throw invalid_argument ("liczba rzedow lub kolumn jest rozna");
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
        throw invalid_argument ("liczba rzedow macierzy mnozonej nie odpowiada liczbie kolumn macierzy mnozacej");
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
        throw invalid_argument ("blad otwarcia pliku");
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
       throw invalid_argument ("blad otwarcia pliku");
    }
}