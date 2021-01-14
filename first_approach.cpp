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
    getline(cin,sentence); // Getting the string to be reversed
    
    for(int i=0;sentence[i]!='\0';i++){
        if(sentence[i]==' ' && i!=sentence.length()-1) // Counting the no. of words using spaces
            counter++;
    }
    counter++;
    cout<<"No. of words are "<<counter<<endl;

    string words[counter]; // Creating a string array based on the number of words
  
    stringstream ss(sentence); // Separating words and storing them in the stringstream buffer

    for(int i=0;i<counter;i++){
        ss>>words[i]; // Puttings words into the string array from the string stream buffer
    }
  
    for(int i=counter-1;i>=0;i--){
        cout<<words[i]<<" "; // Et voila, printing the words in the reverse fashion
    }

}