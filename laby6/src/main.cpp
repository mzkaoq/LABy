  
#include <Hrms.hpp>
#include <employee.hpp>
#include <iostream>
#include <string>

using namespace std;

void test()
{
    // a1.print();  
}

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
    
    Hrms db;

    db.add(a1, "wyd1", 2000.0);
    db.add(a2, "wyd1", 2200.0);
    db.add(a3, "wyd2", 1900.0);
    db.add(a4, "wyd2", 2560.0);
    db.add(a5, "wyd3", 3400.0);
    db.add(a6, "wyd3", 5000.0);
    db.add(a7, "wyd1", 1400.0);
    db.add(a8, "wyd1", 3890.0);
    db.add(a9, "wyd2", 2630.0);
    db.add(a10, "wyd1", 6300.0);

    db.printDepartment("wyd3");
    cout << endl << endl;
    db.printSalaries();
    cout << endl << endl;
    db.printSalariesSorted();
    cout << endl << endl;
    db.changeSalary("ID8", 4000.0);
    db.printSalaries();


    return 0;
}
