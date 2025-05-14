#include <iostream>
using namespace std;

class voiceControl {
    public:
    void activateByVoice(){
        cout << "Turn it on\n";
    }
};

class MobileAppControl {

    public:
    void activateByApp(){
        cout << "Controlling through mobile app\n";
    }

};

class SmartLight : public voiceControl, public MobileAppControl {

    bool lightStatus;
    int brightnessLevel;

    public:
    void turnOnLight(){
        cout << "Turns on the light\n";
        lightStatus = true;
        cout << "Light Status: " << lightStatus << endl;
    }

    void turnOffLight(){
        cout << "Turns off the light\n";
        lightStatus = false;
        cout << "Light Status: " << lightStatus << endl;
    }

    void displayStatus(){
        cout << "Tells us the current status\n";
        cout << "Light Status: " << lightStatus << endl;
    }

};

int main(){

    voiceControl vc;
    MobileAppControl mac;
    SmartLight sl;

    sl.activateByVoice();
    sl.activateByApp();
    sl.turnOnLight();
    sl.turnOffLight();
    sl.displayStatus();

}