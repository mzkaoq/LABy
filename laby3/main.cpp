#include <iostream>
#include "Matrix.cpp"

using namespace std;


void test()
{
    Matrix m1(5,6);
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
    m6.store("m6.txt","C:/Users/THINK/Desktop/C++/LABy/laby3");
    Matrix m7("C:/Users/THINK/Desktop/C++/LABy/laby3/m7.txt");
    cout<<endl;
    m7.Print();

}
int main()
{
    test();
    return 0;
}