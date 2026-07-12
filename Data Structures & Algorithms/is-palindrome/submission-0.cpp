class Solution {
public:
    bool isPalindrome(string s) {
        //strip the space
        string t="";
        for(char ch:s){
            if(isalnum(ch)){
                t.push_back(tolower(ch));
            }
        }

        for(int i=0 , j=t.size()-1 ; i<=j ; i++ , j--){
            if(t[i]!=t[j]){
                return false;
            }
        }
        return true;
    }
};
