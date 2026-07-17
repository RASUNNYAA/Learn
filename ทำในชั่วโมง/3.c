/*
    1.วนรอบแบบ while
    กำหนดค่าเริ่มต้น
    while (เงื่อนไข) {
        สิ่งที่ทำเมื่อเป็นตามเงื่อนไข;
        การเพิ่มหรือลดค่า;
    }
     2.วนรอบแบบ do while
    กำหนดค่าเริ่มต้น
    do {
          สิ่งที่ทำเมื่อเป็นตามเงื่อนไข;
          การเพิ่มหรือลดค่า;
     } while (เงื่อนไข);
      3.วนรอบแบบ for
    for (การกำหนดค่าเริ่มต้น; เงื่อนไข; การเพิ่มหรือลดค่า) {
        สิ่งที่ทำเมื่อเป็นตามเงื่อนไข;
    }
*/
#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 10)
    {
        printf("%d\n", i);
        i = i + 1;
        printf("Loop do-while\n");
        printf("loop for\n");

        int j = 0;
        do
        {
            printf("%d\n", j);
            j++;
        } while (j < 10);
        printf("Loop do-while\n");
        printf("loop for\n");

        for (int k = 0; k < 10; k++)
        {
            printf("%d\n", k);
        }

        return 0;
    }
}