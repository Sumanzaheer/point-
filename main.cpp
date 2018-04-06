#include <iostream>
#include"point.h"
using namespace std;

int main()
{
    point a(1.8,2.6);     /*parameterize constructor call*/
    cout <<"Point A :"<< a<<endl;
    point b(3.0,5.5);     /*parameterize constructor call*/
    cout <<"Point B :"<<b<<endl;
    point *c;
    point d;
    b=point(2.0,6.0);     /*parameterize constructor call*/
    cout <<"point B : " <<b<<endl;
    c=new point(4.0,8.0); /*parameterize constructor call*/
    cout <<"Point C :"<<*c<<endl;
    d=b+a;      /*point b add in point a*/
    d.Display();
    cout <<"Point D :"<<d<<endl;
    /*comparison of point a and b*/
    if(b>a)
    {
        cout <<"b>a"<<endl;
    }
    else
        if(b<a)
    {
        cout <<"b<a";
    }
    else
    {
        cout <<"b=a";
    }
    d=a+10.4;
    d.Display();
    cout <<d<<endl;
}
