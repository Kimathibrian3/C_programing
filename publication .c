/*
Author Brian kimathi 
Reg CT102/G/23094/24
Date 2023/9/26
*/
// book
#include<stdio.h>
#include<string.h>
struct book{
       char title[30] ;
       char Author[30];
       int  publication_year;
       char ISBN [13] ;
       float price;
  }book;
int main (){
      strcpy(book.title,"introduction to c programming");
      strcpy (book.Author,"John smith");
      book.publication_year=2022;
      strcpy (book.ISBN,"9780131103627");
      book.price=49.99;
      
      
      printf("title:%s\n",book.title);
      printf("Author:%s\n",book.Author);
      printf("publication year:%d\n",book.publication_year);
      printf("price:%.2f\n",book.price);

  return 0;
}