#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    int x;
    double y;
    string str;
    
    // Read and save an integer, double, and String to your variables.
    cin>>x;
    cin>>y;
    cin.ignore();
    getline(cin, str);
    // Print the sum of both integer variables on a new line.
    int result = i+x;
    double res = d+y;
    string r = s+str;
    // s.append(str);
    // Print the sum of the double variables on a new line.
    cout<<result<<endl;
    cout<< fixed<<setprecision(1)<<res<<endl;
    cout<<r<<endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    return 0;
}
