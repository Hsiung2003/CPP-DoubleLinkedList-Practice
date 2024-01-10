/**
 *  A LockDListNode is a locked node in a LockDList.
 */
#ifndef LOCKDLISTNODE_H
#define LOCKDLISTNODE_H
#include "DListNode.h"
/*
template<typename T>
class LockDList;
*/
/**
 * LockDListNode
 * 1)information about whether it has been locked.
 * 2)Not locked when first created
 */
template<typename T>
class LockDlistNode : public DListNode<T> {
public:
    bool locked;
    LockDlistNode(const T& i, DListNode<T>* p,
        DListNode<T>* n) :DListNode<T>(i, p, n){}
};
#endif
