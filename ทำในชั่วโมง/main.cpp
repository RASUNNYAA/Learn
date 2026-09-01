
#include "father.h"

int main()
{ 
    Father father; //object ของ class Father
    father.setFamilyName("Smith"); //กำหนดค่านามสกุล
    father.setHairColor("Brown"); //กำหนดค่าสีผม

    father.showFamilyName(); //แสดงค่านามสกุล
    father.showHairColor(); //แสดงค่าสีผม

    return 0;
}
   