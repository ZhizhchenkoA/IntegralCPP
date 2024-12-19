#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>




int main() {


    FILE *fp_r = fopen("input.txt", "r");
    FILE *fp_w = fopen("output.txt", "w+");
    int *arr_eng = (int*) calloc(26, sizeof(int));
   
    char c;

    while ((c = fgetc(fp_r)) != EOF)
        if (c >= 'a' && c <= 'z')
            arr_eng[c - 'a']++;
        else if (c >= 'A' && c <= 'Z')
            arr_eng[c - 'A']++;
        
    for (int i = 0; i < 26; i++)
        
        fprintf(fp_w, "%c: %d\n", (char) (i) + 'a', arr_eng[i]);
    
   

    fclose(fp_r);
    fclose(fp_w);
    free(arr_eng);
    return 0;
}