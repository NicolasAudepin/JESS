#ifndef OBJ_GRAPHIQUES_H_INCLUDED
#define OBJ_GRAPHIQUES_H_INCLUDED

typedef struct
{
    int x, y;
    int couleur;
} Point;

void afficher_point(Point p);
void effacer_point(Point p);

typedef struct
{
    Point ext1,ext2;
    int couleur; // ca sera la couleur spécifique pour la ligne et pas pour les differents points.

} Ligne;

Ligne init_ligne(Point pt1, Point pt2,int c);
void afficher_ligne (Ligne l);
void effacer_ligne (Ligne l);

typedef struct
{
    Point p1;
    Ligne hauteur, largeur;
    int couleur; // couleur spécifique au rectangle
} Rectangle;

void afficher_rectangle (Rectangle rect);


#endif // OBJ_GRAPHIQUES_H_INCLUDED
