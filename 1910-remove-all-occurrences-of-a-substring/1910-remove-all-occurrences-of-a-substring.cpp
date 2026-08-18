class Solution {
public:
    string removeOccurrences(string s, string part) {
        int st = 0, end =0, partSize = part.length();

        while(1){
            st = s.find(part);
            if(st < s.length()){
                s.erase(st, partSize);
            }else{
                break;
            }
        }
        return s;
    }
};