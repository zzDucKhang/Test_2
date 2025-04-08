#include <bits/stdc++.h>
using namespace std;
bool cmp(char a, char b){
    if( a < b && a >= 'A' && a <= 'Z'  ){
        return true;
    }
    else return false;
}

bool cmp1(pair< string, int> a, pair< string, int> b){
    return a.second > b.second;
}

int main(){
    string s;
    getline( cin, s);
    string v;
    map < string, int > m;
    for(auto i : s){
        if( (i >= 'A' && i <= 'Z') || (i >= 'a' && i <='z') || i == ' ' || (i >= '0' && i <= '9')){
            v += i;
        }
    }
    for(int i=0; i< v.size(); i++){
        if(v[i]== ' '){
            v[i+1] = toupper(v[i+1]);
        }
        else{
            v[i+1] = tolower( v[i+1]);
        }
    }
    stringstream s1(v);
    string tmp;
    while( s1 >> tmp){
        sort(tmp.begin(), tmp.end(), cmp);
        m[tmp]++;
    }
    vector<pair<string, int>> vec(m.begin(), m.end());
    sort(vec.begin(), vec.end(), cmp1);
    for(auto i : vec){
        cout << i.first << ":" << " " << i.second << endl;
    }
    return 0;

}

