
    #ifndef ITERATOR_H
    #define ITERATOR_H
    namespace pk2{

    template<typename T>
    class Iterator {

    public : 
    virtual bool hasNext()=0  ;

    virtual T*  next()=0  ;//REINE VIRTUAL FUNCTION

  // virtual  T* nextptr()=0;
    };
    }

    #endif
