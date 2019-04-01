
#ifndef RUBIKSCUBEV3_DYNAMIC_H
#define RUBIKSCUBEV3_DYNAMIC_H
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>


#define WHITE 1
#define GREEN 2
#define RED 3
#define BLUE 4
#define ORANGE 5
#define YELLOW 6
#define BUFFER 7
#define tn (-1)

#define size 3
#define nbface 7
//HERE CODE

struct Face{
    int color[size][size]; //position sur la face d'un élément
    char symbol;
    int numFace;

};

struct Cube{ //Here structure of the cube
    struct Face face[nbface]; //For display

    struct Face FrontFace;
    struct Face TopFace;
    struct Face BackFace;
    struct Face RightFace;
    struct Face LeftFace;
    struct Face DownFace;
    struct Face BufferFace;
};

struct Cube cube; // Create Structure Cube

void initialize_cube();
int view_choice(); // Get choice of the user (1 = Rx, 2 = Ry or 3=Rz ) And change the orientation of the cube
void fill_face(int Fce); // Create face of the cube and fill them with color
void effect_butter_opposite(int positive_sense,int negative_sense); //effect to rotate opposite face
void butter_effect_rotate(int R);
void hundred_eighty(int Fce); //Permit 180°
void ninety(int Fce);//Permit 90°
void play(); // menu console to play
void rotates(); //Movement right()
void rx(); //AXIS X -> horizontal
void ry(); //AXIS Y | vertical
void rz(); //AXIS Z O 3D



#endif // RUBIKSCUBEV3_DYNAMIC_H
