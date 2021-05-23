#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"display.h"     // Berisi clearscreen & gotoxy()

void enterer();         // Fungsi "tekan enter untuk lanjut"
void drawBox();         // Gambar kotak pertanyaan dan hadiah
void welcomeScreen();   // Selamat Datang ke WWTBM

typedef struct h {
    char *nominal;
} Hadiah;

Hadiah hadiah[15];

int main() {
    hadiah[0].nominal  = "50.000";
    hadiah[1].nominal  = "125.000";
    hadiah[2].nominal  = "250.000";
    hadiah[3].nominal  = "500.000";
    hadiah[4].nominal  = "1.000.000";
    hadiah[5].nominal  = "2.000.000";
    hadiah[6].nominal  = "4.000.000";
    hadiah[7].nominal  = "8.000.000";
    hadiah[8].nominal  = "16.000.000";
    hadiah[9].nominal  = "32.000.000";
    hadiah[10].nominal = "64.000.000";
    hadiah[11].nominal = "125.000.000";
    hadiah[12].nominal = "250.000.000";
    hadiah[13].nominal = "500.000.000";
    hadiah[14].nominal = "1.000.000.000";

    drawBox();

    gotoxy(0,24);
    return EXIT_SUCCESS;
}

void enterer() {
    while(getchar() != '\n');
    getchar();
    printf("\n");
}

void drawBox() {
	int i;
    system(CLEAR);
    gotoxy(0,0);
    printf("+----------------------------------------------------------------+-----------------------+\n");
    printf("|                                                                |+----+  +-----+  +----+|\n");
    printf("|    * W H O  W A N T S  T O  B E  A  M I L L I O N A I R E *    ||    |  |     |  |    ||\n");
    printf("|                                                                |+----+  +-----+  +----+|\n");
    printf("+-----+----------------------------------------------------------+-----------------------+\n");
    printf("|     |\t\t\t\t\t\t\t\t |                  +--+ |\n");

    for (i = 14; i >= 0; i--) {
        printf("|     |\t\t\t\t\t\t\t\t |    %13s |  | |\n", hadiah[i].nominal);
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
