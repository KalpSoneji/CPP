// employee structure - id, name salary, designation, organisation

#include <iostream>
using namespace std;

struct employee {
    int id;
    string name;
    int salary;
    string designation;
    string organisation;
}s[5];

int main(){

    int i;
    
    for(i=0; i<5; i++){
        cout << "Enter id: ";
        cin >> s[i].id;
        cout << "Enter name: ";
        cin >> s[i].name;
        cout << "Enter salary: ";
        cin >> s[i].salary;
        cout << "Enter designation: ";
        cin >> s[i].designation;
        cout << "Enter organisation: ";
        cin >> s[i].organisation;
    }

    cout << "id\tname\tsalary\tdesignation\torganisation\n";
    for(i=0; i<5; i++)
        cout << s[i].id << "\t" << s[i].name << "\t" << s[i].salary << "\t" << s[i].designation << "\t" << s[i].organisation << endl;

}