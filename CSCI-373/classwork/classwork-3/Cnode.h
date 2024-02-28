template<typename D>
class CSLL;
template<typename D>

class Cnode{
    private:
        D elem; // element value
        Cnode<D>* next; // next item in the list
        friend class CSLL<D>;
};