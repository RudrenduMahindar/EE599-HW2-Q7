#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(MapTest, HandlesValidMap) {
  Solution solution;
  string s="add";
  string s1="egg";
  map<char,char> actual=solution.StringMap(s,s1);
  map<char,char> expected;
  expected.insert(std::pair<char, char> ('a', 'e'));
  expected.insert(std::pair<char, char> ('d', 'g'));
  //expected.insert('a', 'e');
  //expected.insert('d', 'g');
  EXPECT_EQ(expected, actual);
}

TEST(MapTest, HandlesInvalidMap) {
  Solution solution;
  string s="add";
  string s1="egf";
  map<char,char> actual=solution.StringMap(s,s1);
  map<char,char> expected;
  EXPECT_EQ(expected, actual);
}

/*TEST(LowerTest, HandlesNumberStringInput) {
  Solution solution;
  string s="599";
  solution.StringLower(s);
  string actual=s; 
  string expected="599";
  EXPECT_EQ(expected, actual);
}*/