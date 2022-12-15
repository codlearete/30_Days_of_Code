#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) 
    {
        string str;
        cin >> str;

        for (int j = 0; j < str.length(); j++) 
        {
            if (j % 2 == 0)
            {
                cout << str[j];
            }
        }

        cout << " ";

        for (int j = 0; j < str.length(); j++) 
        {
            if (j % 2 != 0)
            {
                cout << str[j];
            }
        }

        cout << endl;
    }

    return 0;
}
// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
//     int t;
//     cin>>t;
    
//     while(t--)
//     {
//         string s;
//         cin.ignore();
//         getline(cin,s);
        
//         for(int i=0;i<s.length();i++)
//         {
//             if(i%2 == 0)
//             {
//                 cout<<s[i];
//             }
//         }
        
//         cout<<" ";
        
//         for(int i=0;i<s.length();i++)
//         {
//             if(i%2 != 0)
//             {
//                 cout<<s[i];
//             }
//         }
        
//         cout<<endl;
        
//     }
     
//     return 0;
// }
