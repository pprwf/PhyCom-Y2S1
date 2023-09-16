#include <stdio.h>

int main () {
    int age, height, weight, tw_up = 0, tw_down = 0, t_up = 0, f_down = 0, avg_age = 0, count;
    float avg_height = 0, avg_weight = 0;
    for (count = 0; count < 50; count ++) {
        scanf("%d %d %d", &age, &height, &weight);
        if (age >= 20 && height >= 160) {
            tw_up ++;
        }
        if (age < 20 && (height <= 180 || weight >= 60)) {
            tw_down ++;
        }
        if (age >= 30 && weight >= 40 && weight <= 80) {
            t_up ++;
        }
        if (age < 40 && (weight < 85 || height <= 200)) {
            f_down ++;
        }
        avg_age += age;
        avg_height += height;
        avg_weight += weight;
    }
    printf("Age >= 20 and Height >= 160: %d\n", tw_up);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", tw_down);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", t_up);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", f_down);
    printf("Average Age: %d\n", avg_age / 50);
    printf("Average Height: %.2f\n", avg_height / 50);
    printf("Average Weight: %.2f", avg_weight / 50);
}
