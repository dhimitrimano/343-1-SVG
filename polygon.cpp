#include "polygon.h"
#include <fstream>
#include <iostream>

using namespace std;

// operator<< equivalent to write the object out
ostream &Polygon::write(ostream &out) const {
  out << "      <polygon points=\"";
  out << coords[0];
  for (int i = 1; i < coords.size(); i++) {
    out << " " << coords[i];
  }
  out << "\" fill=\"" << polyColor << "\" ";
  out << "stroke=\"" << lineColor << "\" ";
  out << " />" << endl;
  return out;
}

// operator>> equivalent to read the object contents
istream &Polygon::read(istream &in) {
  string temp;
  in >> temp;
  do {
    coords.push_back(stoi(temp));
    in >> temp;
  } while (isdigit(temp[0]) != 0 || temp[0] == '-');
  polyColor = temp;
  in >> lineColor;
  return in;
}