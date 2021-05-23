#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"display.h"     // Berisi clearscreen & gotoxy()

void enterer();         // Fungsi "tekan enter untuk lanjut"
void drawBox();         // Gambar kotak pertanyaan dan hadiah
void welcomeScreen();   // Selamat Datang ke WWTBM

int main(int banyakArgumen, char *argumen[]) {
    /*
    FILE *fptr = fopen("database/login.bin", "wb");
    char login[20] = "Kelompok@Satu";

    fwrite(login, sizeof(char), sizeof(login)/sizeof(char), fptr);
    */

   	if(banyakArgumen != 3) {
       	printf("Gagal Login! Argumen tidak sesuai. Ikuti format berikut.\n");
       	printf("./FileAplikasiProgramUtama username password\n");
       	return 1;
   	}

   	char usernameInput[10], passwordInput[10];
   	strcpy(usernameInput, argumen[1]);
   	strcpy(passwordInput, argumen[2]);

   	FILE *fptr;

    if ((fptr = fopen("database/login.bin", "rb")) == NULL) {
        printf("Gagal membuka file!\n");
        return 1;
    }

    char akun[20];
    fread(akun, sizeof(char), sizeof(akun)/sizeof(char), fptr);

    fclose(fptr);

    char *string[3];
    char username[20], password[20];
    int ctrl = 0;

    string[0] = strtok(akun, "@");
    while(string[ctrl++] != NULL) {
        string[ctrl] = strtok(NULL, "@");
    }

    strcpy(username, string[0]);
    strcpy(password, string[1]);

    if ((strcmp(usernameInput, username) == 0) && (strcmp(passwordInput, password) == 0)) {
        printf("Login Sebagai: %s\n", username);
        printf("Login Berhasil\n");
    } else {
        printf("Login anda gagal!\n");
    }

    return 0;
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
    printf("|    * W H O  W A N T S  T O  B E  A  M I L L I O N A I R E *    ||CALL|  |50:50|  |POLL||\n");
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
