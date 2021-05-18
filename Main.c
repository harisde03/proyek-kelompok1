#include<stdio.h>
#include<stdlib.h>
#include"soal.h"
#include"hadiah.h"

// Function Prototypes
void drawBox();
void drawSoal(int no_soal);
char drawJawab();
void defineEverything();

// TODO
void sistemLogin(); // Level: Medium
void bantuanCall(); // Level: Easy-Medium
void bantuan50();   // Level: Easy-Medium
void bantuanPoll(); // Level: Medium-Hard
void randomSoal();  // Level: Easy

int main() {
    defineEverything();

    for (int i; i < 15; i++) {
        drawBox();
        drawSoal(i);
        drawJawab();
    }

    printf("\x1b[24;0f");
    return EXIT_SUCCESS;
}

void drawBox() {
    printf("\x1b[2J");
    printf("\x1b[0;0f");
    printf("+----------------------------------------------------------------+-----------------------+\n");
    printf("|                                                                |+----+  +-----+  +----+|\n");
    printf("|    * W H O  W A N T S  T O  B E  A  M I L L I O N A I R E *    ||Call|  |50:50|  |Poll||\n");
    printf("|                                                                |+----+  +-----+  +----+|\n");
    printf("+-----+----------------------------------------------------------+-----------------------+\n");
    printf("|     |\t\t\t\t\t\t\t\t |                  +--+ |\n");

    for (int i = 14; i >= 0; i--) {
        printf("|     |\t\t\t\t\t\t\t\t | Rp %13s |%s| |\n", hadiah[i].nominal, hadiah[i].didapat);
    }

    printf("|     |\t\t\t\t\t\t\t\t |                  +--+ |\n");
    printf("+-----+----------------------------------------------------------+-----------------------+\n");

}

void drawSoal(int no_soal) {
    printf("\x1b[6;0f");
    printf("\tSoal Nomor %d.\n", soal[no_soal].nomor);
    printf("%s", soal[no_soal].soal);
}

char drawJawab() {
    char jawab;

    printf("\tMasukkan Jawaban Anda [a/b/c/d]: ");
    scanf(" %c", &jawab);

    return 0;
}

void defineEverything() {
    define_soal();
    define_hadiah();
}

void sistemLogin() {
    // TODO: Buatkan sistem login seperti yang dicontohkan bg Saiful di Video YT.
}

void bantuanCall() {
    // TODO: Buatkan sistem bantuan Call dengan mengikuti odd tertinggi.
}

void bantuan50() {
    // TODO: Buatkan sistem pemecahan 2 jawaban dengan odd paling tinggi.
}

void bantuanPoll() {
    // TODO: Buatkan sistem grafik mengenai poll dengan berdasarkan odd.
}

void randomSoal() {
    // TODO: Buatkan sistem yang dapat mengacak 15 soal yang ada.
}