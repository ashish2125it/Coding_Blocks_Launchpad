#include <iostream>
using namespace std;
int main() 
{
   

 //  1 2 3 4
//   5 6 7 8
 //  9 10 11 12
 

  int row,column;
  cout<<"Enter the number of row ";
  cin>>row;
  cout<<"Enter the number of column ";
  cin>>column;

  int value = 1; 
  for(int i=1;i<=row;i++)
  {
    for(int j=1;j<=column;j++)
    {
    cout<<value<<" ";
    value++;
    }
    cout<<endl;
  }


}