#include <iostream>
#include <Matrix.h>

using namespace std;


void test()
{
    /*Matrix m1(5,6);
    cout << "m1 "<<endl;
    m1.Print();
    Matrix m2(4,4);
    m2.Set(1,1,5);
    m2.Set(2,1,3);
    cout << "m2 "<<endl;
    m2.Print();
    m2.Get(2,1);
    Matrix m3(4,4);
    m3.Set(2,2,8);
    m3.Set(1,2,2);
    cout << "m3 "<<endl;
    m3.Print();
    Matrix m4 = m3.Add(m2);
    cout << "m4=m3+m2 "<<endl;
    m4.Print();
    Matrix m5= m4.Sub(m3);
    cout << "m5=m4-m3 "<<endl;
    m5.Print();
    Matrix m6=m3.Multiply(m2);
    cout << "m6=m3*m2 "<<endl;
    m6.Print();
    cout<<"liczba kolumn "<<m6.cols()<<endl;
    cout<<"liczba wierszy "<<m6.rows()<<endl;
    m6.store("m6.txt","C:/Users/THINK/Desktop/C++/LABy/laby4");
    Matrix m7("C:/Users/THINK/Desktop/C++/LABy/laby4/m7.txt");
    cout<<endl;
    m7.Print();*/

    Matrix m10(4,4);
    cout << "m10 "<<endl;
    m10.Set(1,1,5);
    m10.Set(2,1,3);
    m10.Print();
    Matrix m11(4,4);
    cout << "m11 "<<endl;
    m11.Set(1,2,3);
    m11.Set(2,2,5);
    m11.Print();
    Matrix m12;
    m12=m10+m11;
    cout << "m10+m11=m12 "<<endl;
    m12.Print();
    Matrix m13;
    m13=m10-m11;
    cout << "m10-m11=m13 "<<endl;
    m13.Print();
    Matrix m14;
    m14=m10*m11;
    cout << "m10*m11=m13 "<<endl;
    m14.Print();
    cout << "przekazanie do pliku"<<endl;
    ofstream file;
    file.open("C:/Users/THINK/Desktop/C++/LABy/laby_przeciazanie/m14.txt", ios_base::in);
    file << m14;
    file.close();
    cout << "porownanie m10 == m11" <<endl;
    cout << (m10 == m11) <<endl;
    cout<< "lista" <<endl;
    double* tab1 = m10[1];
    for(int i=0;i<4;i++)
    {
        cout<<tab1[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    test();
    return 0;
}