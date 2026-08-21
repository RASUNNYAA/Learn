#include <stdio.h>
#include <string.h>

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
} IDCard;

int main(void)
{
    IDCard student;
    strncpy(student.id_number, "69012667", sizeof(student.id_number) - 1);
    student.id_number[sizeof(student.id_number) - 1] = '\0';
    strncpy(student.title, "นาย", sizeof(student.title) - 1);
    student.title[sizeof(student.title) - 1] = '\0';
    strncpy(student.first_name, "สุริยา", sizeof(student.first_name) - 1);
    student.first_name[sizeof(student.first_name) - 1] = '\0';
    strncpy(student.last_name, "จันมนตรี", sizeof(student.last_name) - 1);
    student.last_name[sizeof(student.last_name) - 1] = '\0';
    strncpy(student.Year_of_study, "ปี 1", sizeof(student.Year_of_study) - 1);
    student.Year_of_study[sizeof(student.Year_of_study) - 1] = '\0';
    strncpy(student.Semester_Year, "ภาคเรียนที่ 1/2569", sizeof(student.Semester_Year) - 1);
    student.Semester_Year[sizeof(student.Semester_Year) - 1] = '\0';
    strncpy(student.group, "กลุ่ม วิศวกรรมศาสตร์และเทคโนโลยี", sizeof(student.group) - 1);
    student.group[sizeof(student.group) - 1] = '\0';
    strncpy(student.course, "หลักสูตรวิศวกรรมศาสตรบัณฑิต", sizeof(student.course) - 1);
    student.course[sizeof(student.course) - 1] = '\0';
    strncpy(student.branch, "วิศวกรรมคอมพิวเตอร์และสารสนเทศ", sizeof(student.branch) - 1);
    student.branch[sizeof(student.branch) - 1] = '\0';

    printf("บัตรนักศึกษา \n");
    printf("หมายเลขบัตร :%s\n", student.id_number);
    printf("ชื่อ-สกุล     :%s %s %s\n", student.title, student.first_name, student.last_name);
    printf("ปีการศึกษา   :%s\n", student.Year_of_study);
    printf("ภาคเรียน     :%s\n", student.Semester_Year);
    printf("กลุ่ม        :%s\n", student.group);
    printf("หลักสูตร     :%s\n", student.course);
    printf("สาขา       :%s\n", student.branch);

    return 0;
}
