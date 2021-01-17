#include <HRMS.hpp>

using namespace std;

void HRMS::add(employee pracownik,string departmentId, double salary){
    string employee_ID = pracownik.id;

    this->pracownicy_all[employee_ID] = pracownik;
    this->pracownicy_department[employee_ID] = departmentId;
    this->pracownicy_wyplaty[employee_ID] = salary;
}

void HRMS::printSalaries(){

    for (map<string, double>::iterator it = this->pracownicy_wyplaty.begin(); it != this-> pracownicy_wyplaty.end(); it++)
    {
        cout << "[wyplata] " << it->second << " [pozycja] " << this->pracownicy_all[it->first].position <<
        " [imie i nazwisko] " << this->pracownicy_all[it->first].name << " " << this->pracownicy_all[it->first].surname <<
        " [ID] " << this->pracownicy_all[it->first].id << " [DepartmentID] " << this->pracownicy_all[it->first].departmentId << endl;

    }
}
void HRMS::printDepartment(string departmentId){

    cout << "wszyscy pracownicy z " << departmentId << " " << endl;
    int licz=0;
    for (map<string, string>::iterator it = this->pracownicy_department.begin(); it != this-> pracownicy_department.end(); ++it)
    {
        if ( it->second == departmentId )
        {
            cout << this->pracownicy_all[it->first].name << " " << this->pracownicy_all[it->first].surname << endl;
            licz++;
        }
    }
    if (licz > 0)
    cout << "znaleziono" << licz << " pozycji" << endl;
    else
    {
        cout << "nie znaleziono nikogo " << departmentId << endl;
    }
    
}

void HRMS::changeSalary(string employeeId, double salary){
    
    this->pracownicy_wyplaty[employeeId] = salary;
}
void HRMS::printSalariesSorted(){

    vector<pair<string, double>> vec;
    ;

    for (map<string, double>::iterator it2 = this->pracownicy_wyplaty.begin(); it2 != this->pracownicy_wyplaty.end(); it2++)
    {
        vec.push_back(make_pair(it2->first, it2->second));
    }

    sort(vec.begin(),vec.end(), sortByVal);

    vector<pair<string, double>>::iterator it;

    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << "wyplata: "<< it->second << " pozycja: " << this->pracownicy_all[it->first].position <<
        " " << this->pracownicy_all[it->first].name << " " << this->pracownicy_all[it->first].surname << " ID: " <<
        this->pracownicy_all[it->first].id << " DepartmentId: " << this->pracownicy_all[it->first].departmentId << endl;
    }

}
bool HRMS::sortByVal(const pair<string, double> &a, const pair<string, double> &b)
{
    return (a.second > b.second);
}