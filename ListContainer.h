#ifndef LISTCONTAINER_H
#define LISTCONTAINER_H

#include "Base.h"
#include "Container.h"
#include <list>

class ListContainer : public Container {
    private:
        // std::list<Base*> basedList;
        Sort* sort_function;
    public:
        ListContainer() : set_sort_function(0) {}
        ListContainer(Sort* function) : sort_function(function) {}
        void set_sort_function(Sort* sort_function);
        void add_element(Base*);
        void print();
        void sort();
        void swap(int, int);
        int at(int); //CHANGE TO BASE*
        int size(); //return container size
};

#endif