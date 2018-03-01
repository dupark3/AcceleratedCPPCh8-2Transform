#include <iostream>
#include <iterator>
#include <vector>

#include "my_transform.h"

int timesTwo(int n){
    return n * 2;
}

int main(){
    int myints[] = {1, 2, 3, 4, 5};
    std::vector<int> vec = (myints, myints + sizeof(myints) / sizeof(int));
    std::vector<int> vec2;

    // print the original vector
    std::cout << "Original vector: ";
    for (std::vector<int>::size_type i = 0; i != vec.size(); ++i)
        std::cout << vec[i] << " ";

    // multiply every value by 2 and copy into vec2, and print the results
    my_transform(vec.begin(), vec.end(), back_inserter(vec2), timesTwo);
    std::cout << "The result of transforming by times two: ";
    for (std::vector<int>::size_type i = 0; i != vec2.size(); ++i)
        std::cout << vec2[i] << " ";

    return 0;
}
