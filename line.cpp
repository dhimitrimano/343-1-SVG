#include "line.h"
#include <fstream>
#include <iostream>

using namespace std;

// operator<< equivalent to write the object out
ostream &Line::write(ostream &out) const {
  out << "      <line ";
  out << "x1=\"" << x1 << "\" ";
  out << "y1=\"" << y1 << "\" ";
  out << "x2=\"" << x2 << "\" ";
  out << "y2=\"" << y2 << "\" ";
  out << "stroke=\"" << color << "\" ";
  out << "stroke-width=\"" << width << "\" ";
  out << "stroke-linecap=\"square\" ";
  out << " />" << endl;

  return out;
}

// operator>> equivalent to read the object contents
istream &Line::read(istream &in) {
  in >> x1 >> y1 >> x2 >> y2 >> width >> color;
  return in;
}