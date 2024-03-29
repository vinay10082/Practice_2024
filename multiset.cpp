#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, map<int,multiset<int>>> nodes;
    nodes[0][0].insert(1);
    nodes[-1][1].insert(1);
    nodes[1][1].insert(1);
    nodes[-2][2].insert(1);
    nodes[0][2].insert(1);
    nodes[-1][3].insert(1);
    nodes[0][4].insert(1);
    nodes[0][2].insert(1);
    nodes[0][2].insert(1);
    nodes[2][2].insert(1);
    for(auto q: nodes){
        cout<<q.first<<" ";
    }
    return 0;
}