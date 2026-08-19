class Solution {
public:

    bool isFreqSame(int freq1[], int freq2[]){
        for(int i=0; i< 26; i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0}, st=0, end=s1.length()-1 ;
        

        for(int i=0; i < s1.length(); i++){
            int idx= s1[i] - 'a';
            freq[idx]++;
        }

        while(end< s2.length()){
            int windFreq[26]={0};
            for(int i=st; i <= end; i++){
                int idx= s2[i] - 'a';
            windFreq[idx]++;
        }
        if(isFreqSame(freq, windFreq)){
            return true;
        }

            st++;
            end++;
        
        }

        return false;
    }
};