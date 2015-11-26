#include<iostream>
#include<string>
#include<vector>
using namespace std;
string LCP(vector<string> &A) {
    //find the string with least length
    //compare all strings to the least length
    int min = A[0].size();
    string B;
    for(int i = 1; i < A.size(); i++){
        if(A[i].length() < min){
            min = A[i].length();
        }
    }
    for(int i = 0; i < min; i++){
        char C = A[0][i];
        bool allEqual = true;
        for(int j = 1; j < A.size(); j++){
            if(C != A[j][i]){
                allEqual = false;
            }
        }
        if(allEqual){
            B += C;
        }
    }
    return B;
}

int main(){
    vector<string> S{"catwalk","catfish","cattalk"};
    string result;
    result = LCP(S);
    cout << result << endl; //prints 'cat';
    return 0;
}
