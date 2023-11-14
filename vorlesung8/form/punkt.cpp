#include "punkt.h"

punkt::punkt(int x, int y) : x {x}, y {y} {
  std::cout << "Konstruktor Punkt" << std::endl;
}

punkt::punkt(const punkt& obj) : x(obj.x), y(obj.y){
	std::cout << "Copy-Konstruktor Punkt" << std::endl;
}


punkt::~punkt(){
	std::cout << "Destruktor Punkt" << std::endl;
}


void punkt::setX(int x_koor){
	x = x_koor;
}

void punkt::setY(int y_koor){
	y = y_koor;
}
