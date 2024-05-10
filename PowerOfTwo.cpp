#include<iostream>
#include<cmath>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
            return false;
        for(int i = 0; pow(2,i) <= n; ++i){
            if(pow(2,i) == n)
                return true;
        }
        return false;
    }
};

class Solution2 {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) {
            return false;
        }
        
        double power = log2(n);
        return pow(2, power) == n;
    }
};

int main(){
    Solution s;
    if(s.isPowerOfTwo(16))
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;


    Solution2 s2;
    if(s2.isPowerOfTwo(3))
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;

    return 0;
}