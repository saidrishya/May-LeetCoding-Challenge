class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       unordered_map<char , int> m ,m1;
        for(auto i: magazine) m[i]++;
        for(auto u : ransomNote) m1[u]++;
        for(auto i: ransomNote){
            if(m.find(i) == m.end()) return false;
            if(m.find(i)!=m.end() && m[i]<m1[i]) return false;
        }
return true;
    }
};
