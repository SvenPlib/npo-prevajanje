#ifndef TEST_MAIN_H
#define TEST_MAIN_H

// Deklaracija funkcije iz main.c, ki jo bomo testirali
void printName(char name[]);

// Deklaracija glavne testne funkcije
void runTests();

// Ponovno definiramo makro, da bo na voljo v testnih funkcijah
// (Običajno bi to bilo v skupnem header-ju, ki bi ga vključili oba fajla)
#define SQUARE(x) ((x) * (x))

#endif /* TEST_MAIN_H */