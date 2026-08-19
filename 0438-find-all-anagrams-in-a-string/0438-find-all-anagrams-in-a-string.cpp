class Solution {
public:

    bool isFreqSame(int freq1[], int freq2[]){
            for (int i=0; i<26; i++){
                if(freq1[i] != freq2[i]){
                    return false;
                }
            }
            return true;
        }

    vector<int> findAnagrams(string s, string p) {
        int freq[26] ={0}, st =0, end= p.length()-1, size=0;
        vector<int> arr;

    for(int i=0; i<p.length(); i++){
        freq[p[i]-'a']++;
    }

    while(end<s.length()){
        int windFreq[26]={0};
        for(int i=st; i<=end; i++){
            windFreq[s[i]-'a']++;
        }

        if(isFreqSame(freq, windFreq)){
            arr.push_back(st);
        }
        st++; end++;
    }
        
        return arr;
        
    }
};