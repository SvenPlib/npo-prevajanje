#include <stdio.h>

void printName(char name[]) {  
    printf("Hello %s\n", name);
}

// Makro za izračun kvadrata števila
#define SQUARE(x) ((x) * (x))

int main() {
    printName("Alice");

    return 0;
}
