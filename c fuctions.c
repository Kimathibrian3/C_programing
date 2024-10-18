// c fuctions
    #include<stdio.h>// printf(), scanf();
    #include<math.h> //sin() ,cos(),sqrt+(),
    int sum (int x, int y, int z) ;
    float division (float a,float b);
    
    int main (){
    int result,  a,b,c;
    float div_1;
    
    printf("Enter 3 values");
    scanf("%d%d%d",&a,&b,&c);
    
    result = sum(a,b,c);
    div_1= division(20,40);
    
    
    printf("The sum is %d \n ", result);
    printf(" The division is %d \n",div_1);
    return 0;
    }
    
   // function definition 
   int sum(int x,int y,int z){
   int result;
   result =x+y+z;
   return result;
   }
   //  definition 
   float division (float a,float b){
   float div;
   div=a / b;
   return div;
   }
  