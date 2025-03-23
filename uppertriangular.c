#include <stdio.h>
#include<stdlib.h>

int main() {
   int m,n,isut,**arr;
   scanf("%d",&m);
   scanf("%d",&n);
   arr = (int **)malloc(m*sizeof(int));
   for(int i=0; i<m; i++){
    *(arr+i)=(int *)malloc(n*sizeof(int));
   }
   printf("enter the elements\n ");
   for(int i=0;i<m;i++){
       for(int j=0; j<n;j++){
           scanf("%d", &arr[i][j]);
       }
   }
   for(int i=0;i<m;i++){
       for(int j=0; j<i;j++){
          
           if(arr[i][j]==0){
               isut=1;
           }
           else{
               isut=0;
           }
        }
       }
   
   
   if(isut==1){
       printf("upper triangular");
   }
   else{
       printf("not upper triangular");
   }
    return 0;
}
