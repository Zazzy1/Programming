#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isAnagram(string a,string b){
int n1,n2;
n1=a.length();
n2=b.length();
if(n1!=n2)
    return false;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
for(int i=0;i<n1;i++)
{if(a[i]!=b[i])
return false;
}

return true;
}
int main()
{
string a,b;
cin>>a>>b;
bool ans;
ans=isAnagram(a,b);
if(ans==1)
cout<<"anagram";
else
    cout<<"not anagram";
return 0;
}
