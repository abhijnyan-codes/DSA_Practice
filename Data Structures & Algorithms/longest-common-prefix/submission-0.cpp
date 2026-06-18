class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for(int i = 1; i < strs.size(); i++){
            string temp = "";
            string word = strs[i];
            int j=0;
            while( j < prefix.length() && j < word.length() && prefix[j] == word[j] ){
                temp += prefix[j];
                j++;
            }
            prefix = temp;
        }
        return prefix;
    }
};