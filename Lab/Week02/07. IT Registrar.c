#include <stdio.h>

int main() {
    char name[30], lastname[30], id[8];
    int dd, mm, yy;
    float gpa;
    scanf("%s %s %s %d/%d/%d %f", name, lastname, &id, &dd, &mm, &yy, &gpa);
    printf("Fullname: %s %s\n", name, lastname);
    printf("ID: %s\n", id);
    printf("DOB: %02d-%02d-%04d\n", dd, mm, yy);
    printf("GPA: %.2f", gpa);
}
