/**
 * SVG Multisided Polygon
 **/

#ifndef POLYGON_H
#define POLYGON_H

#include "svg.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Polygon : public SVG {

public:
  // operator<< equivalent to write the object out
  ostream &write(ostream &out) const override;

  // operator>> equivalent to read the object contents
  istream &read(istream &in) override;

private:

  // vector of coordinates for the polygon's points
  vector<int> coords{};

  // colors of the polygon and the lines
  string polyColor{"black"}, lineColor{"black"};
};

#endif
