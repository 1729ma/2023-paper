#include <stdio.h>
#include<stdlib.h>
char *f(char *a,char *b){
    int c1,c2=0;
    int l;
        char *result;
    while( a[c1]!='\0' &&  a[c1]!='\n'){
        c1++;
    }
     while( b[c2]!='\0'&&  a[c1]!='\n'){
        c2++;
    }
    result= (char *)malloc(c1+c2+1);
    l=c1+c2+1;
    
    for(int i=0; i<l;i++){
        result[i]=a[i];
    }
    for(int i=0; i<l;i++){
        result[c1+i]=b[i];
    }
    return result;
}

int main() {
    char A[100];
    char B[100];
    printf("enter strings of A ");
    fgets(A,100,stdin);
    printf("enter strings of B" );
    fgets(B,100,stdin);
    char *combined=f(A,B);
    printf("the result is %s ", combined);

    return 0;
}
