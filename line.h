/**
 * SVG Multisided Polygon
 **/

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "svg.h"
#include <iostream>
#include <string>

using namespace std;

class Line : public SVG {

public:
  // operator<< equivalent to write the object out
  ostream &write(ostream &out) const override;

  // operator>> equivalent to read the object contents
  istream &read(istream &in) override;

private:

  // coordinates for line points 1 and 2
  int x1{0}, y1{0}, x2{0}, y2{0};

  // width of line
  int width{1};

  // color of line
  string color{"black"};
};

#endif
