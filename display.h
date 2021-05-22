#include<stdio.h>

#ifdef _WIN32
#define CLEAR "cls"
#include<windows.h>
void gotoxy(int x, int y) {
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
#else
#define CLEAR "clear"
void gotoxy(int x, int y) {
    printf("\x1b[%d;%df", y, x);
}
#endif
