#include <stdio.h>
#include <string>

class Father
{
    public:
           std::string familyName; //นามสกุล
           std::string hairColor; //สีผม
    public:
           void playSports();
           void setFamilyName(const char* FamilyName);
           void showFamilyName();
           void setHairColor(const char* HairColor);
           void showHairColor();
};