#ifndef OBJ_GRAPHIQUES_H_INCLUDED
#define OBJ_GRAPHIQUES_H_INCLUDED

typedef struct
{
    int x, y;
    int couleur;
} Point;

void afficher_point(Point p);/* declaration de la fonction afficher point)*/
typedef struct
{
    Point ext1, ext2;
    int couleur;
}Ligne;
Ligne init_ligne (Point pt1, Point pt2, int couleur  );/*déclaration  ela fonction init_ligne*/
void afficher_ligne(Ligne f);
typedef struct
{
    Point coinH;
     int largueur;
      int hauteur;

    int couleur;
}Rectangle;
void afficher_rectangle (Rectangle r);

#endif // OBJ_GRAPHIQUES_H_INCLUDED
