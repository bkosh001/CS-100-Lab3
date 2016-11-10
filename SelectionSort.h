#ifndef SelectionSort_H
#define SelectionSort_H

#include "Sort.h"
#include "Container.h"

class SelectionSort : public Sort{
    public:
        SelectionSort() {}
        void sort(Container* container);
};

#endif