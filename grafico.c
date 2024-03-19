#include <stdio.h>
#include <ncurses.h>

int main() {
    int data[] = {10, 20, 15, 30, 25};
    int maxData = 30;
    int numData = sizeof(data) / sizeof(data[0]);

    initscr();
    clear();
    noecho();
    curs_set(0);

    for (int i = 0; i < numData; i++) {
        mvprintw(i, 0, "%d |", data[i]);
        for (int j = 0; j < data[i]; j++) {
            printw("#");
        }
        printw("\n");
    }

    printw("  +");
    for (int i = 0; i < maxData; i++) {
        printw("-");
    }
    printw("\n   ");
    for (int i = 0; i < maxData; i += 5) {
        printw("%d", i / 10);
    }
    printw("\n");

    refresh();
    getch();
    endwin();

    return 0;
}
