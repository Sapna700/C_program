#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int num, i, y, x = 40;
    printf("\nEnter your number for \ngenerating the pyramid:\n");
    scanf("%d", &num);
    for (y = 0; y <= num; y++) {
        gotoxy(x, y + 1);
        for (i = 0 - y; i <= y; i++)
            printf("%3d", abs(i));
        x = x - 3;
    }
    return 0;
}
