#include <iostream>
#include <string>
using namespace std;

class Fan
{
private:
    string brand;
    bool status;
    int speedLevel;

public:
    Fan(string b = "Unknown", bool s = false, int speed = 0)
    {
        brand = b;
        status = s;
        speedLevel = speed;
    }

    void turnOn()
    {
        status = true;
        if (speedLevel == 0)
        {
            speedLevel = 1;
        }
    }

    void turnOff()
    {
        status = false;
        speedLevel = 0;
    }

    void increaseSpeed()
    {
        if (!status)
        {
            cout << "Fan is off. Please turn it on first.\n";
            return;
        }

        if (speedLevel < 3)
        {
            speedLevel++;
        }
    }

    void showData()
    {
        cout << "Brand: " << brand << endl;
        cout << "Status: " << (status ? "ON" : "OFF") << endl;
        cout << "Speed Level: " << speedLevel << endl;
    }
};

int main()
{
    Fan fan1("Panasonic");

    fan1.turnOn();
    fan1.increaseSpeed();
    fan1.increaseSpeed();
    fan1.showData();

    cout << "\n";

    fan1.turnOff();
    fan1.showData();

    return 0;
}
