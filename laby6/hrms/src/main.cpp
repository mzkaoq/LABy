
#include <iostream>
#include <string>
#include <Employee.hpp>
#include <HRMS.hpp>


using namespace std;

int main()
{
 
    employee a1("ID1", "Adam", "Nowak", "wyd1", "Kierowca1");
    employee a2("ID2", "Jakub", "Kowalski", "wyd1", "mechanik");
    employee a3("ID3", "Patryk", "Polak", "wyd2", "spedytor");
    employee a4("ID4", "Oskar", "Jakubiak", "wyd2", "informatyk");
    employee a5("ID5", "Mateusz", "Nowakowski", "wyd3", "sprzatacz");
    employee a6("ID6", "Filip", "Kowalczyk", "wyd3", "sprzatacz");
    employee a7("ID7", "Maciej", "Kot", "wyd1", "kierowca2");
    employee a8("ID8", "Igor", "Malinowski", "wyd1", "kierowca1");
    employee a9("ID9", "Adrian", "Soltysik", "wyd2", "spedytor");
    employee a10("ID10", "Mateusz", "Trebacz", "wyd1", "kierowca2");

    //a1.przedstawsie();

    HRMS wyk;

    wyk.add(a1, "wyd1", 2100);
    wyk.add(a2, "wyd1", 1500);
    wyk.add(a3, "wyd2", 2500);
    wyk.add(a4, "wyd2", 3200);
    wyk.add(a5, "wyd3", 1799);
    wyk.add(a6, "wyd3", 5404);
    wyk.add(a7, "wyd1", 3300);
    wyk.add(a8, "wyd1", 3799);
    wyk.add(a9, "wyd2", 2650);
    wyk.add(a10, "wyd1", 4000); 

    wyk.printSalaries();

    wyk.changeSalary("ID10", 5000);
    cout << endl;
    wyk.printSalaries();
    cout << endl;
    wyk.printSalariesSorted();
    cout << endl;
    wyk.printDepartment("wyd1");
   return 0;
}