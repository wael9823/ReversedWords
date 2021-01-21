# ReversedWords
Displaying different ways to solve the problem of reversing words of a sentence in C++. 

/* Code to read input from text file and write output to another text file */

#ifndef CODE_CHECK
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

/* Code to read multiple lines from input text file */
int tLines;
    cin>>tLines;
    for(int line = 0; line<tLines; line++){
         if(line == 0)
            std::getline(cin,sentence,'\n');

    }