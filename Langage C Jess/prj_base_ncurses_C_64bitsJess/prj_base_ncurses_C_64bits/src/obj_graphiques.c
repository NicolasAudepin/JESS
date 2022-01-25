#include <stdlib.h>
#include <ncurses.h>
#include <math.h>
#include "obj_graphiques.h"
#include "ncurses_addons.h"


void afficher_point(Point p)
{
    move(p.y,p.x); /* p.y et p.x */

    attron(COLOR_PAIR(GREEN_ON_BLACK));
    printw("*");
    attroff(COLOR_PAIR(GREEN_ON_BLACK));

}


void effacer_point(Point p)
{
    move(p.y, p.x);

    attron(COLOR_PAIR(BLACK_ON_BLACK));
    printw("*");
    attroff(COLOR_PAIR(BLACK_ON_BLACK));

}

Ligne init_ligne(Point pt1, Point pt2,int c)
{


    Ligne l;

    l.ext1= pt1;
    l.ext2= pt2;
    l.couleur= c;

    return l;
}

void afficher_ligne (Ligne l)
{
    if (l.ext2.x!=l.ext1.x)
    {
        float pente= (float)(l.ext2.y-l.ext1.y)/(l.ext2.x-l.ext1.x);
        float b= l.ext1.y-(pente*l.ext1.x);

        int i;

        for (i=l.ext1.x; i<l.ext2.x-l.ext1.x; i++)
    {
        Point P;
        P.x=i;
        P.y=(pente*i)+b;
        afficher_point(P);
    }
    }

        int j;
    //int taille = sqrt(pow(l.ext2.x-l.ext1.x,2)+pow(l.ext2.y-l.ext1.x,2));

        for (j=l.ext1.y; j<l.ext2.y-l.ext1.y; j++)
        {
        Point P;
        int a=0;
        P.x= a;
        P.y=j;
        afficher_point(P);
        }
    }



void effacer_ligne (Ligne l)
{
    float pente= (float)(l.ext2.y-l.ext1.y)/(l.ext2.x-l.ext1.x);
    float b= l.ext1.y-(pente*l.ext1.x);

    int i;

    for (i=l.ext1.x; i<l.ext2.x-l.ext1.x; i++)
    {

        Point P;
        P.x=i;
        P.y=(pente*i)+b;
        effacer_point(P);
    }
}


Ligne init_rectangle(Point p2, Point p3, Point p4, int couleur)
{

    Ligne l;

    l.ext2= p2;
    l.ext3= p3;
    l.ext4=p4;
    l.couleur= b;

    return l;
}


void afficher_rectangle (Rectangle rect)
{

    afficher_rectangle(r);

}
