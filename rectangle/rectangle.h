
#include <string>

#ifndef RECTANGLE_H
#define RECTANGLE_H

class rectangle {
 private:
  int length, width;
  char fill;

 public:
  rectangle();
  rectangle(int length, int width);
  void print();
  void set(int length, int width);
};

#endif
