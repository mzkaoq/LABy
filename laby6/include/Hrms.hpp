#ifndef HRMS_HPP
#define HRMS_HPP
#include<employee.hpp>
#include<list>
#include<map>
#include<algorithm>
#include<vector>
#include<sstream>
#include<iostream>


using namespace std;




class Hrms{
    public:
    
        list <string> employeesList;
        map <string, employee> Employees;
        map <string, string> Departments;
        map <string, double> Salaries;
        map <string, double> SalariesSorted;

        static bool sortByVal(const pair<string, double> &a, const pair<string, double> &b);
        
        Hrms();
      
        void add(employee& empl, string departmentID, double salary);
        void printDepartment(string departmentID);
        void changeSalary(string employeeID, double salary);
        void printSalaries();
        void printSalariesSorted();

};


#endif  