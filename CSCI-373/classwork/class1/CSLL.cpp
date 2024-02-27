#include "CSLL.h"
#include <iostream>

template <typename D>
CSLL<D>::CSLL():h(nullptr){

}

template <typename D>CSLL<D>::~CSLL(){
    while(!empty()) removeFront();
}

template <typename D>bool CSLL<D>::empty() const{
    return h == nullptr;
}

template <typename D>const D& CSLL<D>::front() const{
    return h->elem;
}

template <typename D>
void CSLL<D>::addFront(const D & e){
    CNode<D> * nN = new Cnode<D>;
    nN->data = e;
    nN->next = h;
    h = nN;

}

template <typename D>
void CSLL<D>::removeFront(){
    CNode<D>* tmp =h;
    h=h->next;
    delete tmp;
}

template <typename D>
void CSLL<D>::print() const {
    CNode<D> *p = h;

    while (p != nullptr){
        std::cout<<p->data << "->";
        p = p->next;
        std::cout<<"Null";
    }
}

