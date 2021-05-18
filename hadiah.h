typedef struct h {
    char *nominal;
    char *didapat;
} Hadiah;

Hadiah hadiah[15];

void define_hadiah() {
    hadiah[0].nominal  =        "64.000";
    hadiah[1].nominal  =       "125.000";
    hadiah[2].nominal  =       "250.000";
    hadiah[3].nominal  =       "500.000";
    hadiah[4].nominal  =     "1.000.000";
    hadiah[5].nominal  =     "2.000.000";
    hadiah[6].nominal  =     "4.000.000";
    hadiah[7].nominal  =     "8.000.000";
    hadiah[8].nominal  =    "16.000.000";
    hadiah[9].nominal  =    "32.000.000";
    hadiah[10].nominal =    "64.000.000";
    hadiah[11].nominal =   "125.000.000";
    hadiah[12].nominal =   "250.000.000";
    hadiah[13].nominal =   "500.000.000";
    hadiah[14].nominal = "1.000.000.000";
    for (int i = 0; i < 15; i++) hadiah[i].didapat = "  ";
}