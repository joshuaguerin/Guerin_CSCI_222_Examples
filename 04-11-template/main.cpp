
#include <iostream>
#include "sequence.h"

using namespace std;

int main() {
  sequence<int> s(10);

  s.store(0, 5);
  cout << s.retrieve(0) << endl;
  
  return 0;
}
