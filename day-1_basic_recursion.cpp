#include <bits/stdc++.h>
using namespace std;

//global counter
int cnt = 0;

// print name 5 times using recursion
void printName5times(string name, int times){

//base condition
if(cnt>=times) return;

cout<<name<<endl;
cnt++;

printName5times(name,times);
}

// print 1 to N using backtracking
void print1toN(int N){

if(N<1) return;

print1toN(N-1);
cout<<N<<endl;
}

// print N to 1 using backtracking
void printNto1(int s, int N){

if(s>N) return;

printNto1(s+1,N);

cout<<s<<endl;
}

void reverseTheArray(vector<int> &array, int l, int r){

if(l>=r) return;

swap(array[l],array[r]);
reverseTheArray(array, l+1, r-1);
}

int main(){

    // printName5times("vinay", 5);

    // print1toN(3);

    // printNto1(1,3);

    // vector<int> array= {1,2,3,4,5};
    // reverseTheArray(array,0,4);
    // for(auto i: array) cout<<i<<endl;

    return 0;
}