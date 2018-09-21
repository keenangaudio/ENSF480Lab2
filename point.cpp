
#include "point.h"
#include <stdio.h>
#include <math.h>

  Point::Point(float x_, float y_, float z_) id(++counter){
    x = x_;
    y = y_;
    z = z_;
  }

  void Point::display(void) {
    printf("X-COORDINATE: %6.2f\n
            Y-COORDINATE: %6.2f\n", x, y);
  }

  int Point::counter(void) {
    return counter - 1000;
  }
  float Point::distance(Point b) {
    return Point.distance(this, b);
  }

  static float Point::distance(Point a, Point b) {
    if ( !(a && b) ) {
      std::cerr << "Error in distance, null input.\n"
      exit(-1);
    }
    float dx = b.x - a.x;
    float dy = b.y - a.y;
    return sqrt( pow(dx) + pow(dy) );
  }