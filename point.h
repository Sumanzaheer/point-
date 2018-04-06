#include<iostream>
using namespace std;

class point
{
public:
    point()    //Null constructor
    {
        this->x=0;
        this->y=0;
    }
    point(float xx, float yy)    //parameterized constructor
    {
        this->x=xx;
        this->y=yy;
    }
    point(point& Copy)      //copy constructor
    {
        this->x=Copy.x;
        this->y=Copy.y;
    }
    float getx()      //getters
    {
        return this->x;
    }
    float gety()
    {
        return this->y;
    }
    void setx(float a)    //setters
    {
        this->x=a;
    }
    void sety(float b)
    {
        this->y=b;
    }
    void Display()     //display function
    {
        cout << "point"<<endl;
        cout <<"x-coordinate :"<<this->x<<endl;
        cout <<"y-coordinate :"<<this->y<<endl;
    }
    point operator +(point& A)
    {
        point a;
        a.x=this->x+A.x;
        a.y=this->y+A.y;
        return a;
    }
    point operator -(point& A)
    {
        point a;
        a.x=this->x-A.x;
        a.y=this->y-A.y;
        return a;
    }
    void operator =(const point& A)
    {
        this->x=A.x;
        this->y=A.y;
    }
    bool operator >(point& A)
    {
        if(this->x>A.x && this->y)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
        bool operator <(point& A)
        {
            if(A.x<this->x && A.y<this->y)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        point operator +(float A)
        {
            point a;
            a.x=this->x+A;
            a.y=this->y+A;
            return a;
        }
private:
    float x;
    float y;
};
ostream& operator<<(ostream& o,point x)
{
    return o<<"("<<x.getx()<<","<<x.gety()<<")"<<endl;
};
