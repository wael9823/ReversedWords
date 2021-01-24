#include<iostream>
#include<string>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
    
    string sentence;
    std::getline(cin,sentence,'\n');

    if(line == 0)
        std::getline(cin,sentence,'\n');
    int start = 0,length = 0;
    vector<string> words;

    for(int i=0;sentence[i]!='\0';i++){
        string word;
        if(sentence[i]==' ' && i!=sentence.length()-1) {
            length = i- start;
            word = sentence.substr(start,length);
            start = i+1;
            words.push_back(word);
        }
        if(i==sentence.length()-1){
            length = i - start + 1;
            word = sentence.substr(start,length);
            words.push_back(word);
        }
    }
        
    string revString;
    for(int i=words.size()-1; i>=0;i--){
         revString += words[i]+" ";
    }
        
    cout<<revString<<endl;

    return 0;
}
