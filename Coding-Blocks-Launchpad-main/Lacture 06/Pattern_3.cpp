#include <iostream>
using namespace std;
int main() 
{
   

 //  1 2 3 4
//   1 2 3 4
//   1 2 3 4
//   1 2 3 4

  int row,column;
  cout<<"Enter the number of row ";
  cin>>row;
  cout<<"Enter the number of column ";
  cin>>column;

  for(int i=1;i<=row;i++)
  {
    for(int j=1;j<=column;j++)
    cout<<j<<" ";
    cout<<endl;
  }



}