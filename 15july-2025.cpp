//3136. Valid Word

#include <bits/stdc++.h>
using namespace std;

bool solve(string word){
    if(word.length()<3) return 0;

    int digits = -1, UC = -1, LC = -1,vowel = -1 , cons = -1;
    string vow = "AEIOUaeiou";

    for(int i=0; i<word.length(); i++){
        if(word[i]== '@' || word[i]=='#' || word[i]=='$') 
            return 0;

        else if(word[i]>='0' && word[i]<='9') 
            digits =1;

        else if(word[i]>='A' && word[i]<='Z') 
        {
            UC =1;
            for(int j=0; j<vow.length(); j++){
                if(word[i] == vow[j]) vowel = 1;
                else cons = 1;
            }
        }
        else if(word[i]>='a' && word[i]<='z')
        {
            LC =1;
            for(int j=0; j<vow.length(); j++){
                if(word[i] == vow[j]) vowel = 1;
                else cons = 1;
            }           
        }
    }

    int condition = digits+UC+LC+vowel+cons;
    if(condition == 5) return 1;
    else return 0;
}

int main(){
    string word;
    cin>>word;

    cout << solve(word);
    return 0;
}

