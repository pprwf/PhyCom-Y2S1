#include <stdio.h>
#include <string.h>

struct Record {
    char id[10], name[100];
    long salary, sales;
};

int main () {
    int employees;
    char search[10];
    scanf("%d", &employees);
    struct Record db[employees];
    for (int i = 0; i < employees; i ++) {
        scanf("%s %s %ld %ld", db[i].id, db[i].name, &db[i].salary, &db[i].sales);
    }
    scanf("%s", search);
    for (int i = 0; i < employees; i ++) {
        if (strcmp(search, db[i].id) == 0) {
            float comm = db[i].sales * 0.02;
            float income = comm + db[i].salary;
            printf("%s\n%s\n%ld\n%.2f\n%ld\n%.2f", search, db[i].name, db[i].sales, comm, db[i].salary, income);
            return 0;
        }
    }
    printf("ID not found !!!");
}
