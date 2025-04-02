#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "test_main.h"

// Prvi test: preveri vrednost makra SQUARE
void testSquareMacro() {
    printf("Izvajam test kvadratnega makra...\n");
    
    assert(SQUARE(2) == 4);
    assert(SQUARE(5) == 25);
    assert(SQUARE(0) == 0);
    assert(SQUARE(-3) == 9);
    
    printf("Test kvadratnega makra USPEŠEN!\n");
}

// Drugi test: preveri delovanje printName funkcije
void testPrintName() {
    printf("Izvajam test printName funkcije...\n");

    freopen("test_output.txt", "w", stdout);
    printName("Bob");
    
    // 2. Ponastavi izhod nazaj na konzolo
    freopen("/dev/tty", "w", stdout);
    
    char buffer[100];
    FILE *f = fopen("test_output.txt", "r");
    fgets(buffer, sizeof(buffer), f);
    fclose(f);
    
    assert(strcmp(buffer, "Hello Bob\n") == 0);
    printf("Test uspešen!\n");
}

// Glavna testna funkcija, ki kliče vse teste
void runTests() {
    printf("=== Začenjam teste ===\n");
    
    testSquareMacro();
    testPrintName();
    
    printf("=== Vsi testi uspešno zaključeni ===\n");
}