#include <stdio.h>
#include <string.h>

typedef struct
{
    char id_number[20];
    char title[16];
    char first_name[64];
    char last_name[64];
    char birthdate[16];
    char gender[16];
    char address[256];
    char nationality[32];
    char religion[32];
    char card_issue_date[16];
    char card_expiry_date[16];
} IDCard;

typedef struct
{
    char code[16];
    char name[100];
    int credits;
    char instructor[100];
    char time[50];
    char location[100];
} Course;

typedef struct
{
    char id_number[20];
    char title[100];
    char first_name[100];
    char last_name[100];
    char Year_of_study[20];
    char Semester_Year[50];
    char group[100];
    char course[100];
    char branch[100];
    char type[256];
} StudentCard;

typedef struct
{
    IDCard personal_info;         /* ข้อมูลบัตรประชาชน */
    StudentCard student_info;     /* ข้อมูลบัตรนักศึกษา */
    Course registered_courses[5]; /* วิชาที่ลงทะเบียน ไม่เกิน 5 วิชา */
    int total_courses;            /* จำนวนวิชาทั้งหมด */
    char registration_date[16];   /* วันที่ลงทะเบียน */
} Registration;

int main(void)
{
    Registration reg;
    strncpy(reg.personal_info.id_number, "1248100007833", sizeof(reg.personal_info.id_number) - 1);
    reg.personal_info.id_number[sizeof(reg.personal_info.id_number) - 1] = '\0';
    strncpy(reg.personal_info.title, "นาย", sizeof(reg.personal_info.title) - 1);
    reg.personal_info.title[sizeof(reg.personal_info.title) - 1] = '\0';
    strncpy(reg.personal_info.first_name, "สุริยา", sizeof(reg.personal_info.first_name) - 1);
    reg.personal_info.first_name[sizeof(reg.personal_info.first_name) - 1] = '\0';
    strncpy(reg.personal_info.last_name, "จันมนตรี", sizeof(reg.personal_info.last_name) - 1);
    reg.personal_info.last_name[sizeof(reg.personal_info.last_name) - 1] = '\0';
    strncpy(reg.personal_info.birthdate, "17-05-2002", sizeof(reg.personal_info.birthdate) - 1);
    reg.personal_info.birthdate[sizeof(reg.personal_info.birthdate) - 1] = '\0';
    strncpy(reg.personal_info.gender, "ชาย", sizeof(reg.personal_info.gender) - 1);
    reg.personal_info.gender[sizeof(reg.personal_info.gender) - 1] = '\0';
    strncpy(reg.personal_info.address, "75/2 หมู่ 10 ต.ท่าตะเกียบ อ.ท่าตะเกียบ จ.ฉะเชิงเทรา 24160", sizeof(reg.personal_info.address) - 1);
    reg.personal_info.address[sizeof(reg.personal_info.address) - 1] = '\0';
    strncpy(reg.personal_info.nationality, "ไทย", sizeof(reg.personal_info.nationality) - 1);
    reg.personal_info.nationality[sizeof(reg.personal_info.nationality) - 1] = '\0';
    strncpy(reg.personal_info.religion, "พุทธ", sizeof(reg.personal_info.religion) - 1);
    reg.personal_info.religion[sizeof(reg.personal_info.religion) - 1] = '\0';
    strncpy(reg.personal_info.card_issue_date, "02-06-2026", sizeof(reg.personal_info.card_issue_date) - 1);
    reg.personal_info.card_issue_date[sizeof(reg.personal_info.card_issue_date) - 1] = '\0';
    strncpy(reg.personal_info.card_expiry_date, "16-05-2035", sizeof(reg.personal_info.card_expiry_date) - 1);
    reg.personal_info.card_expiry_date[sizeof(reg.personal_info.card_expiry_date) - 1] = '\0';

    strncpy(reg.student_info.id_number, "69012667", sizeof(reg.student_info.id_number) - 1);
    reg.student_info.id_number[sizeof(reg.student_info.id_number) - 1] = '\0';
    strncpy(reg.student_info.title, "นาย", sizeof(reg.student_info.title) - 1);
    reg.student_info.title[sizeof(reg.student_info.title) - 1] = '\0';
    strncpy(reg.student_info.first_name, "สุริยา", sizeof(reg.student_info.first_name) - 1);
    reg.student_info.first_name[sizeof(reg.student_info.first_name) - 1] = '\0';
    strncpy(reg.student_info.last_name, "จันมนตรี", sizeof(reg.student_info.last_name) - 1);
    reg.student_info.last_name[sizeof(reg.student_info.last_name) - 1] = '\0';
    strncpy(reg.student_info.Year_of_study, "ปี 1", sizeof(reg.student_info.Year_of_study) - 1);
    reg.student_info.Year_of_study[sizeof(reg.student_info.Year_of_study) - 1] = '\0';
    strncpy(reg.student_info.Semester_Year, "ภาคเรียนที่ 1/2569", sizeof(reg.student_info.Semester_Year) - 1);
    reg.student_info.Semester_Year[sizeof(reg.student_info.Semester_Year) - 1] = '\0';
    strncpy(reg.student_info.group, "กลุ่ม วิศวกรรมศาสตร์และเทคโนโลยี", sizeof(reg.student_info.group) - 1);
    reg.student_info.group[sizeof(reg.student_info.group) - 1] = '\0';
    strncpy(reg.student_info.course, "หลักสูตรวิศวกรรมศาสตรบัณฑิต", sizeof(reg.student_info.course) - 1);
    reg.student_info.course[sizeof(reg.student_info.course) - 1] = '\0';
    strncpy(reg.student_info.branch, "วิศวกรรมคอมพิวเตอร์และสารสนเทศ", sizeof(reg.student_info.branch) - 1);
    reg.student_info.branch[sizeof(reg.student_info.branch) - 1] = '\0';

    strncpy(reg.registered_courses[0].code, "EGN1007", sizeof(reg.registered_courses[0].code) - 1);
    reg.registered_courses[0].code[sizeof(reg.registered_courses[0].code) - 1] = '\0';
    strncpy(reg.registered_courses[0].name, "คอมพิวเตอร์และการโปรแกรม 1", sizeof(reg.registered_courses[0].name) - 1);
    reg.registered_courses[0].name[sizeof(reg.registered_courses[0].name) - 1] = '\0';
    reg.registered_courses[0].credits = 3;
    strncpy(reg.registered_courses[0].instructor, "อาจารย์ขจรพงษ์ พู่ภมรไกรภพ", sizeof(reg.registered_courses[0].instructor) - 1);
    reg.registered_courses[0].instructor[sizeof(reg.registered_courses[0].instructor) - 1] = '\0';

    strncpy(reg.registered_courses[1].code, "GHU1002", sizeof(reg.registered_courses[1].code) - 1);
    reg.registered_courses[1].code[sizeof(reg.registered_courses[1].code) - 1] = '\0';
    strncpy(reg.registered_courses[1].name, "ปรัชญาเบื้องต้น", sizeof(reg.registered_courses[1].name) - 1);
    reg.registered_courses[1].name[sizeof(reg.registered_courses[1].name) - 1] = '\0';
    reg.registered_courses[1].credits = 3;
    strncpy(reg.registered_courses[1].instructor, "อาจารย์สมัย พลอุ่น", sizeof(reg.registered_courses[1].instructor) - 1);
    reg.registered_courses[1].instructor[sizeof(reg.registered_courses[1].instructor) - 1] = '\0';

    strncpy(reg.registered_courses[2].code, "GSC1010", sizeof(reg.registered_courses[2].code) - 1);
    reg.registered_courses[2].code[sizeof(reg.registered_courses[2].code) - 1] = '\0';
    strncpy(reg.registered_courses[2].name, "คอมพิวเตอร์พื้นฐาน 1", sizeof(reg.registered_courses[2].name) - 1);
    reg.registered_courses[2].name[sizeof(reg.registered_courses[2].name) - 1] = '\0';
    reg.registered_courses[2].credits = 3;
    strncpy(reg.registered_courses[2].instructor, "อาจารย์อานนท์ เพ็ชรอาภรณ์", sizeof(reg.registered_courses[2].instructor) - 1);
    reg.registered_courses[2].instructor[sizeof(reg.registered_courses[2].instructor) - 1] = '\0';

    strncpy(reg.registered_courses[3].code, "CEI1101", sizeof(reg.registered_courses[3].code) - 1);
    reg.registered_courses[3].code[sizeof(reg.registered_courses[3].code) - 1] = '\0';
    strncpy(reg.registered_courses[3].name, "โครงสร้างไม่ต่อเนื่อง", sizeof(reg.registered_courses[3].name) - 1);
    reg.registered_courses[3].name[sizeof(reg.registered_courses[3].name) - 1] = '\0';
    reg.registered_courses[3].credits = 3;
    strncpy(reg.registered_courses[3].instructor, "อาจารย์สรายุทธ เอื้ออวยชัย", sizeof(reg.registered_courses[3].instructor) - 1);
    reg.registered_courses[3].instructor[sizeof(reg.registered_courses[3].instructor) - 1] = '\0';

    strncpy(reg.registered_courses[4].code, "ENL1001", sizeof(reg.registered_courses[4].code) - 1);
    reg.registered_courses[4].code[sizeof(reg.registered_courses[4].code) - 1] = '\0';
    strncpy(reg.registered_courses[4].name, "ทักษะภาษาอังกฤษเพื่อการสื่อสาร", sizeof(reg.registered_courses[4].name) - 1);
    reg.registered_courses[4].name[sizeof(reg.registered_courses[4].name) - 1] = '\0';
    reg.registered_courses[4].credits = 3;
    strncpy(reg.registered_courses[4].instructor, "อาจารย์ดุสิตา แซ่โล้ว", sizeof(reg.registered_courses[4].instructor) - 1);
    reg.registered_courses[4].instructor[sizeof(reg.registered_courses[4].instructor) - 1] = '\0';
    reg.registered_courses[1].credits = 3;

    reg.total_courses = 5;

    strncpy(reg.registration_date, "02-06-2026", sizeof(reg.registration_date) - 1);
    reg.registration_date[sizeof(reg.registration_date) - 1] = '\0';

    printf("ข้อมูลการลงทะเบียนเรียน\n");
    printf("ข้อมูลส่วนตัวบัตรประชาชน\n");
    printf("หมายเลขประชาชน: %s\n", reg.personal_info.id_number);
    printf("ชื่อ-สกุล       : %s %s %s\n", reg.personal_info.title, reg.personal_info.first_name, reg.personal_info.last_name);
    printf("วันเกิด        : %s\n", reg.personal_info.birthdate);
    printf("เพศ            : %s\n\n", reg.personal_info.gender);

    printf("ข้อมูลนักศึกษา (จากบัตรนักศึกษา)\n");
    printf("หมายเลขนักศึกษา: %s\n", reg.student_info.id_number);
    printf("ชื่อ-สกุล       : %s %s %s\n", reg.student_info.title, reg.student_info.first_name, reg.student_info.last_name);
    printf("ปีการศึกษา     : %s\n", reg.student_info.Year_of_study);
    printf("ภาคเรียน       : %s\n", reg.student_info.Semester_Year);
    printf("กลุ่ม          : %s\n\n", reg.student_info.group);

    printf("วิชาที่ลงทะเบียน\n");
    printf("วันที่ลงทะเบียน: %s\n", reg.registration_date);
    printf("จำนวนวิชาทั้งหมด: %d วิชา\n\n", reg.total_courses);

    for (int i = 0; i < reg.total_courses; i++)
    {
        printf("วิชาที่ %d:\n", i + 1);
        printf("รหัสวิชา      : %s\n", reg.registered_courses[i].code);
        printf("ชื่อวิชา       : %s\n", reg.registered_courses[i].name);
        printf("หน่วยกิต      : %d\n", reg.registered_courses[i].credits);
        printf("อาจารย์ผู้สอน  : %s\n\n", reg.registered_courses[i].instructor);
    }

    printf("================================================================\n");

    return 0;
}
