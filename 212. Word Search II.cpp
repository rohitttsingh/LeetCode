#include <c++/v1/bits/stdc++.h>
using namespace std;
vector<string> ans;

char ar[4][4]   =   {  {'o','a','a','n'},
                       {'e','t','a','e'},
                       {'i','h','k','r'},
                       {'i','f','l','v'}};

void func2(int i, int j, string str, int pos){
    
    
         if((ar[i+1][j])==(str[pos+1])){
             func2(i+1,j,str,pos+1);
    }
    else if(ar[i][j+1]==(str[pos+1])){
            func2(i,j+1,str,pos+1);
    }
    else if(ar[i-1][j]==(str[pos+1])){
            func2(i-1,j,str,pos+1);
    }
    else if(ar[i][j-1]==(str[pos+1])){
            func2(i,j-1,str,pos+1);
    }
    else if(pos==str.length()-1){
        ans.push_back(str);
    }
    else{
        return;
    }
    
    
}

void func(string str,int l){
    string temp;

    for(int i=0;i<4;i+=1){
        for(int j=0;j<4;j+=1){
            temp = ar[i][j];
            if(str.substr(0,1)==temp)
                func2(i,j,str,0);
        }
    }
        
}

int main() {
    
    
    string ls[] = { "oath","ihsd","rohcc","eat"};
    
    for(auto i:ls)
        func(i,i.length());
     
    for(auto i: ans)
        cout<<i<<" ";
    return 0;
}



