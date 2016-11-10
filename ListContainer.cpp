#include <iostream>
#include <stdexcept>
#include "Base.h"
#include "Container.h"
#include "ListContainer.h"
#include <list>
#include <algorithm>


using namespace std;

void ListContainer::set_sort_function(Sort* function){
    sort_function = function;
}

void ListContainer::add_element(Base* element) {
    basedList.push_back(element);
}

void ListContainer::print() {
    for (list<Base*>::iterator it = basedList.begin(); it != basedList.end(); ++it) {
        cout << (*it)->evaluate() << endl;
    }
}

void ListContainer::sort() {
    if(sort_function){
        sort_function->sort(this);
    }else{
        throw runtime_error("Wrong data structure."); // throw exception
    }
}

void ListContainer::swap(int i, int j) {
    
    if (i > basedList.size() || j > basedList.size()) {
        throw out_of_range("Swapping node(s) out of range.");
    }
    list<Base*>::iterator it = basedList.begin();
    list<Base*>::iterator jt = basedList.begin();
    for(int a = 0; a < i; a++){
        it++;
    }
    for(int b = 0; b < j; b++){
        jt++;
    }
    iter_swap(it, jt);
}

int ListContainer::at(int i) { //change to Base*
    if (i > basedList.size()) {
        throw out_of_range("Accessing out of range node.");
    }
    list<Base*>::iterator it = basedList.begin();
    for(int a = 0; a < i; ++a){
        it++;
    }
    cout << "FIX THE AT FUNCTION FOR LIST" << endl;
    // return *it;/
    // cout << *it << endl;
    // return it->evalute(); <--- DOESN'T WORK
    return 0.0;
}

int ListContainer::size() {
    return basedList.size();
}