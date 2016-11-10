#include <iostream>
#include <vector>
#include <stdexcept>
#include "Base.h"
#include "Container.h"
#include "VectorContainer.h"

void VectorContainer::set_sort_function(Sort* function){
    sort_function = function;
}

void VectorContainer::add_element(Base* element){
    elements.push_back(element);
}

void VectorContainer::print(){
    for(unsigned i = 0; i < elements.size(); i++){
        std::cout << elements.at(i)->evaluate() << std::endl;
    }
}

void VectorContainer::sort(){
    if(sort_function){
        sort_function->sort(this);
    }
    else {
        throw runtime_error("Wrong data structure"); //feel free to edit this line
    }
}

void VectorContainer::swap(int i, int j){
    if (i > elements.size() || j > elements.size()) {
        throw std::out_of_range("Element(s) being swapped are out of range.");
    }
    Base* swp = elements.at(i);
    elements.at(i) = elements.at(j);
    elements.at(j) = swp;
}

int VectorContainer::at(int i){
   return elements.at(i)->evaluate();
//   return 0.0;
   // return elements.at(i);
}

int VectorContainer::size(){
    return elements.size();
}