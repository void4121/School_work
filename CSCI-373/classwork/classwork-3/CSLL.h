#include "Cnode.h"
template<typename E>
class CSLL{
    private:
        Cnode<E> *h;

    public:
        CSLL();
        ~CSLL();
        bool empty() const;
        const E& front() const;
        void addFront(const E &d);
        void removeFront();

        void print() const;
};