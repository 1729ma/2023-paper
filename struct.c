#include<stdio.h>


int main() {
    float total;
    float max=0;
    int maxindex=0;
 struct student{
     char name[40];
     int roll;
     int marks[3];
     
 };
 struct  student arr[10];
 for(int i=0;i<10;i++){
     printf("enter the name\n ");
     scanf("%s",&arr[i].name);
      printf("enter the roll\n ");
     scanf("%d",&arr[i].roll);
      printf("enter the marks of 3 subject\n ");
      for(int j=0;j<3;j++){
     scanf("%d",&arr[i].marks[j]);
      }
 }
 
 for(int i=0;i<10;i++){
     total=0;
     for(int j=0;j<3;j++){
         total=total+arr[i].marks[j];
     }
     if(total>max){
         max=total;
         maxindex=i;
     }
     
 }
 printf("the name of student is %s\n ", arr[maxindex].name);
 printf("marks is %d\n ", max);
 printf("the roll no is %d\n", arr[maxindex].roll);
 
    return 0;
}
