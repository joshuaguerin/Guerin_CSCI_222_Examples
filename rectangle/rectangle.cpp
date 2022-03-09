
#include <iostream>
#include <string>
#include "rectangle.h"

using namespace std;

// Normal type rectangle::name(parameters)

rectangle::rectangle() {
  length = 1;
  width = 1;
}

rectangle::rectangle(int length, int width) {
  set(length, width);
  //this->length = length;
  //this->width = width;
}

void rectangle::print() {
  string bar = "+", mid="|";
  for(int i=0; i<width; i++) {
    bar.append("--");
    mid.append("  ");
  }
  bar.append("+");
  mid.append("|");
      
  cout << bar << endl;
  for(int i=0; i<length; i++)
    cout << mid << endl;
  cout << bar << endl;
}

void rectangle::set(int length, int width) {
  this->length = length;
  this->width = width;
}

