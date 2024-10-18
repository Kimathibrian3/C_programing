//Arrays in c
    #include<stdio.h>
    int main () {
    int i,j,k;
    
      int marks[2][2][3]={{{50,90,60},{50,75,40}},{{50,90,80},{60,70,20}}};
      for(i=0;i<2;i++){
         for(j=0;j<3;j++){
         for(k=0;k<3;k++){
      printf("marks[%d][%d][%d]=%d \n",i,j,k,marks[i][j][k]);
      }
      }
      }
  return 0;
  }
  