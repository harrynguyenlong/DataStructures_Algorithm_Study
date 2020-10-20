//
//  main.cpp
//  DataStructure_Algorithm_In_C++
//
//  Created by Nguyen, Long on 10/19/20.
//

#include <iostream>
#include "SingleLinkedList.hpp"

int main(int argc, const char * argv[]) {
    
    LinkedList<std::string> linkedList;
    
    std::string firstEle = "First";
    std::string secondEle = "Second";
    
    linkedList.add(firstEle);
    linkedList.add(secondEle);
    
    std::cout << linkedList.getHead();
    return 0;
}
