#include "obj_graphiques.h"
#include "ncurses_addons.h" /* blibliothèque de couleur ajoutée*/

void afficher_point(Point p)
{
    move (p.y,p.x);/*je bouge au coordonnées de p*/
    attron(COLOR_PAIR(p.couleur));/*je donne la couleur du point*/
    printw ("*");
    attroff(COLOR_PAIR(p.couleur));

}
Ligne init_ligne (Point pt1, Point pt2, int couleur  )
{
    Ligne lg;
    if (pt1.x< pt2.x)      /* conditionne, qui indique que pt1 est le premier point de la ligne sachant que x et y */
    {
        lg.ext1 = pt1;
        lg.ext2 = pt2;
    }
    else
    {
        lg.ext2 = pt1;
        lg.ext1 = pt2;
    }

    lg.couleur = couleur;

    return  lg;
}
void  afficher_ligne(Ligne f)
{
    float  pente;
    Point pfctx;/* création d'un point qui varie en focntion de x */
    Point pfcty;/* création d'un point qui varie en focntion de y */
    float b;

    if (f.ext2.x != f.ext1.x)
    {

    pente = (float)(f.ext2.y - f.ext1.y)/(f.ext2.x - f.ext1.x);/* pente  en float si non a cause de la division d'entier on aurait 0 si le quotient était plus grand que le dénominateur , rajout float pour focr d'avoi un float*/
    b = f.ext1.y- pente *f.ext1.x;/* valeur b de l'equation y=ax+b* en fonction de ext2 car b constant trouver la solation grace debug tabaleau de valeurs*/
    for (pfctx.x = f.ext1.x; pfctx.x<f.ext2.x; pfctx.x++) /* boucle permettant de faire varié x */

    {

        pfctx.y = pfctx.x* pente + b;/* calcul de y pour chaque x*/
        pfctx.couleur = f.couleur;/* point prend la couleu de la ligne */
        afficher_point(pfctx); /*utilisation de la fonction afficher pour afficher tout les points*/
    }} else {

    for ()


    }
}

void afficher_rectangle (Rectangle r)
{
//
//    coinH.x=hauteur.ext1.x;
//    coinH.y=hauteur.ext1.y;
//    int  pente;
//    Point pfctx;
//    float b;
//    pente = (hauteur.ext2.y -coinH.y)/(hauteur.ext2.x - coinH.x);
//    b = coinH.y- pente *coinH.x;
//    for (pfctx.x = coinH.x; pfctx.x<hauteur.ext2.x; pfctx.x++)
//
//    {
//
//        pfctx.y = pfctx.x* pente + b;/* calcul de y pour chaque x*/
//        pfctx.couleur = f.couleur;/* point prend la couleu de la ligne */
//        afficher_point(pfctx); /*utilisation de la fonction afficher pour afficher tout les points*/
//    }



}
