/*
Author Brian kimathi 
Reg CT102/G/23094/24
Date 2023/9/26
*/
#include <stdio.h>
#include <stdlib.h>


struct Student {
    char name[50];
    int marks;
};

int main() {
    struct Student students[5];
    FILE *file;
    int i;

    // Prompt user to enter student information
    for (i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    // Open a file 
    file = fopen("students.dat", "wb");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    fwrite(students, sizeof(struct Student), 5, file);
    fclose(file);

    // Open the file 2
    file = fopen("students.dat", "rb");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    fread(students, sizeof(struct Student), 5, file);
    fclose(file);

    
    printf("\nStudent Information:\n");
    for (i = 0; i < 5; i++) {
        printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    return 0;
}
