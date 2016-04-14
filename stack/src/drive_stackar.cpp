// Copyright - 2016

#include <iostream>
#include <cassert>

#include "stackar.hpp"

int main(int argc, char const *argv[]) {
    StackAr<int> b(10);

    // Unity Test #1: isEmpty function
    assert(b.isEmpty() == true);

    // Add elements to the stack
    b.push(1);
    b.push(3);

    // Unity Test #2: isEmpty function
    assert(b.isEmpty() == false);
    // Unity Test #3: top function
    assert(b.top() == 3);
    // Unity Test #4: pop function
    assert(b.pop() == 3);
    // Unity Test #5: top function
    assert(b.top() == 1);

    // Make the Stack Empty
    b.makeEmpty();

    // Unity Test #6: isEmpty function
    assert(b.isEmpty() == true);

    return EXIT_SUCCESS;
}
