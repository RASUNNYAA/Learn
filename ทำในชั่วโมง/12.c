#include <stdio.h>

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

int main(void)
{
	IDCard student = 
	{
		"1248100007833",
		"นาย","สุริยา","จันมนตรี",
		"17-05-2002","ชาย",
		"75/2 หมู่ 10 ต.ท่าตะเกียบ อ.ท่าตะเกียบ จ.ฉะเชิงเทรา 24160",
		"ไทย","พุทธ",
		"02-06-2026",
		"16-05-2035"
	};

	printf("ข้อมูลบัตรประชาชน \n");
	printf("----------------------------------------\n");
	printf("หมายเลขบัตร: %s\n", student.id_number);
	printf("ชื่อ-สกุล  : %s %s %s\n", student.title, student.first_name, student.last_name);
	printf("วันเกิด   : %s\n", student.birthdate);
	printf("เพศ       : %s\n", student.gender);
	printf("สัญชาติ   : %s\n", student.nationality);
	printf("ศาสนา     : %s\n", student.religion);
	printf("ที่อยู่    : %s\n", student.address);
	printf("วันที่ออกบัตร : %s\n", student.card_issue_date);
	printf("วันที่หมดอายุบัตร : %s\n", student.card_expiry_date);

	return 0;
}
