#include<iostream>
#include <algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect X,Rect Y){
     double a = max(0.0, min(X.x + X.w, Y.x + Y.w) - max(X.x, Y.x));
     double b = max(0.0, min(X.y, Y.y) - max(X.y - X.h, Y.y - Y.h));
    return a * b;
}
