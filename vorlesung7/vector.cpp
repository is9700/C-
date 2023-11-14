#include "vector.h"

#include <iostream>
using namespace std;
Vector::Vector(int size ) : size{size},feld{new double[size]} {}

Vector::~Vector()
{
delete []feld ;

cout<<"terminated"<<endl ;
}

Vector::Vector(const Vector &orig):   Vector(size)  
{   
    for(int i=0; i<orig.size; i++)
    {
        this->feld[i]=orig.feld[i];
    }


}

bool Vector::isOkey(int index)
{
    return index>0 &&index<size;

}


void Vector::set(int index, double val)
{
    if(isOkey(index))
    {
        feld[index]=val;
    }
    
}

double Vector::get(int index)
{
    if(isOkey(index))
    {
        return  feld[index];
    }
return -1;

}

