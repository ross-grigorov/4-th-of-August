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


    fread(students, sizeof(Student), 5, f);


    for(int i=0; i<5; i++)
    {
        printf("%lf %u %s %d", students[i].grade, students[i].courses_taken, students[i].name, students[i].age);
    }


    fclose(f);
    return 0;
}
