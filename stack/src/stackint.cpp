// Copyright - 2016

#include <stdexcept>

#include "stackint.hpp"

// Constructor
StackInt::StackInt(int _MaxSize) : m_capacity(_MaxSize) {
    if (_MaxSize < 0)
        throw std::invalid_argument("[StackInt()]: Invalid Stack capacity!");
    m_stack = new int[_MaxSize];
}

// Destructor
StackInt::~StackInt() {
    delete[] m_stack;
}

// Members
void StackInt::push(const int &_x) {
    if (m_size >= m_capacity)
        throw std::length_error("[top()]: The Stack is full!");

    m_stack[m_size++] = _x;
}
int StackInt::pop() {
    if (isEmpty())
        throw std::length_error("[top()]: The Stack is empty!");

    return m_stack[--m_size];
}
int StackInt::top() const {
    if (isEmpty())
        throw std::length_error("[top()]: The Stack is empty!");

    return m_stack[m_size-1];
}

bool StackInt::isEmpty() const {
    return m_size == 0;
}
void StackInt::makeEmpty() {
    m_size = 0;
}
