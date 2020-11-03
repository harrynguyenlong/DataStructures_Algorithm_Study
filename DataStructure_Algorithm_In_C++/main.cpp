//
//  main.cpp
//  DataStructure_Algorithm_In_C++
//
//  Created by Nguyen, Long on 10/19/20.
//

#include <iostream>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include "SingleLinkedList.hpp"
#include "Tree.hpp"
#include "Graph.hpp"
#include "TwoSum.hpp"

using std::map;
using std::string;
using std::cout;
using std::vector;

void runLinkedListExamples();
void runStackExample();
void runQueueExample();
void runDequeExample();
void runMapExample();
void runVectorExample();

int main(int argc, const char * argv[]) {
    
    vector<int> testArray{3, 2, 4};
    auto result = twoSum(testArray, 6);
    
    return 0;
}

void runVectorExample() {
    vector<string> lists;
    lists.push_back("123");
    lists[3] = "Four";
    
    string first = lists[2];
    cout << lists[0];
    cout << "123";
    
//    cout << lists[1];
}

void runMapExample() {
    map<string, int> myMap;
    
    myMap["First"] = 40;
    myMap["second"] = 50;

    int val = myMap["second"];
    if (val) {
        cout << val;
    }
}

void runDequeExample() {
    std::deque<float> deque;
    
    deque.push_front(12.34);
    deque.push_back(34);
    
    deque.front();
    deque.back();
    deque.size();
    deque.empty();
    deque.pop_front();
    deque.pop_back();
    
    std::cout << deque.size();
}

void runQueueExample() {
    std::queue<double> queue;
    
    queue.push(12.232);
    queue.push(10);
    queue.front();
    queue.back();
    queue.pop();
    queue.size();
    
    std::cout << queue.front();
}

void runStackExample() {
    std::stack<std::string> stack;
    
    stack.push("first");
    stack.push("second");
    stack.push("third");
    
    std::cout << stack.top();
}

void runLinkedListExamples() {
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
}
