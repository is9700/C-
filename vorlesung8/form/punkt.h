#ifndef PUNKT_H
#define PUNKT_H

#include <iostream>

class punkt {
private:
	int x, y;
public:
    punkt(int x_koor = 0, int y_koor = 0);
    punkt(const punkt& orig);
    ~punkt();
    int getX() const {return x;}
    int getY() const {return y;}
    void setX(int);
    void setY(int);
};

#endif
