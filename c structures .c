//c structures
#include<stdio.h>
struct student{
   float marks;
   char Reg_no[50] ;
   char email[30];
   char name[30];
   int phone_no; 
   int id;
} student1,student2;


int main(){

// struct student student1, student2;
  strcpy( student1.name, "Brian");
  strcpy(student1.email, "Brian@gmail.com");
    student1.phone_no=071417144;
    strcpy(student1.Reg_no,"CT102/G/23094/23");
    student1.marks=85.6;
    
    printf("Name:%s \n", student1.name);
    printf("Email:%s \n",student1.email); 
    printf("phone number:%d \n",student1.phone_no);
    printf("Registration number:%s \n",student1.Reg_no);
    printf("marks:%f \n",student1.marks);
return 0;
}