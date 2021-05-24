#include<stdio.h>
#include<string.h>

int sistem_login(int banyakArgumen, char *argumen[]) {
    /*
    FILE *fbw = fopen("database/login.bin", "wb");
    char login[20] = "Kelompok@Satu";

    fwrite(login, sizeof(char), sizeof(login)/sizeof(char), fbw);
    */

    if (banyakArgumen != 3) {
        printf("Gagal Login! Argumen tidak sesuai. Ikuti format berikut.\n");
        printf("./FileAplikasiProgramUtama username password\n");
        return 1;
    }

    char usernameInput[10], passwordInput[10];
    strcpy(usernameInput, argumen[1]);
    strcpy(passwordInput, argumen[2]);

    FILE *fbw;

    if ((fbw = fopen("database/login.bin", "rb")) == NULL) {
        printf("Gagal membuka file!\n");
        return 1;
    }

    char akun[20];
    fread(akun, sizeof(char), sizeof(akun)/sizeof(char), fbw);

    fclose(fbw);

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
        return 0;
    } else {
        return 1;
    }

    return 0;
}
