#include <stdio.h>
#include <string.h>

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
	char student_id[16];
	char student_name[100];
	Course course;
} Student;

int main(void)
{
	Student s1;
	strncpy(s1.student_id, "69012667", sizeof(s1.student_id) - 1);
	s1.student_id[sizeof(s1.student_id) - 1] = '\0';
	strncpy(s1.student_name, "สุริยา จันมนตรี", sizeof(s1.student_name) - 1);
	s1.student_name[sizeof(s1.student_name) - 1] = '\0';

	Course course1;
	strncpy(course1.code, "EGN1007", sizeof(course1.code) - 1);
	course1.code[sizeof(course1.code) - 1] = '\0';
	strncpy(course1.name, "คอมพิวเตอร์และการโปรแกรม 1", sizeof(course1.name) - 1);
	course1.name[sizeof(course1.name) - 1] = '\0';
	course1.credits = 3;
	strncpy(course1.instructor, "อาจารย์ขจรพงษ์ พู่ภมรไกรภพ", sizeof(course1.instructor) - 1);
	course1.instructor[sizeof(course1.instructor) - 1] = '\0';
	strncpy(course1.time, "เสาร์ 09:00-11:00", sizeof(course1.time) - 1);
	course1.time[sizeof(course1.time) - 1] = '\0';
	strncpy(course1.location, "อาคาร E ชั้น 2 ห้อง E305", sizeof(course1.location) - 1);
	course1.location[sizeof(course1.location) - 1] = '\0';

	Course course2;
	strncpy(course2.code, "GHU1002", sizeof(course2.code) - 1);
	course2.code[sizeof(course2.code) - 1] = '\0';
	strncpy(course2.name, "ปรัชญาเบื้องต้น", sizeof(course2.name) - 1);
	course2.name[sizeof(course2.name) - 1] = '\0';
	course2.credits = 3;
	strncpy(course2.instructor, "อาจารย์สมัย พลอุ่น", sizeof(course2.instructor) - 1);
	course2.instructor[sizeof(course2.instructor) - 1] = '\0';
	strncpy(course2.time, "เสาร์ 15:00-17:00", sizeof(course2.time) - 1);
	course2.time[sizeof(course2.time) - 1] = '\0';
	strncpy(course2.location, "อาคาร B ชั้น 3 ห้อง B305", sizeof(course2.location) - 1);
	course2.location[sizeof(course2.location) - 1] = '\0';

	Course course3;
	strncpy(course3.code, "GSC1010", sizeof(course3.code) - 1);
	course3.code[sizeof(course3.code) - 1] = '\0';
	strncpy(course3.name, "คอมพิวเตอร์พื้นฐาน 1", sizeof(course3.name) - 1);
	course3.name[sizeof(course3.name) - 1] = '\0';
	course3.credits = 3;
	strncpy(course3.instructor, "อาจารย์อานนท์ เพ็ชรอาภรณ์ ", sizeof(course3.instructor) - 1);
	course3.instructor[sizeof(course3.instructor) - 1] = '\0';
	strncpy(course3.time, "อาทิตย์ 09:00-11:00", sizeof(course3.time) - 1);
	course3.time[sizeof(course3.time) - 1] = '\0';
	strncpy(course3.location, "อาคาร E ชั้น 3 ห้อง E305", sizeof(course3.location) - 1);
	course3.location[sizeof(course3.location) - 1] = '\0';

	Course course4;
	strncpy(course4.code, "CEI1101", sizeof(course4.code) - 1);
	course4.code[sizeof(course4.code) - 1] = '\0';
	strncpy(course4.name, "โครงสร้างไม่ต่อเนื่อง", sizeof(course4.name) - 1);
	course4.name[sizeof(course4.name) - 1] = '\0';
	course4.credits = 3;
	strncpy(course4.instructor, "อาจารย์สรายุทธ เอื้ออวยชัย", sizeof(course4.instructor) - 1);
	course4.instructor[sizeof(course4.instructor) - 1] = '\0';
	strncpy(course4.time, "อาทิตย์ 11:00-13:00", sizeof(course4.time) - 1);
	course4.time[sizeof(course4.time) - 1] = '\0';
	strncpy(course4.location, "อาคาร C ชั้น 3 ห้อง C307", sizeof(course4.location) - 1);
	course4.location[sizeof(course4.location) - 1] = '\0';

	Course course5;
	strncpy(course5.code, "ENL1001", sizeof(course5.code) - 1);
	course5.code[sizeof(course5.code) - 1] = '\0';
	strncpy(course5.name, "ทักษะภาษาอังกฤษเพื่อการสื่อสาร", sizeof(course5.name) - 1);
	course5.name[sizeof(course5.name) - 1] = '\0';
	course5.credits = 3;
	strncpy(course5.instructor, "อาจารย์ดุสิตา แซ่โล้ว", sizeof(course5.instructor) - 1);
	course5.instructor[sizeof(course5.instructor) - 1] = '\0';
	strncpy(course5.time, "อาทิตย์ 13:00-15:00", sizeof(course5.time) - 1);
	course5.time[sizeof(course5.time) - 1] = '\0';
	strncpy(course5.location, "อาคาร B ชั้น 3 ห้อง B306", sizeof(course5.location) - 1);
	course5.location[sizeof(course5.location) - 1] = '\0';

	printf("Student ID    : %s\n", s1.student_id);
	printf("Name          : %s\n", s1.student_name);
	printf("\n");
	printf("Course code   : %s\n", course1.code);
	printf("Course name   : %s\n", course1.name);
	printf("Credits       : %d\n", course1.credits);
	printf("Instructor    : %s\n", course1.instructor);
	printf("Time          : %s\n", course1.time);
	printf("Location      : %s\n", course1.location);
	printf("\n");
	printf("Course code   : %s\n", course2.code);
	printf("Course name   : %s\n", course2.name);
	printf("Credits       : %d\n", course2.credits);
	printf("Instructor    : %s\n", course2.instructor);
	printf("Time          : %s\n", course2.time);
	printf("Location      : %s\n", course2.location);
	printf("\n");
	printf("Course code   : %s\n", course3.code);
	printf("Course name   : %s\n", course3.name);
	printf("Credits       : %d\n", course3.credits);
	printf("Instructor    : %s\n", course3.instructor);
	printf("Time          : %s\n", course3.time);
	printf("Location      : %s\n", course3.location);
	printf("\n");
	printf("Course code   : %s\n", course4.code);
	printf("Course name   : %s\n", course4.name);
	printf("Credits       : %d\n", course4.credits);
	printf("Instructor    : %s\n", course4.instructor);
	printf("Time          : %s\n", course4.time);
	printf("Location      : %s\n", course4.location);
	printf("\n");
	printf("Course code   : %s\n", course5.code);
	printf("Course name   : %s\n", course5.name);
	printf("Credits       : %d\n", course5.credits);
	printf("Instructor    : %s\n", course5.instructor);
	printf("Time          : %s\n", course5.time);
	printf("Location      : %s\n", course5.location);

	return 0;
}
