
#ifndef SEQUENCE
#define SEQUENCE

template <typename Type>
class sequence {
 private:
   Type *elements;  //dynamic array, of placeholder Type
   int size;        //knows its own size

 public:
   sequence(int size);
   ~sequence();
   void store(int idx, Type val);  //storing type Type
   Type retrieve(int idx);         //retrieving type Type
};

template <typename Type>
sequence<Type>::sequence(int size) {
  this->size = size;
  elements = new Type[size];
}


template <typename Type>
sequence<Type>::~sequence() {
  delete[] elements;
}

template <typename Type>
void sequence<Type>::store(int idx, Type val) {
  // What if position idx doesn't exist???
  // An exceptional circumstance (e.g., exception handling).
  elements[idx] = val;
}

template <typename Type>
Type sequence<Type>::retrieve(int idx) {
  // No handling of position not existing
  return elements[idx];
}

#endif
