#include<stdio.h>


int main() {
 int unit;
 float amt;
 printf("enter units  ");
 scanf("%d", &unit);
 if(unit<=200){
     amt= unit*1;
 }
 else if(unit<=300){
     amt=200*1.0 + (unit-200)*1.5;
 }
   else{
       amt=200*1.0
       
       +100*1.5 + (unit-300)*2;
   } 
   
   printf("%f ", amt);
    return 0;
}
