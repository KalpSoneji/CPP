#include <iostream>
using namespace std;

int main(){

    int choice, Guj, Pun, Sin, Total=0;
    int KhichdiQty=0, TheplaQty=0, DhoklaQty=0;
    int SarsoQty=0, MakkiQty=0, CholeQty=0;
    int IdliQty=0, DosaQty=0, VadaQty=0;

    start:
    
    cout << "Enter 1 for Gujarati , 2 for Punjabi, 3 for South Indian, 4 to exit: ";

    cin >> choice;

    while(1){
        switch (choice){
            case 1:
                while(1){
                    cout << "Gujarati Menu: \n";
                    cout << "1. Khichdi \n";
                    cout << "2. Thepla \n";
                    cout << "3. Dhokla \n";
                    cout << "4. Selecting another cuisine \n";
                    cout << "5. Exit \n";

                    cout << "Select an item: ";
                    cin >> Guj;

                    switch(Guj){
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> KhichdiQty;
                            Total += KhichdiQty * 50;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> TheplaQty;
                            Total += TheplaQty * 15;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> DhoklaQty;
                            Total += DhoklaQty * 40;
                            break;
                        case 4:
                            goto start;
                        case 5:
                            cout << "Total: " << Total << endl;
                            exit(0);
                        default:
                            cout << "Invalid choice\n";
                            break;
                        }
                }
        
        case 2:
            while(1){
                cout << "Punjabi Menu: \n";
                cout << "1. Sarson Ka Saag \n";
                cout << "2. Makki Di Roti \n";
                cout << "3. Chole Bhature \n";
                cout << "4. Selecting another cuisine \n";
                cout << "5. Exit \n";

                cout << "Select an item: ";
                cin >> Pun;

                switch(Pun){
                    case 1:
                        cout << "Enter quantity: ";
                        cin >> SarsoQty;
                        Total += SarsoQty * 70;
                        break;
                    case 2:
                        cout << "Enter quantity: ";
                        cin >> MakkiQty;
                        Total += MakkiQty * 20;
                        break;
                    case 3:
                        cout << "Enter quantity: ";
                        cin >> CholeQty;
                        Total += CholeQty * 50;
                        break;
                    case 4:
                        goto start;
                    case 5:
                        cout << "Total: " << Total << endl; 
                        exit(0);
                    default:
                        cout << "Invalid choice\n";
                        break;
                }
            }

        case 3:
            while(1){
                cout << "South Indian Menu: \n";
                cout << "1. Idli \n";
                cout << "2. Dosa \n";
                cout << "3. Vada \n";
                cout << "4. Selecting another cuisine \n";
                cout << "5. Exit \n";

                cout << "Select an item: ";
                cin >> Sin;

                switch(Sin){
                    case 1:
                        cout << "Enter quantity: ";
                        cin >> IdliQty;
                        Total += IdliQty * 30;
                        break;
                    case 2:
                        cout << "Enter quantity: ";
                        cin >> DosaQty;
                        Total += DosaQty * 80;
                        break;
                    case 3:
                        cout << "Enter quantity: ";
                        cin >> VadaQty;
                        Total += VadaQty * 40;
                        break;
                    case 4:
                        goto start;
                    case 5:
                        cout << "Total: " << Total << endl;    
                        exit(0);
                    default:
                        cout << "Invalid choice\n";
                        break;
                }
            }

        case 4:
            exit(0);

        default:
            cout << "Select a valid option.\n";
            goto start;
        }

    }

}

//Can add itemized bill in total