#ifndef BubbleSort_H
#define BubbleSort_H

#include "Sort.h"
#include "Container.h"

class BubbleSort : public Sort{
    public:
        BubbleSort() {}
        void sort(Container* container);
};

#endif