#include <iostream>
#include <vector>

struct Points {
  int x,y;
};

Points points[3] {{1,2}, {3,4}, {5,6}};
int x2 = points[2].x;

struct Array{
  Points elem[3];
};

Array points2 {{1,2}, {3,4}, {5,6}};
int y2 = points2.elem[2].y;
