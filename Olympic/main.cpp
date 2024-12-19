#include "olympic.h"

int main() {
    FILE *fp_r = fopen("input.txt", "r");
    FILE *fp_w = fopen("output.txt", "w+");

    if (fp_r == NULL || fp_w == NULL) {
        perror("Error opening file");
        return 1;
    }

    int year;
    char city[50], country[50], season[20];

   
    while (fscanf(fp_r, "%s %s %d %s", city, country, &year, season) == 4) {

        if (strcmp(season, "летняя") == 0 || strcmp(season, "Летняя") == 0) {
            fprintf(fp_w, "%s %s %d %s\n", city, country, year, season);
        }
    }

    fclose(fp_r);
    fclose(fp_w);
    return 0;
}