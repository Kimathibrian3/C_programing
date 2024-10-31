/*
Author Brian kimathi 
Reg CT102/G/23094/24
Date 2023/9/26
*/
#include <stdio.h>
#include <stdlib.h>

void write_to_file() {
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(file, "%s", sentence);
    fclose(file);
}

void read_from_file() {
    FILE *file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
}

void append_to_file() {
    FILE *file = fopen("data.txt", "a");
    if (file == NULL) {
        printf("Error opening file for appending.\n");
        return;
    }
    char sentence[100];
    printf("Enter another sentence to append: ");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(file, "%s", sentence);
    fclose(file);
}

int main() {
    write_to_file();
    read_from_file();
    append_to_file();
    read_from_file();
    
    return 0;
}
    