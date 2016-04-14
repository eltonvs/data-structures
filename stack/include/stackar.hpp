// Copyright - 2016

#ifndef _stackar_hpp_
#define _stackar_hpp_

#include "AbsStack.hpp"

/**
 * @brief Generic Stack Class
 *
 * @tparam Object The Stack type
 */
template <typename Object>
class StackAr : public AbsStack<Object> {
 public:
    // Constructor
    StackAr(int _MaxSize = 10);
    // Destructor
    ~StackAr();

    // Members
    void push(const Object &_x);
    Object pop();
    Object top() const;

    bool isEmpty() const;
    void makeEmpty();

 private:
    int m_size      = 0;
    int m_capacity  = 0;
    Object *m_stack = nullptr;
};

#include "stackar.inl"

#endif
