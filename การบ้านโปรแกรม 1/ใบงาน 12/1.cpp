#include <iostream>
#include <string>
using namespace std;

class Fan
{
private:
    string brand;
    bool operatingStatus;
    int speedLevel;

public:
    Fan(string b = "Unknown", bool status = false, int speed = 0)
    {
        brand = b;
        operatingStatus = status;
        speedLevel = speed;
    }

    void setBrand(string b)
    {
        brand = b;
    }

    void setSpeed(int speed)
    {
        if (!operatingStatus)
        {
            return;
        }

        if (speed < 0)
            speed = 0;
        if (speed > 3)
            speed = 3;
        speedLevel = speed;
    }

    string getBrand() const
    {
        return brand;
    }

    bool getOperatingStatus() const
    {
        return operatingStatus;
    }

    int getSpeedLevel() const
    {
        return speedLevel;
    }

    void displayStatus() const
    {
        cout << "Brand: " << brand << endl;
        cout << "Operating Status: " << (operatingStatus ? "ON" : "OFF") << endl;
        cout << "Speed Level: " << speedLevel << endl;
    }
};

int main()
{
    Fan myFan("Panasonic");

    myFan.setSpeed(3);
    myFan.displayStatus();

    return 0;
}
