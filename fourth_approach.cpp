#include <iostream> 
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;
  
void reverseString(string &sen, int start, int end){
    for(int i=start,j=end-1; i<(start+end)/2; i++,j--){
        char temp = sen[i]; // function that reverses a string from given start to end index 
        sen[i] = sen[j];
        sen[j] = temp;
    }
}

int main(){ 
 
    cout<<"Enter the string to be reversed"<<endl;
    string sentence; 
    getline(cin,sentence,'\n'); // Getting the string to be reversed

    int start=0; // start -> Indicates start of a word
    reverseString(sentence, 0, sentence.length()); // Swaps all characters in the sentence given by the user

    for(int i=0;sentence[i]!='\0';i++){
        if(sentence[i]==' ' && i!=sentence.length()-1){
            reverseString(sentence,start,i); // Re-reversing individual words 
            start = i+1;
        }
        if(i==sentence.length()-1){
            reverseString(sentence,start,i+1); // Re-reversing the last word
        }
    }
  
    cout<<sentence<<endl; // Et voila, printing the reversed words sentence
  
} 