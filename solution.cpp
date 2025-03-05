//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// Function to locate the occurrence of the string x in the string s.
class Solution {
  public:
    int firstOccurence(string &txt, string &pat) {
        // Your code here
        int p;
        for(int i=0; i<txt.size(); i++){
            p = i;
            int c=0;
            for(int j=0; j<pat.size(); j++){
                if(txt[p]==pat[j])
                {
                    p++;
                    c++;
                }
                else{
                    break;
                }
                if(c==pat.size()){
                    return i;
                }
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        string b;

        cin >> a;
        cin >> b;
        Solution ob;
        cout << ob.firstOccurence(a, b) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends
