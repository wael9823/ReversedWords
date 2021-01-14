#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;


int main(){

    string sentence, revSentence;
    cout<<"Enter the string to be reversed"<<endl;
    getline(cin,sentence,'\n'); // Getting the string to be reversed
    
    int start = 0,length = 0; // start -> Indicates start of a word
                              // length -> Indicates length of a word
  
    for(int i=0;sentence[i]!='\0';i++){
        
        string word;
      
        if(sentence[i]==' ' && i!=sentence.length()-1){
            length = i- start; // Update the length variable
            word = sentence.substr(start,length); // Obtain a word from the sentence
            start = i+1; // Update the start variable 
            revSentence.insert(0,word); // Storing the word at the beginning of the string
            revSentence.insert(0," ");
        }
     
        if(i==sentence.length()-1){
            length = i - start + 1; // Update the length variable for final word
            word = sentence.substr(start,length); // Obtain a word from the sentence
            revSentence.insert(0,word);
        }
      
    }

    cout<<revSentence<<endl; // Et voila, printing the reversed words sentence
    
}