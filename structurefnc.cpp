#include <iostream>
using namespace std;

struct employee {
    int id;
    string name;
    int salary;
    string designation;
    string organisation;
}s[5];

void scan(){
    for(int i=0;i<5;i++){
        cout<<"Enter id of employee " << i+1 << ": ";
        cin>>s[i].id;
        cout<<"Enter name of employee " << i+1 << ": ";
        cin>>s[i].name;
        cout<<"Enter salary of employee " << i+1 << ": ";
        cin>>s[i].salary;
        cout<<"Enter designation of employee " << i+1 << ": ";
        cin>>s[i].designation;
        cout<<"Enter organisation of employee " << i+ 1 << ": ";
        cin>>s[i].organisation;
    }

}

void display(){
    cout << "id\tname\tsalary\tdesignation\torganisation\n";
    for(int i=0; i<5; i++)
        cout << s[i].id << "\t" << s[i].name << "\t" << s[i].salary << "\t" << s[i].designation << "\t\t" << s[i].organisation << endl;
}

int main(){

    scan();
    display();

}
