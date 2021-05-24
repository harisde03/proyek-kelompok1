#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"display.h"
#include"define.h"
#include"sistem.h"

// Function Prototypes
void enterer();
void draw_box();
void minta_bantuan(char jawaban, int no_soal);

int main(int argc, char *argv[]) {
    // Menanyakan apabila login berhasil atau gagal
    if (sistem_login(argc, argv)) {
        printf("Login anda gagal.\n");
        return EXIT_FAILURE;
    }


    // Mendefinisikan Soal, Hadiah, dan Bantuan
    define_soal();
    define_hadiah();
    define_bantuan();


    // Menampilkan Tampilan Selamat Datang
    char siap[4];

    draw_box();

    printf("\tSelamat Datang di Kursi Panas Anda.\n\n");
    printf("\tAda 15 pertanyaan yang harus Anda jawab dengan benar\n");
    printf("\tuntuk mendapatkan Rp 1 Milyar.\n");
    printf("\tNilai paling rendah adalah Rp 50.000.\n");
    printf("\tTerdapat 3 titik aman yang akan anda lalui yaitu pada\n");
    printf("\tRp 1 Juta, Rp 32 Juta, dan Rp 1 Milyar.\n");
    printf("\tSelama perjalanan, Anda dibekali 3 bantuan\n");
    printf("\t(1) Bantuan CALL (2) Bantuan 50:50 (3) Bantuan POLL.\n");
    printf("\tJika anda siap untuk menjawab ketik \"SIAP\": ");
    scanf("%s", siap);

    if (!strcmp(siap, "SIAP")) {
        printf("\tTerima Kasih Atas Antusiasnya. ");
    } else {
        printf("\tBaiklah. ");
    }

    enterer();


    // Menanyakan Semua pertanyaan.
    char jawaban, balasan;
    int i = 0;
    char titik_aman[15] = "0";

    do {
        for (; i < 15; i++) {
            hadiah[i].didapat = "* ";

            draw_box();

            printf("\tSoal Nomor %d.\n\n", soal[i].nomor);
            printf("%s\n", soal[i].soal);

            printf("\tMasukkan Jawaban Anda [a/b/c/d][1/2/3][Q]: ");
            scanf(" %c", &jawaban);

            if ((jawaban >= 'A') && (jawaban <= 'Z')) {
                jawaban += 32;
            }

            if (jawaban == 'a') {
                if (soal[i].a == 0.50) hadiah[i].didapat = "**";
            } else if (jawaban == 'b') {
                if (soal[i].b == 0.50) hadiah[i].didapat = "**";
            } else if (jawaban == 'c') {
                if (soal[i].c == 0.50) hadiah[i].didapat = "**";
            } else if (jawaban == 'd') {
                if (soal[i].d == 0.50) hadiah[i].didapat = "**";
            } else if ((jawaban == '1') || (jawaban == '2') || (jawaban == '3')) {
                minta_bantuan(jawaban, i);
                i--;
                continue;
            } else if (jawaban == 'q') {
                hadiah[i].didapat = "  ";
                (i == 0) ? i = 0 : i-1;
                break;
            } else {
                i--;
                continue;
            }

            if (!strcmp(hadiah[i].didapat, "**")) {
                printf("\tSelamat! Rp %s ", hadiah[i].nominal);
                if (i == 4 || i == 9) {
                    printf("\n\tAnda sudah berada di titik aman! ");
                    strcpy(titik_aman, hadiah[i].nominal);
                }
                enterer();
                continue;
            }

            hadiah[i].didapat = "XX";
            break;
        }

        if (i == 15) {
            draw_box();
            printf("\tSelamat! Anda berhasil menjawab semua pertanyaan dengan\n");
            printf("\tbenar!\n\n");
            printf("\tTerima Kasih Dari kami sebesar-besarnya karena sudah mau\n");
            printf("\tmemberikan waktu berharganya untuk menjawab pertanyaan\n");
            printf("\tyang kami sediakan.\n");
            printf("\t\t\t\t\t\t~Kelompok 1~ ");
            break;
        }

        if (jawaban == 'q') {
            printf("\tApakah Anda ingin meninggalkan permainan dan akan\n");
            printf("\tmembawa pulang Rp %s ? [y/n]: ", (i == 0) ? "0" : hadiah[i-1].nominal);
            scanf(" %c", &balasan);

            if (balasan == 'y') {
                draw_box();
                printf("\tBaiklah, Terima Kasih sudah bergabung di Acara ini.\n");
                printf("\tSemoga Rp %s yang dibawa pulang akan berguna. ", (i == 0) ? "0" : hadiah[i-1].nominal);
                enterer();
                break;
            }
        }

        if (!strcmp(hadiah[i].didapat, "XX")) {
            printf("\tMohon Maaf! Jawaban Anda kurang tepat.\n");
            printf("\tAnda akan membawa pulang Rp %s ", titik_aman);
            enterer();

            draw_box();
            printf("\tApakah anda ingin mencoba lagi? [y/n]: ");
            scanf(" %c", &balasan);

            if (balasan == 'y') {
                strcpy(titik_aman, "0");
                define_hadiah();
                define_bantuan();
                i = 0;
            } else {
                break;
            }
        }
    } while (1);


    // Memindahkan Kursor kembali kebawah kotak
    gotoxy(0,24);
    return EXIT_SUCCESS;
}

void enterer() {
    while(getchar() != '\n');
    getchar();
    printf("\n");
}

void draw_box() {
    int i;

    system(CLEAR);
    gotoxy(0,0);

    printf("+----------------------------------------------------------------+-----------------------+\n");
    printf("|                                                                |+----+  +-----+  +----+|\n");
    printf("|    * W H O  W A N T S  T O  B E  A  M I L L I O N A I R E *    ||%s|  |%s|  |%s||\n", bantuan[0].nama, bantuan[1].nama, bantuan[2].nama);
    printf("|                                                                |+----+  +-----+  +----+|\n");
    printf("+-----+----------------------------------------------------------+-----------------------+\n");
    printf("|     |\t\t\t\t\t\t\t\t |                  +--+ |\n");

    for (i = 14; i >= 0; i--) {
        printf("|     |\t\t\t\t\t\t\t\t | Rp %13s |%s| |\n", hadiah[i].nominal, hadiah[i].didapat);
    }

    printf("|     |\t\t\t\t\t\t\t\t |                  +--+ |\n");
    printf("+-----+----------------------------------------------------------+-----------------------+\n");

    gotoxy(0,7);
}

char *sort_jawaban(int no_soal) {
    if (soal[no_soal].a == 0.50) {
        if (soal[no_soal].b == 0.25) return "AB";
        else if (soal[no_soal].c == 0.25) return "AC";
        else if (soal[no_soal].d == 0.25) return "AD";
    } else if (soal[no_soal].b == 0.50) {
        if (soal[no_soal].a == 0.25) return "BA";
        else if (soal[no_soal].c == 0.25) return "BC";
        else if (soal[no_soal].d == 0.25) return "BD";
    } else if (soal[no_soal].c == 0.50) {
        if (soal[no_soal].a == 0.25) return "CA";
        else if (soal[no_soal].b == 0.25) return "CB";
        else if (soal[no_soal].d == 0.25) return "CD";
    } else if (soal[no_soal].d == 0.50) {
        if (soal[no_soal].a == 0.25) return "DA";
        else if (soal[no_soal].b == 0.25) return "DB";
        else if (soal[no_soal].c == 0.25) return "DC";
    }

    return "??";
}

void bantuan_call(int no_soal) {
    char *jawaban = sort_jawaban(no_soal);

    printf("\tAnda: Wahai sahabatku, bantu aku menjawab pertanyaan ini\n");
    printf("\tSahabatmu: Oh... tentu saja! jawabannya adalah %c ", jawaban[0]);

    enterer();
}

void bantuan_50(int no_soal) {
    char *jawaban = sort_jawaban(no_soal);

    if (jawaban[0] > jawaban[1]) {
        printf("\tBerikut 2 jawaban yang paling memungkinkan: %c & %c ", jawaban[1], jawaban[0]);
    } else {
        printf("\tBerikut 2 jawaban yang paling memungkinkan: %c & %c ", jawaban[0], jawaban[1]);
    }

    enterer();
}

void bantuan_poll(int no_soal) {
    int i;
    int a = 100 * soal[no_soal].a;
    int b = 100 * soal[no_soal].b;
    int c = 100 * soal[no_soal].c;
    int d = 100 * soal[no_soal].d;

    printf("\tBerikut hasil poll yang dijawab oleh para pemirsa:");

    printf("\n\tA :");
    for (i = 0; i < a; i += 5) printf("o");
    printf("\n\tB :");
    for (i = 0; i < b; i += 5) printf("o");
    printf("\n\tC :");
    for (i = 0; i < c; i += 5) printf("o");
    printf("\n\tD :");
    for (i = 0; i < d; i += 5) printf("o");

    printf(" ");
    enterer();
}

void minta_bantuan(char jawaban, int no_soal) {
    char balasan;

    if (jawaban == '1' && bantuan[0].usage == 0) {
        printf("\tApakah anda ingin menggunakan bantuan CALL [y/n]? ");
        scanf(" %c", &balasan);

        if (balasan == 'y') {
            bantuan_call(no_soal);
            bantuan[0].nama = "    ";
            bantuan[0].usage = 1;
        }
    } else if (jawaban == '2' && bantuan[1].usage == 0) {
        printf("\tApakah anda ingin menggunakan bantuan 50:50 [y/n]? ");
        scanf(" %c", &balasan);

        if (balasan == 'y') {
            bantuan_50(no_soal);
            bantuan[1].nama = "     ";
            bantuan[1].usage = 1;
        }
    } else if (jawaban == '3' && bantuan[2].usage == 0) {
        printf("\tApakah anda ingin menggunakan bantuan POLL [y/n]? ");
        scanf(" %c", &balasan);

        if (balasan == 'y') {
            bantuan_poll(no_soal);
            bantuan[2].nama = "    ";
            bantuan[2].usage = 1;
        }
    } else {
        printf("\tAnda sudah menggunakan bantuan ini. ");
        enterer();
    }
}