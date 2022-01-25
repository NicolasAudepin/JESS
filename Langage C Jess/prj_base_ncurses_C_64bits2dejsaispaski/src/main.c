#include <stdlib.h>
#include <ncurses.h>
#include "ncurses_addons.h"
#include "obj_graphiques.h"

int main(void)
 {
    /************************************************/
    /*          ncurses initialization              */
    /************************************************/
    init_ncurses();


    /************************************************/
    /*          Beginning of the program            */
    /************************************************/
    Point h;
    h.x=5;
    h.y=15;
    Point g;
    g.x=5;
    g.y=55;
    int c=BLUE_ON_BLACK;
    Ligne L= init_ligne (h,g,c);
    afficher_ligne(L);
    refresh();
    // waiting for a key press//
    getch();


    /************************************************/
    /*          End of the program                  */
    /************************************************/
    // Close properly ncurses//
    endwin();

    return EXIT_SUCCESS;
}
