#include <iostream>
using namespace std;

int main() {
  // your code goes here
  int item;
  while(true){
    cin>>item;
    if(item==42){
        return false;
    }else{
       cout<<item<<endl;
      }
  }
  return 0;
}  
