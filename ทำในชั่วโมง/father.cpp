#include "father.h"

// ข้อมูลส่งกลับ ชือคลาส :: ชื่อฟังก์ชั่น(){...}
void Father::setFamilyName(const char* FamilyName)
           {
               this->familyName = FamilyName; //this คือการบอกว่าตัวไหนเป็น attribute ของ class 
           }
void Father::setHairColor(const char* HairColor)
           {
               this->hairColor = HairColor; //this คือการบอกว่าตัวไหนเป็น attribute ของ class 
           }
void Father::showFamilyName()
           {
               printf("Family Name: %s\n", familyName.c_str());
           }
void Father::showHairColor()
           {
               printf("Hair Color: %s\n", hairColor.c_str());
           }