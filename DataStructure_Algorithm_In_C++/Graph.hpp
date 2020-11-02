//
//  Graph.hpp
//  DataStructure_Algorithm_In_C++
//
//  Created by Nguyen, Long on 11/1/20.
//

#ifndef Graph_hpp
#define Graph_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using std::vector;
using std::cout;
using std::pair;
using namespace std;

enum class city: int {
    LONDON,
    MOSCOW,
    ISTANBUL,
    DUBAI,
    MUMBAI,
    SEATTLE,
    SINGAPORE
};

struct graph {
    vector<vector<pair<int, int>>> data;
    
    graph(int n) {
        data = vector<vector<pair<int, int>>>(n, vector<pair<int, int>>());
    }
    
    void addEdge(const city c1, const city c2, int dis) {
        auto n1 = int(c1);
        auto n2 = int(c2);
        
        data[n1].push_back({n2, dis});
        data[n2].push_back({n1, dis});
    }
    
    void removeEdge(const city c1, const city c2) {
        auto n1 = int(c1);
        auto n2 = int(c2);
        
        remove_if(data[n1].begin(), data[n1].end(), [n2](const auto& pair) {
            return pair.first == n2;
        });

        remove_if(data[n2].begin(), data[n2].end(), [n1](const auto& pair) {
            return pair.first == n1;
        });
    }
};



#endif /* Graph_hpp */
