class Solution {
public:
    int compress(vector<char>& chars) {
        char ch ;
        int idx =0;

    for(int i= 0; i< chars.size(); i++){
        ch= chars[i];
        int count =0;

        while(i< chars.size() && ch == chars[i]){
            count++;
            i++;
        }

    chars[idx++] = ch;

        if(count>1){
            string str = to_string(count);
            for(char j : str){
                chars[idx++] = j;
            }
        }

    i--;
    }
    
    chars.erase(chars.begin()+idx, chars.end());

        return chars.size();
    }
};