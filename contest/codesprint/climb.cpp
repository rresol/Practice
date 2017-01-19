#include <vector>
#include <algorithm>
#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> scores;
    int previous;
    cin>>previous;
    scores.push_back(previous);
    for(int scores_i = 1;scores_i < n;scores_i++){
          int a;
        cin>>a;
        if(a!=previous){
       scores.push_back(a);
        previous  = a;}
    }
    int m;
    cin >> m;
    vector<int> alice(m);
    for(int alice_i = 0;alice_i < m;alice_i++){
       cin >> alice[alice_i];
    }
    for(int i=0;i<scores.size();i++)
    {
        cout<<scores[i]<<endl;
    }
    sort(scores.begin(),scores.end());
    for(int i=0;i<m;i++){
        vector<int>::iterator up;
        up = upper_bound(scores.begin(),scores.end(),alice[i]);
    

        cout<<scores.size()-(up-scores.begin())+1<<endl;
    }
    // your code goes here
    return 0;
}
