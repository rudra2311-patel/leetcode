class Solution{
public:
    int maxFreqSum(string s){
        map<char,int> rudra;//frequency map
        for(char c:s){
            rudra[c]++;
        }
        string vowels="aeiou";
        int maxVowel=0,maxConsonant=0;
        for(auto& it:rudra){
            char ch=it.first;
            int freq=it.second;
            if(vowels.find(ch)!=string::npos){
                maxVowel=max(maxVowel,freq);
            }else{
                maxConsonant=max(maxConsonant,freq);
            }
        }
        return maxVowel+maxConsonant;
    }
};
