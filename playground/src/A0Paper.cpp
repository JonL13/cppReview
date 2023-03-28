#include <iostream>
#include <vector>
using namespace std;

class A0Paper{
public:
    string canBuild(vector<int> A){
        for(int i = A.size()-1; i > 0; i--){
            int additionalNextSize = A[i]/2;
            A[i-1] += additionalNextSize;
            cout << additionalNextSize << " ";
        }
        if(A[0] >= 1) return "Possible";
        return "Impossible";
    }
};