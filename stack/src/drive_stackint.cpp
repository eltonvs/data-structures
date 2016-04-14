// Copyright - 2016

#include <iostream>
#include <cassert>

#include "stackint.hpp"

int main(int argc, char const *argv[]) {
    StackInt a(10);

    // Unity Test #1: isEmpty function
    assert(a.isEmpty() == true);

    // Add elements to the stack
    a.push(1);
    a.push(3);

    // Unity Test #2: isEmpty function
    assert(a.isEmpty() == false);
    // Unity Test #3: top function
    assert(a.top() == 3);
    // Unity Test #4: pop function
    assert(a.pop() == 3);
    // Unity Test #5: top function
    assert(a.top() == 1);

    // Make the Stack Empty
    a.makeEmpty();

    // Unity Test #6: isEmpty function
    assert(a.isEmpty() == true);

    return EXIT_SUCCESS;
}
