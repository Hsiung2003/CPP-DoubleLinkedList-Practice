#include "LockDList.h"
#include "LockDListNode.h"

template<typename T>
LockDList<T>::LockDList():DList<T>(){}

template<typename T>
DListNode<T>*LockDList<T>::newNode(const T& item, DListNode<T>* prev, DListNode<T>* next) {
    DListNode<T>* new_node = DList<T>::newNode(item, prev, next);
    static_cast<LockDlistNode<T>*>(new_node)->locked = false;
    return new_node;
}
template<typename T>
void LockDList<T>::lockNode(DListNode<T>* node) {
    if (node != nullptr)static_cast<LockDlistNode<T>*>(node)->locked = true;
    return;
}
template<typename T>
void LockDList<T>::remove(DListNode<T>* node) {
    if(node==nullptr){
        return;
    }
    if(static_cast<LockDlistNode<T>*>(node)->locked){
        return;
    }
    DList<T>::remove(node);
}