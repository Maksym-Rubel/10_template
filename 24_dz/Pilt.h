#pragma once
#include <iostream>
#include <string>

using namespace std;
struct IDevice {
    virtual void power() = 0;
    virtual void plus() = 0;
    virtual void minus() = 0;
    virtual void next() = 0;
    virtual void prev() = 0;
    virtual void showInfo() const = 0;
};

class TV : public IDevice
{
    bool isPoweredOn = false;
    int volume = 10; 
    int channel = 1;
    const int maxVolume = 100; 
    const int maxChannel = 25;

public:
    void power() override
    {
        if (isPoweredOn == false)
        {
            isPoweredOn = true;
            cout << "Телевізор включено" << endl;
        }
        else {
            isPoweredOn = false;
            cout << "Телевізор вимкнено" << endl;

        }
    }
    void plus() override {

        if (isPoweredOn == true)
        {
            if (volume < maxVolume)
            {
                volume++;
                cout << "Гучність :: " << volume << endl;
            }
            else
            {
                cout << "Гучність :: " << volume << endl;
            }
        }
        else {
            cout << "Телевізор вимкнений" << endl;

        }
    }
    void minus() override {

        if (isPoweredOn == true)
        {
            if (volume > 0)
            {
                volume--;
                cout << "Гучність :: " << volume << endl;
            }
            else
            {
                cout << "Гучність :: " << volume << endl;
            }
        }
        else {
            cout << "Телевізор вимкнений" << endl;

        }
    }
    void next() override {

        if (isPoweredOn == true)
        {
            if (channel < maxChannel)
            {
                channel++;
                cout << "Канал :: " << channel << endl;
            }
            else
            {
                cout << "Канал :: " << channel << endl;
            }
        }
        else {
            cout << "Телевізор вимкнений" << endl;

        }
    }
    void prev() override {

        if (isPoweredOn == true)
        {
            if (channel > 0)
            {
                channel--;
                cout << "Канал :: " << channel << endl;
            }
            else
            {
                cout << "Канал :: " << channel << endl;
            }
        }
        else {
            cout << "Телевізор вимкнений" << endl;

        }
    }
    void showInfo() const override
    {
        if (isPoweredOn) {
            cout << "Телевізор: Канал " << channel << ", Гучність " << volume << endl;
        }
        else {
            cout << "Телевізор вимкнено." << endl;
        }
    }
    
  
};


class AirConditioner : public IDevice
{
    bool isPoweredOn = false;
    int temp = 20;

    const int minTemp = 16;
    const int maxTemp = 25;
  
    enum Mode { HEATING, COOLING, TURBO, SLEEP };
    Mode currentMode = COOLING;

public:
    void power() override
    {
        if (isPoweredOn == false)
        {
            isPoweredOn = true;
            cout << "Кондиціонер включено" << endl;
        }
        else {
            isPoweredOn = false;
            cout << "Кондиціонер вимкнено" << endl;

        }
    }
    void plus() override {

        if (isPoweredOn == true)
        {
            if (temp < maxTemp)
            {
                temp++;
                cout << "Температура :: " << temp << endl;
            }
            else
            {
                cout << "Температура :: " << temp << endl;
            }
        }
        else {
            cout << "Кондиціонер вимкнений" << endl;

        }
    }
    void minus() override {

        if (isPoweredOn == true)
        {
            if (temp > minTemp)
            {
                temp--;
                cout << "Температура :: " << temp << endl;
            }
            else
            {
                cout << "Температура :: " << temp << endl;
            }
        }
        else {
            cout << "Кондиціонер вимкнений" << endl;

        }
    }
    void next() override {

        if (isPoweredOn) {
            currentMode = static_cast<Mode>((currentMode + 1) % 4); 
            cout << "Режим перемкнуто на: " << getModeName(currentMode) << endl;
        }
        else {
            cout << "Кондиціонер вимкнено" << endl;
        }
    }
    void prev() override {

        if (isPoweredOn) {
            currentMode = static_cast<Mode>((currentMode - 1 + 4) % 4);
            cout << "Режим перемкнуто на: " << getModeName(currentMode) << endl;
        }
        else {
            cout << "Кондиціонер вимкнено" << endl;
        }
    }
    void showInfo() const override
    {
        if (isPoweredOn) {
        cout << "Кондиціонер увімкнено. Температура: " << temp << "°C, Режим: " << getModeName(currentMode) << endl;
                
        }
        else {
            cout << "Кондиціонер вимкнено" << endl;
        }
    }
private:
    string getModeName(Mode mode) const {
        switch (mode) {
        case HEATING:
            return "Нагрівання";
        case COOLING:
            return "Охолодження";
        case TURBO:
            return "Турбо";
        case SLEEP:
            return "Сплячий";
        default:
            return "Невідомий режим";
        }
    }
};

class smartRemote
{
private:
    IDevice* Device;
public:
    smartRemote(IDevice* Device)
        :Device{ Device }
    {
    
    }
    void setDevice(IDevice* Device)
    {
        this->Device = Device;
    
    }
    void testDevice()
    {
        if (Device)
        {
            int d = 10;
            while (d != 0)
            {


                cout << "1.Power" << endl;
                cout << "2.Plus" << endl;
                cout << "3.Minus" << endl;
                cout << "4.Next" << endl;
                cout << "5.Prev" << endl;
                cout << "6.Show info" << endl;
                cout << "7.Exit" << endl;


                cout << "Select choice --> ";
                cin >> d;
                if (d == 1)
                {
                    Device->power();
                    cout << endl;
                }
                else if (d == 2)
                {
                    Device->plus();
                    cout << endl;

                }
                else if (d == 3)
                {
                    Device->minus();
                    cout << endl;

                }
                else if (d == 4)
                {
                    Device->next();
                    cout << endl;

                }
                else if (d == 5)
                {

                    Device->prev();
                    cout << endl;

                }
                else if (d == 6)
                {

                    Device->showInfo();
                    cout << endl;

                }
                else if (d == 7)
                {

                    break;

                }
            }


        }
    }

};
    


