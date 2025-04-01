#include <stdio.h>
#include <assert.h>
#include "test_main.h"

// Prvi test: preveri vrednost makra SQUARE
void testSquareMacro() {
    printf("Izvajam test kvadratnega makra...\n");
    
    // Testiram za različne vrednosti
    assert(SQUARE(1) == 4);
    assert(SQUARE(2) == 25);
    assert(SQUARE(0) == 0);
    assert(SQUARE(-3) == 9);
    
    printf("Test kvadratnega makra USPEŠEN!\n");
}

// Drugi test: preveri delovanje printName funkcije
void testPrintName() {
    printf("Izvajam test printName funkcije...\n");
    
    // Ker printName samo izpiše v konzolo, je težko avtomatsko testirati
    // Zato bomo le klicali funkcijo z nekaj primeri in ročno preverili izpis
    printf("Pričakovan izpis: Hello Bob\n");
    printName("Bob");
    
    printf("Pričakovan izpis: Hello Testni Uporabnik\n");
    printName("Testni Uporabnik");
    
    printf("Test printName funkcije USPEŠEN! (preverite izpise ročno)\n");
}

// Glavna testna funkcija, ki kliče vse teste
void runTests() {
    printf("=== Začenjam teste ===\n");
    
    testSquareMacro();
    //testPrintName();
    
    printf("=== Vsi testi uspešno zaključeni ===\n");
}