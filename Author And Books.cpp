#include <bits/stdc++.h> 
using namespace std;

vector<string> arrangeAuthors(vector<vector<string> > &s) {
    vector<string> formattedData;

    char bookLetter = 'A';

    for (int i = 0; i < s.size(); i++) {
        string authorName = s[i][0];
        formattedData.push_back(to_string(i + 1) + ". " + authorName);

        for (int j = 1; j < s[i].size(); j++) {
            formattedData.push_back("    " + string(1, bookLetter) + ". " + s[i][j]);
            bookLetter++;
        }

        bookLetter = 'A';
    }

    return formattedData;
}





