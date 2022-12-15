class Solution {
    bool checkForPalindrome(string a){
        string b = a;
        reverse(a.begin(),a.end());
        if(a==b)
        return true;
        else 
        return false;
    }
        int count = 0;

    void counter(string a){
        if(checkForPalindrome(a)==true)
         {
             if(a!="")
             ++count;
         }
           
    }
public:
    int countSubstrings(string s) {
        int n=s.length();
        for(int i=0;i<n;i++){
            for(int j=0;j<=n-i;j++){
                counter(s.substr(i,j));
            }
        }
        return count;
    }
};
