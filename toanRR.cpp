#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int rows = pow(2 ,n);
    int cols = n;        

    vector<vector<int>> b(rows, vector<int>(cols, 0)); 

    
    for (int i = 0; i < rows; i++) {  
        int num = rows - 1 - i; 
        for (int j = 0; j < cols; j++) { 
            b[i][j] = num % 2; 
            num /= 2; 
        }
    }
    vector<vector<int>> a(rows, vector<int>(cols)); 
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) { 
            a[i][j] = b[i][cols - 1 - j]; 
        }
    }

    vector<int> v;
    for (int i = 0; i < rows; i++) {
        if(a[i][0]==1 && a[i][1]==0) v.push_back(0);
        else if(a[i][0]==0 && a[i][1]==1) v.push_back(1);
        else v.push_back(1);

    }
    vector<int> y;
    for (int i = 0; i < rows; i++){
        if(a[i][2]==1 && v[i]==1) y.push_back(1);
        else if(a[i][2]==0 && v[i]==0) y.push_back(0);
        else y.push_back(0);
        
    }
    
    for (int i = 0; i < rows; i++){
        cout << y[i] << endl;
    }

    return 0;
}
