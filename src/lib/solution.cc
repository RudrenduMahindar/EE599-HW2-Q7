#include "solution.h"
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

map<char,char> Solution::StringMap(string& s1,string& s2) { 
  
map<char,char> m;
pair<char,char> p;
int i=0;
for(auto c:s1)
{
  auto it=m.find(c);
  if(it == m.end()) 
    {
      p.first=c;
      p.second=s2[i];
      m.insert(p);
    }   
  else
      {
        if(s2[i]!=it->second)
          {
            m.clear();
            break;
          }
      }
  i++;
}    
  return m;        

}
 
