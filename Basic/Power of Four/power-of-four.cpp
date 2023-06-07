//{ Driver Code Starts
#include<iostream>
using namespace std;


// } Driver Code Ends
#include <math.h>
class Solution
{
    public:
    int isPowerOfFour(unsigned int n)
    {
      // Your code goes here
      int i=0;
        while(i<=30){
            int ans=pow(4,i);
            if (ans==n){
                return true;
            }
            i++;
        }
        return false;
    }
};

//{ Driver Code Starts.

/*Driver program to test above function*/
int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
Solution ob;
if(ob.isPowerOfFour(n))
	cout<<1<<endl;
else
	cout<<0<<endl;
}
//getchar();
}

// } Driver Code Ends