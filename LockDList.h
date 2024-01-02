#ifndef LOCKDLIST_H
#define LOCKDLIST_H

#include "DList.h"
#include "DListNode.h"
#include "LockDListNode.h"
/**
 * LockDList
 * 1)extend DList's method
 * 2)additional method: lockNode(DListNode *node), for permanently locks "node"
 */
template<typename T>
class LockDlist :public DList<T> {
public:
	T item;
	void lockNode(DListNode<T>* node);
};


#endif
