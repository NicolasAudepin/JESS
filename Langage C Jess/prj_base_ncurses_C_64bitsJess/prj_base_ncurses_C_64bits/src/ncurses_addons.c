#include <stdlib.h>
#include "ncurses_addons.h"


void init_ncurses()
{
    // Creating the window terminal
    if(initscr()==NULL)
    {
        printf("Failed to create a ncurses window terminal\n");
        exit(EXIT_FAILURE);
    }
    // Verifying terminal color support
    if (has_colors() == FALSE)
    {
        endwin();
        printf("Your terminal does not support color\n");
        exit(EXIT_FAILURE);
    }
    // Start ncurses color system
    start_color();
    // Create foreground/background color pairs
    mapColors();
}


void mapColors()
{
    unsigned short i;

    // Number 0 for init_pair and COLOR_PAIR is RESERVED by the terminal
    // so BLACK_ON_BLACK begins the enum at 1
    // but ncurses COLORS constants start from 0 (see ncurses.h)
    for(i=BLACK_ON_BLACK; i<WHITE_ON_BLACK; i++)
    {
        init_pair(i, i-1, COLOR_BLACK);
    }
}
