#include <bits/stdc++.h>
using namespace std;

//global counter
int cnt = 0;

// print name 5 times
void printName5times(string name, int times){

//base condition
if(cnt>=times) return;

cout<<name<<endl;
cnt++;

printName5times(name,times);
}

// print 1 to N using backtracking
void print1toN(){

}

int main(){

    // printName5times("vinay", 5);

    return 0;
}