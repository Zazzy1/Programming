#include<iostream>
using namespace std;
int anagram(string s1,string s2)
{
int first[26] = {0}, second[26] = {0}, c = 0;
while (s1[c] != '\0')
  {
    first[s1[c]-'a']++;
    c++;
  }
 c = 0;
 while (s2[c] != '\0')
  {
    second[s2[c]-'a']++;
    c++;
  }
 // Comparing frequency of characters
   for (c = 0; c < 26; c++)
  {
    if (first[c] != second[c])
      return 0;
    else
        {cout<<first[c];
        cout<<second[c]<<"\n";}

  }

  return 1;
}
int main()
{
string s1,s2;
cin>>s1>>s2;
if(anagram(s1,s2)==1)
    cout<<"anagram";
else
    cout<<"not anagrma";
return 0;
}
