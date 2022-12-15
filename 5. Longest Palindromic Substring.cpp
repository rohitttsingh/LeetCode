class Solution {
    public:
        string a = "";

   void checkPalindrome(string str){
       string cpy =  str;
       reverse(str.begin(), str.end());

       if(cpy==str){
           if(a.length()<cpy.length())
            a = cpy;
       }
   }

    string longestPalindrome(string s) {
        int n = s.length();
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i;j++){
            checkPalindrome(s.substr(i,j));//<<" ";
       }
     }
    
    return a;
}
};
