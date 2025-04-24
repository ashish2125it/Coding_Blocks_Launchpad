#include <iostream>
using namespace std;
int main() 
{
   

 //  4 3 2 1
//   4 3 2 1
 //  4 3 2 1
 //  4 3 2 1

  int row,column;
  cout<<"Enter the number of row ";
  cin>>row;
  cout<<"Enter the number of column ";
  cin>>column;

  for(int i=1;i<=row;i++)
  {
    for(int j=column;j>=1;j--)
    cout<<j<<" ";
    cout<<endl;
  }


}