
#include <iostream>
#include "rectangle.h"

using namespace std;

int main() {
  rectangle r1, r2(7, 2);
  r1.set(4, 10);
  r1.print();
  r2.print();
  
  return 0;
}
