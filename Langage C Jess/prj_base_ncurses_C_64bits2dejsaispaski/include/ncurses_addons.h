#ifndef NCURSES_ADDONS_H_INCLUDED
#define NCURSES_ADDONS_H_INCLUDED

#include <ncurses.h>


enum FG_BG_COLOR_PAIRS {BLACK_ON_BLACK = 1, RED_ON_BLACK, GREEN_ON_BLACK, YELLOW_ON_BLACK, BLUE_ON_BLACK, MAGENTA_ON_BLACK, CYAN_ON_BLACK, WHITE_ON_BLACK}; // Number 0 is RESERVED by the terminal
/*liste des couleur*/
void init_ncurses();
void mapColors();

#endif // NCURSES_ADDONS_H_INCLUDED
