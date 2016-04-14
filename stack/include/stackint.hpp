// Copyright - 2016

#ifndef _stackint_hpp_
#define _stackint_hpp_

#include "AbsStack.hpp"

/**
 * @brief Stack of Integers Class
 *
 * @tparam Object The Stack type
 */
class StackInt : public AbsStack<int> {
 public:
    // Constructor
    StackInt(int _MaxSize);
    // Destructor
    ~StackInt();

    // Members
    void push(const int &_x);
    int pop();
    int top() const;

    bool isEmpty() const;
    void makeEmpty();

 private:
    int m_size     = 0;
    int m_capacity = 0;
    int *m_stack   = nullptr;
};

#endif
