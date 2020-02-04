#include <iostream>
#include "src/lib/solution.h"
#include <vector>
#include <map>
using namespace std;

int main()
{
    Solution solution ;
    string s="add";
    string s1="egg";
    //cout<<"before transform = "<< s <<endl;
    map<char,char> mymap=solution.StringMap(s,s1);
    //std::cout << solution.PrintHelloWorld() << std::endl;
    //cout<<"after transform = "<< s <<endl;
    cout<< "{";
    for (auto const& pair: mymap) {
        cout << "(" << pair.first << "->" << pair.second << ")";
    } 
    cout<< "}";
    return EXIT_SUCCESS;
}