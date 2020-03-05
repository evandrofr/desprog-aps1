#include <math.h>

#include "geometry.h"

double abso (double x){
  if(x < 0) return -x;
  return x;
}

double modulo (double x, double y){
  return sqrt((pow(x,2)+pow(y,2)));
}


int verify(point p, point a, point b) {
  double det = (a.x - b.x) * (p.y - p.y)  -  (a.y - b.y) * (p.x - (p.x+1));

  double s = ((a.x - b.x) * (b.y - p.y) - (a.y - b.y) * (b.x - (p.x+1)))/ det ;
  //double t = ((p.x - (p.x+1)) * (b.y - p.y) - (p.y - p.y) * (b.x - (p.x+1)))/ det ;

  double x = (p.x+1) - s;
  double y = p.y;


  if((a.x == p.x && a.y == p.y)||(b.x == p.x && b.y == p.y)) return 2;

  if((y > a.y && y > b.y) || (y < a.y && y < b.y)) return 0;

  if(a.y == b.y) {
    if(p.y == a.y){
      if(a.x < b.x){
        if(p.x > b.x) return 0;
        if(p.x > a.x && p.x < b.x) return 2;
      }
      if(a.x > b.x){
        if(p.x > a.x) return 0;
        if(p.x > b.x && p.x < a.x) return 2;
      }
      return 0;
    }
    return 0;
}

if(x < p.x) return 0;

  if(a.y > b.y){
    if(p.y == b.y) return 0;
  } else if(b.y > a.y){
    if(p.y == a.y) return 0;
  }

  if(abso(p.x - x) < 1e-7) return 2;

  




  if(x > p.x) return 1;


return 0;
}

int inside(point p, point poly[], int n) {
  return 0;
}