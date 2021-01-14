#include<iostream>
#include<string>
#include<sstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::stringstream;
using std::getline;

int main(){
   
    string sentence;
    int counter=0;
    cout<<"Enter the string to be reversed"<<endl;
    getline(std::cin,sentence); // Getting the string to be reversed
    
    for(int i=0;sentence[i]!='\0';i++){
        if(sentence[i]==' ' && i!=sentence.length()-1) // Counting the no. of words using spaces
            counter++;
    }
    counter++;
    cout<<"No. of words are "<<counter<<endl;

    stringstream ss(sentence); // Separating words and storing them in the stringstream buffer
    string revSentence; // Creating a string to store the words in reverse order
    
    for(int i=0; i<counter;i++){
        string word;
        ss>>word;
        revSentence.insert(0,word); // storing the words at the beginning of the string
        if(i!=counter-1)
        revSentence.insert(0," ");
    }    
    
    cout<<revSentence<<endl; // Et voila, printing the reversed words sentence

}