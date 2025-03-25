include <stdio.h>
#include <stdlib.h>
/*Write a C program which takes the names, rolls and marks obtained in 6 subjects for a
set of students as input from the user and prints the merit list, i.e., the names and rolls
of the students in decreasing order of their total marks.*/
int main(){
    int n,temp;
struct student{
    char name[40];
    int roll;
    int marks[6];
    int total;
    
};
printf("enter number of students ");
scanf("%d", &n);
struct student  arr[n];
for(int i=0;i<n;i++){
    printf("name");
    scanf("%s", &arr[i].name);
    printf("roll");
    scanf("%d", &arr[i].roll);
    for(int j=0;j<6;j++){
        printf("s%d marks",j+1);
        scanf("%d",&arr[i].marks[j]);
        arr[i].total+=arr[i].marks[j];
    }
}
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i].total>arr[j].total){
                temp=arr[i].total;
                arr[i].total=arr[j].total;
                arr[j].total=temp;
            }
            
            
        }
    }

for(int i=0;i<n;i++){
            printf("the merit list: %s %d %d",arr[i].name,arr[i].roll,arr[i].total);
}
    return 0;
}
