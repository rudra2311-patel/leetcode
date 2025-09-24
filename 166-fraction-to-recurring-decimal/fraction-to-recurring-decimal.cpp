#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if(numerator==0) return "0";
        string res;
        if((numerator<0)^(denominator<0)) res+="-";
        long long n=abs((long long)numerator), d=abs((long long)denominator);
        res+=to_string(n/d);
        long long r=n%d;
        if(r==0) return res;
        res+=".";
        unordered_map<long long,int> m;
        while(r){
            if(m.count(r)){
                res.insert(m[r],"(");
                res+=")";
                break;
            }
            m[r]=res.size();
            r*=10;
            res+=to_string(r/d);
            r%=d;
        }
        return res;
    }
};
