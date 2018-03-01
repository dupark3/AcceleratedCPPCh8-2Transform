

template <class inputIterator, class outputIterator, class F>
outputIterator my_transform(inputIterator first, inputIterator last, outputIterator destination, F funct){
    for( ; first != last; ++first){
        *destination = funct(*first);
    }
    return destination;
}
