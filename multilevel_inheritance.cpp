#include <iostream>
using namespace std;

class Vehicle {

    int vehicleNumber;
    string ownerName;

    public:
    void displayVehicleInfo() {
        cout << "Vehicle Number: " << vehicleNumber;
        cout << "\nOwner Name: " << ownerName;
    }

    void askForInput() {
        cout << "\nEnter Vehicle Number: ";
        cin >> vehicleNumber;
        cout << "Enter Owner Name: ";
        cin.ignore();
        getline(cin, ownerName);
    }
};

class Car : public Vehicle {

    string carModel;
    string fuelType;

    public:
    void displayCarInfo() {
        cout << "Car Model: " << carModel;
        cout << "\nFuel Type: " << fuelType;
        }

    void askForInput() {
        Vehicle::askForInput();
        cout << "Enter Car Model: ";
        cin.ignore();
        getline(cin, carModel);
        cout << "Enter Fuel Type: ";
        getline(cin, fuelType);
    }
};

class ElectricCar : public Car {

    int batteryCapacity;
    int rangePerCharge;

    public:
    void displayElectricCarInfo() {
        cout << "Battery Capacity: " << batteryCapacity;
        cout << "\nRange per Charge: " << rangePerCharge;
    }

    void askForInput() {
        Car::askForInput();
        cout << "Enter Battery Capacity: ";
        cin >> batteryCapacity;
        cout << "Enter Range per Charge: ";
        cin >> rangePerCharge;
    }
};

int main() {
    
    Vehicle vehicle;
    vehicle.askForInput();
    vehicle.displayVehicleInfo();

    Car car;
    car.askForInput();
    car.displayVehicleInfo();
    car.displayCarInfo();
    
    ElectricCar electricCar;
    electricCar.askForInput();
    electricCar.displayVehicleInfo();
    electricCar.displayCarInfo();
    electricCar.displayElectricCarInfo();

}