#ifndef GUARD_my_transform_h
#define GUARD_my_transform_h

#include "my_transform.hpp"

template <class inputIterator, class outputIterator, class F>
outputIterator my_transform(inputIterator, inputIterator, outputIterator, F);

#endif // GUARD_my_transform_h
