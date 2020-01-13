#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int n=0,sum=0;
   for( int i=0;i<s.size();i++)
   {
       if(i==0)
       {
           n=(abs(s[i]-'a')<abs(26-abs(s[i]-'a')) ? abs(s[i]-'a'):abs(26-abs(s[i]-'a')) );
           //cout<<n<<endl;
           sum=n;

       }
       if(i>0)
       {
           int n=(abs(s[i-1]-abs(s[i+1-1]))<abs(26-abs(s[i-1]-abs(s[i+1-1]))) ? abs(s[i-1]-abs(s[i+1-1])):abs(26-abs(s[i-1]-abs(s[i+1-1]))) );
           //cout<<n<<endl;
           sum=sum+n;

       }


   }
   cout<<sum<<endl;
}


