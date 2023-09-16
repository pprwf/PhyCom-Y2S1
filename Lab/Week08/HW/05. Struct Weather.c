#include <stdio.h>
#include <string.h>

struct Weather {
    char outlook[9];
    int temperature, humidity;
    char wind;
};

void playing_decision (struct Weather forecast) {
    char play[] = "yes";
    if (strcmp(forecast.outlook, "rain") == 0) {
        if (forecast.wind == 'T') {
            strcpy(play, "no");
        }
    } else if (strcmp(forecast.outlook, "sunny") == 0) {
        if (forecast.humidity > 77.5) {
            strcpy(play, "no");
        }
    }
    printf("%s\n", play);
}

int main () {
    int day;
    scanf("%d", &day);
    for (int i = 0; i < day; i ++) {
        struct Weather forecast;
        scanf("%s %d %d %c", forecast.outlook, &forecast.temperature, &forecast.humidity, &forecast.wind);
        playing_decision(forecast);
    }
}
