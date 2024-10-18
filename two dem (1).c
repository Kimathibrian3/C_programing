//Arrays in c
    #include<stdio.h>
    int main () {
    int i,j;
    
      int marks[2][3]={{90,70,60},{40,70,100}};
      for(i=0;i<2;i++){
         for(j=0;j<3;j++){
      printf("marks[%d][%d]=%d \n",i,j,marks[i][j]);
      }
      }
  return 0;
  }
  