#include <iostream>
#include "RectangleDavidO.h"
#include "CircleDavidO.h"
#include "FractionDavidO.h"
#include "MenuDavidO.h"
#include "CircleDavidO.h"
#include "CylinderDavidO.h"
#include "BoxDavidO.h"
using namespace std;


void printMenu(RectangleDavidO*& rec1, RectangleDavidO*& rec2,RectangleDavidO*& rec3,
                                 BoxDavidO*& box1, BoxDavidO*& box2,BoxDavidO*& box3,
                                 CircleDavidO*& cir1, CircleDavidO*& cir2,CircleDavidO*& cir3,
                                 CylinderDavidO*& cyl1, CylinderDavidO*& cyl2, CylinderDavidO*& cyl3) {
    int option;
 
    int i = 0;
cout << "\n**************************************************************"
<< "\n* MENU *"
<< "\n* 1. Get & Display Smallest Area (All Objects) *"
<< "\n* 2. Get & Display Smallest volume (All Objects) *"
<< "\n* 3. Display Areas from Smallest to Largest (All Circles) *"
<< "\n* 4. Display Areas from Smallest to Largest (All Rectangles) *"
<< "\n* 5. Display Volumes from Smallest to Largest (All Cylinders)*"
<< "\n* 6. Display Volumes from Smallest to Largest (All Boxes) *"
<< "\n* 7. Display Volumes from Smallest to Largest (All Objects) *"
<< "\n* 8. Quit *"
<< "\n**************************************************************" << endl;


    do {
        cout << " Pick an option (1-8) ";
        cin >> option;

        switch (option) {
        case 1:
        
			cout << "Smallest Area is: ";
			getSmallestAreaAll(rec1, rec2, rec3,
                       box1,  box2, box3,
                       cir1, cir2, cir3,
                       cyl1, cyl2, cyl3);
			//getSmallestAreaDavidO();
       cout << endl;
			break;
       
		case 2:
			cout << "Smallest Volume is: ";
        getSmallestVolumeAll(box1, box2, box3, cyl1, cyl2, cyl3);
		//	getSmallestVolumeDavidO();
        cout << endl;
			break;
      
		case 3: 
			cout << "Smallest to largest Area (circles only): " << endl;
        getSmallestAreaCir(cir1, cir2, cir3);
		cout << endl;
         break;
        case 4:
				
			cout << "Smallest to largest Area (rectangles only): " << endl;
         getSmallestAreaRec(rec1, rec2, rec3);
		 cout << endl;
         break;
        case 5:
			cout << "Smallest to largest Volume (cylinders only): " << endl;
         getSmallestVolumeCyl(cyl1, cyl2, cyl3);
		 cout << endl;
         break;
        case 6:
			cout << "Smallest to largest Volume (boxes only): " << endl;
         getSmallestVolumeBox(box1, box2, box3);
		 cout << endl;
         break;
        case 7:
         cout << "All volumes from smallest to largest: " << endl;
			getSmallestVolumeAll2(box1, box2, box3, cyl1, cyl2, cyl3);
			cout << endl;
         break;
        case 8:
			cout << endl;
        cout << "Thanks, have fun." << endl;
		cout << endl;

		delete box1;
		delete box2;
		delete box3;
		//ETCd

         break;

        default:
			cout << endl;
         cout << "Wrong Option. Use 1 through 8";
         cout << endl;
        
    }
} while (option!= 8);

}

void menu() { // 1. Do NOT change or modify the given statements.
// 2. Add code to perform the operations as
// instructed (the instructions are provided
// as comments or comment blocks).

PointDavidO point(FractionDavidO(0,1),FractionDavidO(0,1));

cout << "Starting at Line 50:" << endl; // Line 50

FractionDavidO* frPtrA =
new FractionDavidO(4, 1);
cout << *frPtrA << endl; 
	
FractionDavidO* frPtrB = 
new FractionDavidO(3, 1); 
cout << *frPtrB << endl;

FractionDavidO* frPtrC =
new FractionDavidO(2, 1);
cout << *frPtrC << endl; 
	
FractionDavidO* frPtrD = 
new FractionDavidO(9, 1); 
cout << *frPtrD << endl;

cout << "\nStarting at Line 1880:" << endl; // Line 1880

CircleDavidO* cPtrA =
new CircleDavidO(point,*frPtrA); 
cout << *cPtrA << endl; 

CircleDavidO* cPtrB =
new CircleDavidO(point,*frPtrB); 
cout << *cPtrB << endl; 

CircleDavidO* cPtrC =
new CircleDavidO(point, *frPtrC);
cout << *cPtrC << endl;

cout << "\nStarting at Line 2680:" << endl; // Line 2680
CylinderDavidO* cyPtrA =
new CylinderDavidO(*cPtrC, *frPtrC); 
cout << *cyPtrA << endl; 

CylinderDavidO* cyPtrB =
new CylinderDavidO(*cPtrA, *frPtrA); // Line 3100
cout << *cyPtrB << endl; // display the information of the above object

CylinderDavidO* cyPtrC =
new CylinderDavidO(*cPtrB, *frPtrB); // Line 3200
cout << *cyPtrC << endl; // display the information of the above object

PointDavidO UR1(FractionDavidO(10,1), FractionDavidO(10,1));
PointDavidO LL(FractionDavidO(1,1), FractionDavidO(1,1));
PointDavidO UR2(FractionDavidO(9,1), FractionDavidO(9,1));
PointDavidO UR3(FractionDavidO(11,1), FractionDavidO(11,1));

cout << "\nStarting at Line 3300:" << endl; // Line 3300
RectangleDavidO* rPtrA =
new RectangleDavidO(LL, UR1); // Line 3400
cout << *rPtrA << endl; // display the information of the above object

RectangleDavidO* rPtrB =
new RectangleDavidO(LL, UR2); // Line 3500
cout << *rPtrB << endl; // display the information of the above object

RectangleDavidO* rPtrC =
new RectangleDavidO(LL, UR3); // Line 3600
cout << *rPtrC << endl; // display the information of the above object

cout << "\nStarting at Line 3650:" << endl; // Line 3650
BoxDavidO* boxPtrA =
new BoxDavidO (*rPtrA, *frPtrD); // Line 3700
cout << *boxPtrA << endl; // display the information of the above object

BoxDavidO* boxPtrB =
new BoxDavidO(*rPtrB, *frPtrD); // Line 3800
cout << *boxPtrB << endl; // display the information of the above object

BoxDavidO* boxPtrC =
new BoxDavidO(*rPtrC, *frPtrD); // Line 3700
cout << *boxPtrC << endl; // display the information of the above object

printMenu(rPtrA, rPtrB, rPtrC, boxPtrA, boxPtrB, boxPtrC,
	cPtrA, cPtrB, cPtrC, cyPtrA, cyPtrB, cyPtrC);

}




	void createFraction(FractionDavidO *&frPt) {
		int n;
		int d;


		cin >> n;

		cout << " / ";

		cin >> d;

		if (d == 0) {

			d = 1;			
			n = 0;

			cout << "Error: Cannot Divide by Zero" << endl;				
			cout << "Assuming numerator = 0" << endl;

		}

		if (d < 0) {
			n = -n;
			d = -d;
		}


		frPt = new FractionDavidO(n, d);
	}

	void headerDavidO(void) {
		cout << "\nCIS 25 - C++ Programming\n";
		cout << "Laney College\n";
		cout << "David Odza\n\n";
		cout << "Assignment Information --\n";
		cout << " Assignment Number: Lab 7\n";
		cout << " Exercise #1\n";
		cout << " Written by: David Odza\n";
		cout << " Due Date: 12/13/2013\n" << endl;
	}



void getSmallestAreaAll(RectangleDavidO*& rec1, RectangleDavidO*& rec2,RectangleDavidO*& rec3,
                                 BoxDavidO*& box1, BoxDavidO*& box2,BoxDavidO*& box3,
                                 CircleDavidO*& cir1, CircleDavidO*& cir2,CircleDavidO*& cir3,
                                 CylinderDavidO*& cyl1, CylinderDavidO*& cyl2, CylinderDavidO*& cyl3) {
		//SORT ARRAY										 
									
	FractionDavidO iAry[12] = {rec1->getAreaDavidO(), rec2->getAreaDavidO(), rec3->getAreaDavidO(), 
		box1->getAreaDavidO(), box2->getAreaDavidO(), box3->getAreaDavidO(),
	cir1->getAreaDavidO(), cir2->getAreaDavidO(), cir3->getAreaDavidO(), 
		cyl1->getAreaDavidO(), cyl2->getAreaDavidO(), cyl3->getAreaDavidO()};

	for(int i=1; i<(12); i++) {
		int k;
		for(int j=0; j<i; j++) {
			
			FractionDavidO temp(0,1);
			//odd goes down, even goes up
			// smaller goes down, bigger goes up
			if((iAry[j]) > (iAry[i])) {

				temp=iAry[j];

				iAry[j]=iAry[i];

				for(k=i; k>j; k--)

					iAry[k]=iAry[k-1];

				iAry[k+1]=temp;
			}
		}
	}


		cout << iAry[0] << endl;
		 
	
	
}

void getSmallestVolumeAll2(BoxDavidO*& box1, BoxDavidO*& box2,BoxDavidO*& box3,                                
                         CylinderDavidO*& cyl1, CylinderDavidO*& cyl2, CylinderDavidO*& cyl3) {
		//SORT ARRAY										 
									
	FractionDavidO iAry[6] = {box1->getVolDavidO(), box2->getVolDavidO(), box3->getVolDavidO(),	 
		cyl1->getVolDavidO(), cyl2->getVolDavidO(), cyl3->getVolDavidO()};

	for(int i=1; i<(6); i++) {
		int k;
		for(int j=0; j<i; j++) {
			
			FractionDavidO temp(0,1);
			//odd goes down, even goes up
			// smaller goes down, bigger goes up
			if((iAry[j]) > (iAry[i])) {

				temp=iAry[j];

				iAry[j]=iAry[i];

				for(k=i; k>j; k--)

					iAry[k]=iAry[k-1];

				iAry[k+1]=temp;
			}
		}
	}

	
	for (int i=0; i<6; i++) {

		cout << iAry[i] << endl;
		 
	}
	
}


void getSmallestVolumeAll(BoxDavidO*& box1, BoxDavidO*& box2,BoxDavidO*& box3,                                
                         CylinderDavidO*& cyl1, CylinderDavidO*& cyl2, CylinderDavidO*& cyl3) {
		//SORT ARRAY										 
									
	FractionDavidO iAry[6] = {box1->getVolDavidO(), box2->getVolDavidO(), box3->getVolDavidO(),	 
		cyl1->getVolDavidO(), cyl2->getVolDavidO(), cyl3->getVolDavidO()};

	for(int i=1; i<(6); i++) {
		int k;
		for(int j=0; j<i; j++) {
			
			FractionDavidO temp(0,1);
			//odd goes down, even goes up
			// smaller goes down, bigger goes up
			if((iAry[j]) > (iAry[i])) {

				temp=iAry[j];

				iAry[j]=iAry[i];

				for(k=i; k>j; k--)

					iAry[k]=iAry[k-1];

				iAry[k+1]=temp;
			}
		}
	}


	
		cout << iAry[0] << endl;
	
		 
	

}



void getSmallestAreaCir(CircleDavidO*& cir1, CircleDavidO*& cir2, CircleDavidO*& cir3) {
		//SORT ARRAY										 
									
	FractionDavidO iAry[3] = {cir1->getAreaDavidO(), cir2->getAreaDavidO(), cir3->getAreaDavidO()};

	for(int i=1; i<(3); i++) {
		int k;
		for(int j=0; j<i; j++) {
			
			FractionDavidO temp(0,1);
			//odd goes down, even goes up
			// smaller goes down, bigger goes up
			if((iAry[j]) > (iAry[i])) {

				temp=iAry[j];

				iAry[j]=iAry[i];

				for(k=i; k>j; k--)

					iAry[k]=iAry[k-1];

				iAry[k+1]=temp;
			}
		}
	}


	for (int i = 0; i < 3; i++) {
		cout << iAry[i] << endl;
	}
		 
	

}

void getSmallestAreaRec(RectangleDavidO*& rec1, RectangleDavidO*& rec2, RectangleDavidO*& rec3) {
		//SORT ARRAY										 
									
	FractionDavidO iAry[3] = {rec1->getAreaDavidO(), rec2->getAreaDavidO(), rec3->getAreaDavidO()};

	for(int i=1; i<(3); i++) {
		int k;
		for(int j=0; j<i; j++) {
			
			FractionDavidO temp(0,1);
			//odd goes down, even goes up
			// smaller goes down, bigger goes up
			if((iAry[j]) > (iAry[i])) {

				temp=iAry[j];

				iAry[j]=iAry[i];

				for(k=i; k>j; k--)

					iAry[k]=iAry[k-1];

				iAry[k+1]=temp;
			}
		}
	}


	for (int i = 0; i < 3; i++) {
		cout << iAry[i] << endl;
	}
		 
	

}

void getSmallestVolumeCyl(CylinderDavidO*& cyl1, CylinderDavidO*& cyl2, CylinderDavidO*& cyl3) {
		//SORT ARRAY										 
									
	FractionDavidO iAry[3] = {cyl1->getVolDavidO(), cyl2->getVolDavidO(), cyl3->getVolDavidO()};

	for(int i=1; i<(3); i++) {
		int k;
		for(int j=0; j<i; j++) {
			
			FractionDavidO temp(0,1);
			//odd goes down, even goes up
			// smaller goes down, bigger goes up
			if((iAry[j]) > (iAry[i])) {

				temp=iAry[j];

				iAry[j]=iAry[i];

				for(k=i; k>j; k--)

					iAry[k]=iAry[k-1];

				iAry[k+1]=temp;
			}
		}
	}


	for (int i = 0; i < 3; i++) {
		cout << iAry[i] << endl;
	}
		 
	

}
void getSmallestVolumeBox(BoxDavidO*& box1, BoxDavidO*& box2, BoxDavidO*& box3) {
		//SORT ARRAY										 
									
	FractionDavidO iAry[3] = {box1->getVolDavidO(), box2->getVolDavidO(), box3->getVolDavidO()};

	for(int i=1; i<(3); i++) {
		int k;
		for(int j=0; j<i; j++) {
			
			FractionDavidO temp(0,1);
			//odd goes down, even goes up
			// smaller goes down, bigger goes up
			if((iAry[j]) > (iAry[i])) {

				temp=iAry[j];

				iAry[j]=iAry[i];

				for(k=i; k>j; k--)

					iAry[k]=iAry[k-1];

				iAry[k+1]=temp;
			}
		}
	}


	for (int i = 0; i < 3; i++) {
		cout << iAry[i] << endl;
	}
		 
	

}
	