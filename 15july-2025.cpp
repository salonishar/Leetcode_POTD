//3136. Valid Word

#include <bits/stdc++.h>
using namespace std;

bool solve(string word){
    bool isValid(string word) {
        if(word.length()<3) return 0;

        int vowel = 0 , cons = 0;
        string vow = "AEIOUaeiou-";

        for(int i=0; i<word.length(); i++)
        {
            if(word[i]== '@' || word[i]=='#' || word[i]=='$') 
                return 0;

            else if(word[i]>='A' && word[i]<='z')
            {
                if(vowel == 0 || cons == 0)
                {
                    for(int j=0; j<11; j++)
                    {
                        if(word[i] == vow[j]) {
                            vowel = 1;
                            break;
                        }
                        if(j==10)
                            cons = 1 ;
                    }
                }
            }
        }
        
       int condition = vowel+cons; 
        if(condition == 2) return 1;
        else return 0;       
    }
}

int main(){
    string word;
    cin>>word;

    cout << solve(word);
    return 0;
}

