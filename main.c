#include <stdio.h>
#include "test_main.h"  

void printName(char name[]) {  
    printf("Hello %s\n", name);
}

// Makro za izračun kvadrata števila
#define SQUARE(x) ((x) * (x))

#define pi 3.14

int main() {
    printName("Alice");

    #ifdef pi
        printf("Pi je define\n");
    #else
        printf("PI ni define\n");
    #endif

    runTests();  
    
    return 0;
}

// VRSTICA ZA TEST ČE DELA