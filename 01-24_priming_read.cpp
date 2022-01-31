#include <iostream>

using namespace std;

int main() {
  int val=0;

  // Behavior when a priming read is omitted.
  while(val >= 0) {
    cin >> val;
    
    cout << "val: " << val << endl;
  }
  
  return 0;
}
