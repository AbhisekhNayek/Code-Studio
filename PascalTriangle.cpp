#include <bits/stdc++.h>
using namespace std;

vector<long long int> generateRows(int rows){

  vector <long long int> ansRow ;

  long long ans = 1 ;
  ansRow.push_back(1);

  for(int col = 1 ; col < rows ; col++){

    ans = ans * (rows - col) ;
    ans = ans / col;
    ansRow.push_back(ans);

  }
  return ansRow ;
}

vector<vector<long long int>> printPascal(int n) 

{
    vector<vector <long long int >> ans ;

       for(int i = 1 ; i <= n ; i++){

           ans.push_back(generateRows(i));

       }
    return ans ;
}
