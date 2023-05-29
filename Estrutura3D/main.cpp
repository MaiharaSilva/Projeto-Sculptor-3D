#include <iostream>
#include "Sculptor.h"
#include <fstream>

using namespace std;

/** Projeto de uma escultura 3D
  * Um dirigíve - Zepelim
  *autor - Maihara Silva
  */




int main() {
  
  //dimensao
  Sculptor zep(31,31,28);

  //leme lateral
  zep.setColor(0.85, 0.64, 0.12, 1);//amarelo
  zep.putBox(7,24,12,15,5,8);

  //Formato
  zep.setColor(0.28, 0.30, 0.31, 1);//cinza
  zep.putEllipsoid(15, 15, 15, 7, 7, 14);
  zep.cutEllipsoid(15, 25, 28, 6, 6, 13);

  //Cabine
  zep.setColor(0.72, 0.52, 0.04, 1);//marrom
  zep.putBox(13,18,06,10,16,23);

  //leme profundidade
  zep.setColor(0.72, 0.52, 0.04, 1);//marrom
  zep.putBox(14,17,19,24,5,8);
  
  zep.writeOFF("zepelim.off"); 


return 0;
}