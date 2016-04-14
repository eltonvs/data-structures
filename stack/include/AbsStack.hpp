// Copyright - 2016

#ifndef _AbsStack_hpp_
#define _AbsStack_hpp_

/**
 * @brief Abstract Stack Class
 * @details The interface Stack class (cannot be instantiated).
 *
 * @tparam Object The Stack type
 */
template <class Object>
class AbsStack {
 public:
    AbsStack() {/* Empty */}  // Default constructor
    virtual ~AbsStack() {/* Empty */}  // Default destructor

    // Basic members
    virtual void push(const Object &_x) = 0;
    virtual Object pop() = 0;
    virtual Object top() const = 0;

    virtual bool isEmpty() const = 0;
    virtual void makeEmpty() = 0;

 private:
    // Disable copy constructor
    AbsStack(const AbsStack &) {/* Empty */}
};

#endif
