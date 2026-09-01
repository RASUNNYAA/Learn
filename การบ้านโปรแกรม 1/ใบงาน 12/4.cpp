#include <iostream>
#include <string>
using namespace std;

class Fan
{
private:
    string brand;   // ยี่ห้อ
    bool status;    // สถานะเปิด/ปิด
    int speedLevel; // ระดับความเร็ว

public:
    Fan(string b = "Unknown", bool s = false, int speed = 0)
    {
        brand = b;
        status = s;
        speedLevel = speed;
    }

    void turnOn() // กระบวนการเปิดพัดลม
    {
        status = true;
        if (speedLevel == 0)
        {
            speedLevel = 1;
        }
    }

    void turnOff() // กระบวนการปิดพัดลม
    {
        status = false;
        speedLevel = 0;
    }

    void increaseSpeed() // กระบวนการเพิ่มความเร็วพัดลม
    {
        if (!status)
        {
            cout << "Fan is off. Please turn it on first.\n";
            return;
        }

        if (speedLevel < 3)
        {
            speedLevel++;
            cout << "Speed increased to level " << speedLevel << "\n";
        }
        else
        {
            cout << "Fan is already at maximum speed (level 3).\n";
        }
    }

    void showData() // กระบวนการแสดงข้อมูลพัดลม
    {
        cout << "Brand: " << brand << endl;
        cout << "Status: " << (status ? "ON" : "OFF") << endl;
        cout << "Speed Level: " << speedLevel << endl;
    }
};

int main()
{
    Fan fan1("Panasonic"); // Object ของพัดลมยี่ห้อ Panasonic

    fan1.turnOn();
    fan1.showData();
    fan1.increaseSpeed();
    fan1.increaseSpeed();
    

    cout << "\n";

    fan1.turnOff();
    fan1.showData();

    return 0;
}
