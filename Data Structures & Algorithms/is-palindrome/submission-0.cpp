class Solution {
public:
    bool isPalindrome(string s) {
        string str ="";
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int n = s.length();
        for(int i =0;i<n;i++){
            if(isalnum(s[i])){
                str +=s[i];
            }
        }
        int i =0;
        int j = str.length()-1;
        while(i<j){
            if(str[i]!=str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
