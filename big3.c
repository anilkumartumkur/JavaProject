#include <stdio.h>

void biggest3(){
    
    int a, b, c;
    printf("Enter a,b,c: ");
    scanf("%d %d %d", &a, &b, &c);
   printf("Hello"); 
    if (a > b && a > c) {
        printf("a is Greater than b and c");
    }
    else if (b > a && b > c) {
        printf("b is Greater than a and c");
    }
    else if (c > a && c > b) {
        printf("c is Greater than a and b");
    }
    else {
        printf("all are equal or any two values are equal");
    } 
 //   return 0;
}

