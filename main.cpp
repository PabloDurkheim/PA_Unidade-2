#include <iostream>
#include "sculptor.h"
#include "sculptor.cpp"
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

int main()
{

    //define o tamanho
    Sculptor draw(60,45,55);

    //define a cor
    draw.setColor(0,0,139, 1);

    //ativa o voxel na posicao
    draw.putVoxel(5,5,10);
    //desativa
    //draw.cutVoxel(5,5,10);


    //ativa todos os voxel no intervalo
    //draw.putBox(10, 15, 12, 33, 1, 8);
    //desativa
    //draw.cutBox(10, 15, 12, 33, 1, 8);

    //Ativa todos os voxels que satisfazem à equação da esfera e atribui aos mesmos a cor atual de desenho
    //draw.putSphere(10, 10, 5, 3);
    //desativa
    //draw.cutSphere(10, 10, 5, 3);

    //Ativa todos os voxels que satisfazem à equação do elipsóide e atribui aos mesmos a cor atual de desenho
    //draw.putEllipsoid(10, 10, 5, 3, 4, 5);
    //desativa
    //draw.cutEllipsoid(10, 10, 5, 3, 4, 5);

    draw.writeOFF((char*)"trono.off");


    return 0;
}
