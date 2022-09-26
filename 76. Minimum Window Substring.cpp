long mini = 10000; string str;
int min(int a, int b, string s){
    str = s;
    return (a<b)?a:b;
}
void finder(string a, string t){
    int flag = 0;
    
    for(int i=0; i<t.length(); i++){
       if (a.find(t[i]) != string::npos )
       { flag = 0; }
        else {flag = 1; break;}
    }
    if(flag==0)
    {mini = min(mini,a.length(),a);}
}
class Solution {
public:
    string minWindow(string s, string t) {
        for(int i=0;i<s.length();i++){
            for(int j=1;j<=s.length()-i;j++){
                finder(s.substr(i,j),t);
            }
        }
        
        return str;
    }
    
};
