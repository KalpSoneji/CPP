#include <iostream>
using namespace std;

struct employee {
    int id;
    string name;
    int salary;
    string designation;
    string organisation;
    struct address {    
        string city;
        string state;
        string country;
        int pincode;
    }address;
}s[3];

void scan(){
    for(int i=0;i<2;i++){
        cout<<"Enter id of employee " << i+1 << ": ";
        cin>>s[i].id;
        cout<<"Enter name of employee " << i+1 << ": ";
        cin>>s[i].name;
        cout<<"Enter salary of employee " << i+1 << ": ";
        cin>>s[i].salary;
        cout<<"Enter designation of employee " << i+1 << ": ";
        cin>>s[i].designation;
        cout<<"Enter organisation of employee " << i+1 << ": ";
        cin>>s[i].organisation;
        cout<<"Enter city of employee " << i+1 << ": ";
        cin>>s[i].address.city;
        cout<<"Enter state of employee " << i+1 << ": ";
        cin>>s[i].address.state;
        cout<<"Enter country of employee " << i+1 << ": ";
        cin>>s[i].address.country;
        cout<<"Enter pincode of employee " << i+1 << ": ";
        cin>>s[i].address.pincode;
    }
}

void display(){
    cout << "id\tname\tsalary\tdesignation\torganisation\tcity\tstate\tcountry\tpincode\n";
    for(int i=0; i<2; i++)
        cout << s[i].id << "\t" << s[i].name << "\t" << s[i].salary << "\t" << s[i].designation 
        << "\t" << s[i].organisation << "\t" << s[i].address.city << "\t" << s[i].address.state 
        << "\t" << s[i].address.country << "\t" << s[i].address.pincode << endl;
}

int main(){

    scan();
    display();

}