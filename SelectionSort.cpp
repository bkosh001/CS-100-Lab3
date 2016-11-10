#include <iostream>
#include "Sort.h"
#include "SelectionSort.h"

void SelectionSort::sort(Container* container){
    int i = 0;
    int j = 0;
    int min = 0;
    
    for (i = 0; i < container->size() - 1; ++i) {
        min = i;
        for (j = i + 1; j < container->size(); ++j) {
            if (container->at(j) < container->at(min)) {
                min = j;
            }
        }
        
        if(min != i) {
            container->swap(min, i);
        }
    }
}