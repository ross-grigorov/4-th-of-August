#include <stdio.h>

typedef struct Student
{
    unsigned int courses_taken;
    double grade;
    char name[7];
    unsigned char age;
} Student;

int main()
{
    FILE *f = fopen("binary_structs", "rb");
    Student students[5];

    students[0] = (Student){2.3, 100, "Ivan"  , 25};
    students[1] = (Student){3.5,  24, "Dragan", 19};
    students[2] = (Student){8.9,  78, "Petkan", 43};
    students[3] = (Student){0.5,  36, "Osman" , 29};
    students[4] = (Student){6.4,  93, "Hasan" , 54};




    fwrite(students, sizeof(Student), 5, f);



    fclose(f);
    return 0;
}
