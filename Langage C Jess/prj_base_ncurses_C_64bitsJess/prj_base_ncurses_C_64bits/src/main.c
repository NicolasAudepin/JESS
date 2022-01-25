#include <stdlib.h>
#include <ncurses.h>
#include <math.h>
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

    // EXAMPLE: Cursor move and text in color printing...

    //Point p;
    Ligne l;
    Rectangle rect;
    //afficher_point(p);
    //effacer_point(p);
    Point pt1;
    pt1.x = 10;
    pt1.y = 25;
    Point pt2;
    pt2.x=50;
    pt2.y=25;
    int c;
    int a;
    l=init_ligne(pt1,pt2,c);
    rect=init_rectangle(p2,p3,p4,a);

    //afficher_ligne(l);
    //effacer_ligne(l);
    afficher_rectangle(r);



    // refresh window needed to display all the text
    refresh();
    // waiting for a key press: pause dans l'execution du programme
    getch();


    /************************************************/
    /*          End of the program                  */
    /************************************************/
    // Close properly ncurses
    endwin();

    return EXIT_SUCCESS;
}
