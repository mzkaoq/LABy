#include <iostream>

using namespace std;

float BMI(float masa,float wzrost)
{
    float bmi;
    bmi=masa/(wzrost*wzrost);
    return bmi;
}
int main()
{
    float masa,wzrost,bmi;
    cout << "podaj mase ciala [kg]"<<endl;
    cin>>masa;
    cout<<"podaj wzrost [m]"<<endl;
    cin>>wzrost;
    bmi=BMI(masa,wzrost);
    if(bmi<16) cout<<"wyglodzenie "<<bmi<<endl;
    else if(bmi<16.99) cout<<"wychudzenie "<<bmi<<endl;
    else if(bmi<18.49) cout<<"niedowaga "<<bmi<<endl;
    else if(bmi<24.99) cout<<"wartosc prawidlowa "<<bmi<<endl;
    else if(bmi<29.99) cout<<"nadwaga "<<bmi<<endl;
    else if(bmi<34.99) cout<<"1 stopien otylosci "<<bmi<<endl;
    else if(bmi<39.99) cout<<"2 stopien otylosci "<<bmi<<endl;
    else if(bmi>40) cout<<"otylosc skrajna "<<bmi<<endl;

    return 0;   
}