
#ifndef MENUDAVIDO_H
#define MENUDAVIDO_H
#include "FractionDavidO.h"
#include "BoxDavidO.h"
#include "CircleDavidO.h"
#include "CylinderDavidO.h"
#include "PointDavidO.h"
#include "RectangleDavidO.h"


void headerDavidO(void);

void createFraction(FractionDavidO *&);


void menu(void); 

void printMenu(RectangleDavidO*&, RectangleDavidO*&,RectangleDavidO*&,
                                 BoxDavidO*&, BoxDavidO*&,BoxDavidO*&,
                                 CircleDavidO*&, CircleDavidO*&,CircleDavidO*&,
                                 CylinderDavidO*&, CylinderDavidO*&, CylinderDavidO*&);

void getSmallestAreaAll(RectangleDavidO*&, RectangleDavidO*&,RectangleDavidO*&,
                                 BoxDavidO*&, BoxDavidO*&,BoxDavidO*&,
                                 CircleDavidO*&, CircleDavidO*&,CircleDavidO*&,
                                 CylinderDavidO*&, CylinderDavidO*&, CylinderDavidO*&);
void getSmallestAreaAll2(RectangleDavidO*&, RectangleDavidO*&,RectangleDavidO*&,
                                 BoxDavidO*&, BoxDavidO*&,BoxDavidO*&,
                                 CircleDavidO*&, CircleDavidO*&,CircleDavidO*&,
                                 CylinderDavidO*&, CylinderDavidO*&, CylinderDavidO*&);

void getSmallestVolumeAll(BoxDavidO*&, BoxDavidO*&,BoxDavidO*&,                             
                          CylinderDavidO*&, CylinderDavidO*&, CylinderDavidO*&);
void getSmallestVolumeAll2(BoxDavidO*&, BoxDavidO*&,BoxDavidO*&,                             
                          CylinderDavidO*&, CylinderDavidO*&, CylinderDavidO*&);

void getSmallestAreaCir(CircleDavidO*&, CircleDavidO*&,CircleDavidO*&);
void getSmallestAreaRec(RectangleDavidO*&, RectangleDavidO*&,RectangleDavidO*&);
void getSmallestVolumeBox(BoxDavidO*&, BoxDavidO*&,BoxDavidO*&);
void getSmallestVolumeCyl(CylinderDavidO*&, CylinderDavidO*&, CylinderDavidO*&);


#endif



