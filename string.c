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









#include <stdio.h>
#include <stdlib.h>

char *f(char *a, char *b) {
    int c1 = 0, c2 = 0;
    
    // Find length of first string (excluding newline)
    while (a[c1] != '\0' && a[c1] != '\n') {
        c1++;
    }
    
    // Find length of second string (excluding newline)
    while (b[c2] != '\0' && b[c2] != '\n') {
        c2++;
    }

    // Allocate memory for result (+2 for space and null terminator)
    char *result = (char *)malloc(c1 + c2 + 2);
    
    if (!result) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    // Copy first string into result
    for (int i = 0; i < c1; i++) {
        result[i] = a[i];
    }

    // Add space after first string
    result[c1] = ' ';

    // Copy second string into result after space
    for (int i = 0; i < c2; i++) {
        result[c1 + 1 + i] = b[i];
    }

    // Null-terminate the result
    result[c1 + c2 + 1] = '\0';

    return result;
}

int main() {
    char A[100];
    char B[100];

    printf("Enter string A: ");
    fgets(A, 100, stdin);
    
    printf("Enter string B: ");
    fgets(B, 100, stdin);

    char *combined = f(A, B);
    printf("The result is: %s\n", combined);

    free(combined); // Free allocated memory

    return 0;
}
