#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,temp;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);   
    }
    sort(v.begin(),v.end());
     for(int i=0;i<n;i++){
         cout<<v[i]<<" ";
     }
    return 0;
}
