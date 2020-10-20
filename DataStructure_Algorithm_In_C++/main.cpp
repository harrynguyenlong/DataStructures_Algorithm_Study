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
    std::string thirdEle = "Third";
    
    linkedList.add(firstEle);
    linkedList.add(secondEle);
    linkedList.add(thirdEle);
    linkedList.add("Four");
    
    linkedList.reverse();
    
    std::cout << linkedList.count();
    return 0;
}
