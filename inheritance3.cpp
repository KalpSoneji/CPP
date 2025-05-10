#include <iostream>
#include <iomanip>
using namespace std;

class Student{

    protected:
        int rno;
        string name;
    
    public:
        
        void getStudentDetails(){
                cout << "Enter roll no: ";
                cin >> rno;
                cout << "\tName: ";
                cin.ignore();
                getline(cin, name);
        }

        void displayStudentDetails(){
            cout << "Roll No: " << rno;
            cout << "\nName: " << name;
        }

};

class Result: public Student {

    private:
        int marks[3];
        int total;
        float avg;

    public:

        void getMarks(){
            cout << "\tEnter marks for 3 subjects: ";
            for (int i=0; i<3; i++)
                cin >> marks[i];
        }

        void calculateResult(){
            total = 0;
            for (int i=0; i<3; i++)
                total += marks[i];
            
            avg = total / 3.0f;
        }

        void displayResult(){

            displayStudentDetails();
            
            cout << "\nMarks: ";
            for(int i=0; i<3; i++)
                cout << marks[i] << "\t";

            cout << endl;

            cout << "Total: " << total;
            cout << "\nAverage: " << fixed << setprecision(2) << avg << endl;
        }

};

int main(){

    int n;
    cout << "Enter no of students: ";
    cin >> n;

    Result students[100];

    for(int i=0; i<n; i++){

        cout << "Enter details for student " << i + 1 << ": \n\t";
        students[i].getStudentDetails();
        students[i].getMarks();
        students[i].calculateResult();

    }

    cout << "\nResult: \n";
    for(int i=0; i<n; i++){
        students[i].displayResult();
        cout << endl;
    }

}