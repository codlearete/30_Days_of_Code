#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;

    string s;
    int x;

    map<string,int>phonebook;

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>s; //key
        cin>>x; //value
        phonebook[s] = x;
    }

    string queries;
    while (cin>>queries)
    {
        /* code */
        if(phonebook.find(queries) != phonebook.end())
        {
            cout<<phonebook.find(queries)->first<<"="<<phonebook.find(queries)->second<<endl;
        }
        else{
            cout<<"Not found"<<endl;
        }
    }

    return 0;
}