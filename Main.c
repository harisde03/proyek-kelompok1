#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"display.h"     // Berisi clearscreen & gotoxy()

void enterer();         // Fungsi "tekan enter untuk lanjut"
void drawBox();         // Gambar kotak pertanyaan dan hadiah
void welcomeScreen();   // Selamat Datang ke WWTBM

int main() {
    welcomeScreen();

    gotoxy(0,24);
    return EXIT_SUCCESS;
}

void enterer() {
    while(getchar() != '\n');
    getchar();
    printf("\n");
}

void drawBox() {
    system(CLEAR);
    gotoxy(0,0);
    printf("+----------------------------------------------------------------+-----------------------+\n");
    printf("|                                                                |+----+  +-----+  +----+|\n");
    printf("|    * W H O  W A N T S  T O  B E  A  M I L L I O N A I R E *    ||    |  |     |  |    ||\n");
    printf("|                                                                |+----+  +-----+  +----+|\n");
    printf("+-----+----------------------------------------------------------+-----------------------+\n");
    printf("|     |\t\t\t\t\t\t\t\t |                  +--+ |\n");

    for (int i = 14; i >= 0; i--) {
        printf("|     |\t\t\t\t\t\t\t\t |                  |  | |\n");
    }

    printf("|     |\t\t\t\t\t\t\t\t |                  +--+ |\n");
    printf("+-----+----------------------------------------------------------+-----------------------+\n");
    gotoxy(0,7);
}

void welcomeScreen() {
    char siap[4];
    drawBox();
    printf("\tSelamat Datang di Kursi Panas Anda.\n\n" \
           "\tAda 15 pertanyaan yang harus Anda jawab dengan benar\n" \
           "\tuntuk mendapatkan Rp 1 Milyar.\n" \
           "\tNilai paling rendah adalah Rp 50.000.\n" \
           "\tTerdapat 3 titik aman yang akan anda lalui yaitu pada\n" \
           "\tRp 1 Juta, Rp 32 Juta, dan Rp 1 Milyar.\n" \
           "\tJika anda siap untuk menjawab ketik \"SIAP\": "
    );
    scanf("%s", siap);
    if (!strcmp(siap, "SIAP")) {
        printf("\tTerima Kasih Atas Antusiasnya. ");
    } else {
        printf("\tBaiklah. ");
    }
    enterer();
}
