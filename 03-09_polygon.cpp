#include <iostream>

using namespace std;

class Polygon {
protected:
  int width, height;
  
public:
  void set(int x, int y);
  virtual void print();
};


class Rectangle: public Polygon {
public:
  int area();
  void print();
};

class Triangle: public Polygon {
public:
  int area();
  void print();
};

void callsPrint(Polygon &p);

int main() {
  Polygon p;
  p.set(4, 5);
  p.print();

  cout << endl;
  
  Rectangle r;
  r.set(4, 5);
  //r.print();
  callsPrint(r);
  cout << "Area of rectangle is: "  << r.area() << endl << endl;

  Triangle t;
  t.set(4, 5);
  t.print();
  cout << "Area of rectangle is: "  << t.area() << endl;
  
  return 0;
}


void Polygon::set(int x, int y) {
  width=x;
  height=y;
}

void Polygon::print() {
  cout << "Width: " << width << endl;
  cout << "Height: " << height << endl;
}


int Rectangle::area() {
  return width*height;
}

void Rectangle::print() {
  cout << "I am but a simple rectangle." << endl;
  Polygon::print();
}

int Triangle::area() {
  return width*height/2;
}

void Triangle::print() {
  cout << "I am but a simple triangle." << endl;
  Polygon::print();
}

void callsPrint(Polygon &p) {
  p.print();
}

