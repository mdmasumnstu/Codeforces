#include <iostream>
 
using namespace std;
 
int findMedian(int a, int b, int c) 
{
  if (a > b) 
  {
    if (a > c) 
    {
      if (b > c) 
      {
        return b; 
      } 
      else 
      {
        return c; 
      }
    } 
    else 
    {
      return a;
    }
  } 
  else 
  {
    if (b > c) 
    {
      if (a > c) 
      {
        return a; 
      } 
      else 
      {
        return c;
      }
    } 
    else 
    {
      return b; 
    }
  }
}
 
int main() 
{
  int t;
  cin >> t;
 
  while (t--) 
  {
    int a, b, c;
    cin >> a >> b >> c;
    cout << findMedian(a, b, c) << endl;
  }
 
  return 0;
}