typedef struct s {
    int   nomor;
    char  *soal;
    float odd_a;
    float odd_b;
    float odd_c;
    float odd_d;
} Soalan;

Soalan soal[15];

void define_soal() {
    // Soal 1
    soal[0].nomor = 1;
    //              "\t--Batas-Panjang-Soal-Per-Baris--------------------------\n"
    soal[0].soal  = "\tSiapakah nama presiden pertama Indonesia?\n" \
                    "\tA. Soeharto\n" \
                    "\tB. Joko Widodo\n" \
                    "\tC. Soekarno\n" \
                    "\tD. Raffi Ahmad\n";
    soal[0].odd_a = 0.20;
    soal[0].odd_b = 0.25;
    soal[0].odd_c = 0.50;
    soal[0].odd_d = 0.05;
    //              Total odd: 0.75 + 0.12 + 0.10 + 0.03 = 1

    // Soal 2
    soal[1].nomor = 2;
    //              "\t--Batas-Panjang-Soal-Per-Baris--------------------------\n"
    soal[1].soal  = "\tApa nama ibukota Indonesia?\n" \
                    "\tA. Jakarta\n" \
                    "\tB. Banda Aceh\n" \
                    "\tC. Bali\n" \
                    "\tD. Papua\n";
    soal[1].odd_a = 0.50;
    soal[1].odd_b = 0.20;
    soal[1].odd_c = 0.25;
    soal[1].odd_d = 0.05;

    // Soal 3
    soal[2].nomor = 3;
    //              "\t--Batas-Panjang-Soal-Per-Baris--------------------------\n"
    soal[2].soal  = "\tAda berapa provinsi di Indonesia?\n" \
                    "\tA. 20 Provinsi\n" \
                    "\tB. 50 Provinsi\n" \
                    "\tC. 35 Provinsi\n" \
                    "\tD. 34 Provinsi\n";
    soal[2].odd_a = 0.05;
    soal[2].odd_b = 0.20;
    soal[2].odd_c = 0.25;
    soal[2].odd_d = 0.50;

    // Soal 4
    soal[3].nomor = 4;
    //              "\t--Batas-Panjang-Soal-Per-Baris--------------------------\n"
    soal[3].soal  = "\t   \n" \
                    "\tA. \n" \
                    "\tB. \n" \
                    "\tC. \n" \
                    "\tD. \n";
    soal[3].odd_a = 0.0;
    soal[3].odd_b = 0.0;
    soal[3].odd_c = 0.0;
    soal[3].odd_d = 0.0;

    // Soal 5
    soal[4].nomor = 5;
    //              "\t--Batas-Panjang-Soal-Per-Baris--------------------------\n"
    soal[4].soal  = "\t   \n" \
                    "\tA. \n" \
                    "\tB. \n" \
                    "\tC. \n" \
                    "\tD. \n";
    soal[4].odd_a = 0.0;
    soal[4].odd_b = 0.0;
    soal[4].odd_c = 0.0;
    soal[4].odd_d = 0.0;

    // Soal 6
    soal[5].nomor = 6;
    //              "\t--Batas-Panjang-Soal-Per-Baris--------------------------\n"
    soal[5].soal  = "\t   \n" \
                    "\tA. \n" \
                    "\tB. \n" \
                    "\tC. \n" \
                    "\tD. \n";
    soal[5].odd_a = 0.0;
    soal[5].odd_b = 0.0;
    soal[5].odd_c = 0.0;
    soal[5].odd_d = 0.0;

    // Soal 7
    soal[6].nomor = 7;
    //              "\t--Batas-Panjang-Soal-Per-Baris--------------------------\n"
    soal[6].soal  = "\t   \n" \
                    "\tA. \n" \
                    "\tB. \n" \
                    "\tC. \n" \
                    "\tD. \n";
    soal[6].odd_a = 0.0;
    soal[6].odd_b = 0.0;
    soal[6].odd_c = 0.0;
    soal[6].odd_d = 0.0;

    // Soal 8
    soal[7].nomor = 8;
    //              "\t--Batas-Panjang-Soal-Per-Baris--------------------------\n"
    soal[7].soal  = "\t   \n" \
                    "\tA. \n" \
                    "\tB. \n" \
                    "\tC. \n" \
                    "\tD. \n";
    soal[7].odd_a = 0.0;
    soal[7].odd_b = 0.0;
    soal[7].odd_c = 0.0;
    soal[7].odd_d = 0.0;

    // Soal 9
    soal[8].nomor = 9;
    //              "\t--Batas-Panjang-Soal-Per-Baris--------------------------\n"
    soal[8].soal  = "\t   \n" \
                    "\tA. \n" \
                    "\tB. \n" \
                    "\tC. \n" \
                    "\tD. \n";
    soal[8].odd_a = 0.0;
    soal[8].odd_b = 0.0;
    soal[8].odd_c = 0.0;
    soal[8].odd_d = 0.0;

    // Soal 10
    soal[9].nomor = 10;
    //              "\t--Batas-Panjang-Soal-Per-Baris--------------------------\n"
    soal[9].soal  = "\t   \n" \
                    "\tA. \n" \
                    "\tB. \n" \
                    "\tC. \n" \
                    "\tD. \n";
    soal[9].odd_a = 0.0;
    soal[9].odd_b = 0.0;
    soal[9].odd_c = 0.0;
    soal[9].odd_d = 0.0;

    // Soal 11
    soal[10].nomor = 11;
    //              "\t--Batas-Panjang-Soal-Per-Baris--------------------------\n"
    soal[10].soal  = "\t   \n" \
                    "\tA. \n" \
                    "\tB. \n" \
                    "\tC. \n" \
                    "\tD. \n";
    soal[10].odd_a = 0.0;
    soal[10].odd_b = 0.0;
    soal[10].odd_c = 0.0;
    soal[10].odd_d = 0.0;

    // Soal 12
    soal[11].nomor = 12;
    //              "\t--Batas-Panjang-Soal-Per-Baris--------------------------\n"
    soal[11].soal  = "\t   \n" \
                    "\tA. \n" \
                    "\tB. \n" \
                    "\tC. \n" \
                    "\tD. \n";
    soal[11].odd_a = 0.0;
    soal[11].odd_b = 0.0;
    soal[11].odd_c = 0.0;
    soal[11].odd_d = 0.0;

    // Soal 13
    soal[12].nomor = 13;
    //              "\t--Batas-Panjang-Soal-Per-Baris--------------------------\n"
    soal[12].soal  = "\t   \n" \
                    "\tA. \n" \
                    "\tB. \n" \
                    "\tC. \n" \
                    "\tD. \n";
    soal[12].odd_a = 0.0;
    soal[12].odd_b = 0.0;
    soal[12].odd_c = 0.0;
    soal[12].odd_d = 0.0;

    // Soal 14
    soal[13].nomor = 14;
    //              "\t--Batas-Panjang-Soal-Per-Baris--------------------------\n"
    soal[13].soal  = "\t   \n" \
                    "\tA. \n" \
                    "\tB. \n" \
                    "\tC. \n" \
                    "\tD. \n";
    soal[13].odd_a = 0.0;
    soal[13].odd_b = 0.0;
    soal[13].odd_c = 0.0;
    soal[13].odd_d = 0.0;

    // Soal 15
    soal[14].nomor = 15;
    //              "\t--Batas-Panjang-Soal-Per-Baris--------------------------\n"
    soal[14].soal  = "\t   \n" \
                    "\tA. \n" \
                    "\tB. \n" \
                    "\tC. \n" \
                    "\tD. \n";
    soal[14].odd_a = 0.0;
    soal[14].odd_b = 0.0;
    soal[14].odd_c = 0.0;
    soal[14].odd_d = 0.0;
}
