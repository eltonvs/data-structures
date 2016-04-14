// Copyright - 2016

#include <stdexcept>

#include "stackar.hpp"

// Constructor
template <typename Object>
StackAr<Object>::StackAr(int _MaxSize) : m_capacity(_MaxSize) {
    if (_MaxSize < 0)
        throw std::invalid_argument("[StackAr()]: Invalid Stack capacity!");
    m_stack = new Object[_MaxSize];
}

// Destructor
template <typename Object>
StackAr<Object>::~StackAr() {
    delete[] m_stack;
}

// Members
template <typename Object>
void StackAr<Object>::push(const Object &_x) {
    if (m_size >= m_capacity)
        throw std::length_error("[push()]: The Stack is empty!");

    m_stack[m_size++] = _x;
}
template <typename Object>
Object StackAr<Object>::pop() {
    if (isEmpty())
        throw std::length_error("[pop()]: The Stack is empty!");

    return m_stack[--m_size];
}
template <typename Object>
Object StackAr<Object>::top() const {
    if (isEmpty())
        throw std::length_error("[top()]: The Stack is empty!");

    return m_stack[m_size-1];
}

template <typename Object>
bool StackAr<Object>::isEmpty() const {
    return m_size == 0;
}
template <typename Object>
void StackAr<Object>::makeEmpty() {
    m_size = 0;
}
