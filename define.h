typedef struct s {
    int nomor;
    char *soal;
    float a;
    float b;
    float c;
    float d;
} Soal;
Soal soal[15];

typedef struct h {
    char *nominal;
    char *didapat;
} Hadiah;
Hadiah hadiah[15];

typedef struct b {
    char *nama;
    int  usage;
} Bantuan;
Bantuan bantuan[3];

void define_soal() {
    soal[0].nomor = 1;
    soal[0].soal  = "\tSiapakah nama presiden pertama Indonesia?\n" \
                    "\tA. Soeharto\n" \
                    "\tB. Joko Widodo\n" \
                    "\tC. Soekarno\n" \
                    "\tD. Raffi Ahmad\n";
    soal[0].a = 0.20;
    soal[0].b = 0.25;
    soal[0].c = 0.50;
    soal[0].d = 0.05;

    soal[1].nomor = 2;
    soal[1].soal  = "\tApa nama ibukota Indonesia?\n" \
                    "\tA. Jakarta\n" \
                    "\tB. Banda Aceh\n" \
                    "\tC. Bali\n" \
                    "\tD. Papua\n";
    soal[1].a = 0.50;
    soal[1].b = 0.20;
    soal[1].c = 0.25;
    soal[1].d = 0.05;

    soal[2].nomor = 3;
    soal[2].soal  = "\tAda berapa provinsi di Indonesia?\n" \
                    "\tA. 20 Provinsi\n" \
                    "\tB. 50 Provinsi\n" \
                    "\tC. 35 Provinsi\n" \
                    "\tD. 34 Provinsi\n";
    soal[2].a = 0.05;
    soal[2].b = 0.20;
    soal[2].c = 0.25;
    soal[2].d = 0.50;

    soal[3].nomor = 4;
    soal[3].soal  = "\tAda berapa agama yang diakui di Indonesia?\n" \
                    "\tA. 2 Agama\n" \
                    "\tB. 6 Agama\n" \
                    "\tC. 7 Agama\n" \
                    "\tD. 1 Agama\n";
    soal[3].a = 0.20;
    soal[3].b = 0.50;
    soal[3].c = 0.25;
    soal[3].d = 0.05;

    soal[4].nomor = 5;
    soal[4].soal  = "\tMayoritas penduduk Indonesia beragama?\n" \
                    "\tA. Islam\n" \
                    "\tB. Hindu\n" \
                    "\tC. Kristen\n" \
                    "\tD. Buddha\n";
    soal[4].a = 0.50;
    soal[4].b = 0.20;
    soal[4].c = 0.25;
    soal[4].d = 0.05;

    soal[5].nomor = 6;
    soal[5].soal  = "\tDisebut hewan apakah yang hidup di dua alam sekaligus?\n" \
                    "\tA. Aves\n" \
                    "\tB. Reptil\n" \
                    "\tC. Mamalia\n" \
                    "\tD. Amfibi\n";
    soal[5].a = 0.05;
    soal[5].b = 0.20;
    soal[5].c = 0.25;
    soal[5].d = 0.50;

    soal[6].nomor = 7;
    soal[6].soal  = "\tSiapakah ilmuwan yang mendapatkan gelar bapak Sains\n" \
                    "\tModern?\n" \
                    "\tA. Ibnu Haitami\n" \
                    "\tB. Albert Einstein\n" \
                    "\tC. Galileo Galilei\n" \
                    "\tD. Alkhawarizmi\n";
    soal[6].a = 0.20;
    soal[6].b = 0.25;
    soal[6].c = 0.50;
    soal[6].d = 0.05;

    soal[7].nomor = 8;
    soal[7].soal  = "\tHewan apakah yang memiliki kemampuan mengubah warna\n" \
                    "\tsesuai dengan lingkungannya?\n" \
                    "\tA. Cicak\n" \
                    "\tB. Bunglon\n" \
                    "\tC. Tokek\n" \
                    "\tD. Kadal\n";
    soal[7].a = 0.05;
    soal[7].b = 0.50;
    soal[7].c = 0.25;
    soal[7].d = 0.20;

    soal[8].nomor = 9;
    soal[8].soal  = "\tIlmu yang mempelajari tentang peta disebut?\n" \
                    "\tA. Anatomi\n" \
                    "\tB. Antropologi\n" \
                    "\tC. Kartografi\n" \
                    "\tD. Geografi\n";
    soal[8].a = 0.05;
    soal[8].b = 0.25;
    soal[8].c = 0.50;
    soal[8].d = 0.20;

    soal[9].nomor = 10;
    soal[9].soal  = "\tTokoh penentang dalam sebuah karya sastra disebut?\n" \
                    "\tA. Protagonis\n" \
                    "\tB. Antagonis\n" \
                    "\tC. Tritagonis\n" \
                    "\tD. Intrinsik\n";
    soal[9].a = 0.20;
    soal[9].b = 0.50;
    soal[9].c = 0.25;
    soal[9].d = 0.05;

    soal[10].nomor = 11;
    soal[10].soal  = "\tGunung tertinggi di dunia adalah?\n" \
                     "\tA. Gunung Everest\n" \
                     "\tB. Gunung Denali\n" \
                     "\tC. Gunung Kilimanjaro\n" \
                     "\tD. Gunung Elbrus\n";
    soal[10].a = 0.50;
    soal[10].b = 0.20;
    soal[10].c = 0.25;
    soal[10].d = 0.05;

    soal[11].nomor = 12;
    soal[11].soal  = "\tKota \"Kembang\" adalah sebutan untuk kota?\n" \
                     "\tA. Bogor\n" \
                     "\tB. Bandung\n" \
                     "\tC. Yogyakarta\n" \
                     "\tD. Palembang\n";
    soal[11].a = 0.20;
    soal[11].b = 0.50;
    soal[11].c = 0.25;
    soal[11].d = 0.05;

    soal[12].nomor = 13;
    soal[12].soal  = "\tTokoh utama film \"Toy Story\" adalah?\n" \
                     "\tA. Bunny\n" \
                     "\tB. Buzz\n" \
                     "\tC. Woody\n" \
                     "\tD. Jessie\n";
    soal[12].a = 0.05;
    soal[12].b = 0.20;
    soal[12].c = 0.50;
    soal[12].d = 0.25;

    soal[13].nomor = 14;
    soal[13].soal  = "\tBurung yang menjadi lambang kantor pos indonesia adalah\n" \
                     "\tburung?\n" \
                     "\tA. Sriti\n" \
                     "\tB. Wallet\n" \
                     "\tC. Kenari\n" \
                     "\tD. Beo\n";
    soal[13].a = 0.25;
    soal[13].b = 0.50;
    soal[13].c = 0.20;
    soal[13].d = 0.05;

    soal[14].nomor = 15;
    soal[14].soal  = "\tApakah sebutan untuk hewan yang beraktivitas di malam\n" \
                     "\thari?\n" \
                     "\tA. Nokturnal\n" \
                     "\tB. Diurnal\n" \
                     "\tC. Normal\n" \
                     "\tD. Mamalia\n";
    soal[14].a = 0.50;
    soal[14].b = 0.25;
    soal[14].c = 0.05;
    soal[14].d = 0.20;
}

void define_hadiah() {
    int i;
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
    for (i = 0; i < 15; i++) hadiah[i].didapat = "  ";
}

void define_bantuan() {
    bantuan[0].nama  = "CALL";
    bantuan[0].usage = 0;
    bantuan[1].nama  = "50:50";
    bantuan[1].usage = 0;
    bantuan[2].nama  = "POLL";
    bantuan[2].usage = 0;
}