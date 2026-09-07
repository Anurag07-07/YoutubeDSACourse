/*
Topic Covered
// What is C++ ? 
// Primitive Data Types and size
// Namespace and using namespace 
// Argc and argV
// sync with stdio  (false)
// cin tie (nullptr)
// if else else if 
// for and while and do while loop
// ternary operaters
// Pointers 
// Wild Pointer 
// Dangling Pointer 
// Pointer Arithmatic   
*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  // cout<<argc;
  // cout<<argv[0]<<endl;
  // for (int i = 0; i < argc; i++)
  // {
  //   cout<<argv[i]<<" ";
  // }

  //if else else if
  //For While and Do While 
  //Ternary operator
  //  int temp;cin>>temp;
  //  if (temp<15)
  //  {
  //   cout<<"Cold Weather";
  //  }else if (temp>=15 && temp<=25 )
  //   {
  //    cout<<"Normal Weather";
  //   }else{
  //     cout<<"Hot Weather";
  //  }

  // int marks;cin>>marks;
  //Condition ? true statement : false statement 
  // marks>80 ? cout<<"Good" : cout<<"Bad";
  
  // for (int i = 1; i <= 10; i = i+1)
  // {
  //   if (i==5)
  //   {
  //     continue;
  //   }
  //   cout<<i<<" ";
  // }

  // int a = 2; //increment by 3   2 5 8
  // int b = 4;  //increment by 1  4 6 7
  
  // while (true)
  // {
  //   if (a>b)
  //   {
  //     cout<<a<<" ";
  //     break; 
  //   }
  //   a = a+3;
  //   b = b+1;
  // }

  // int a = 11;
  // do
  // {
  //   cout<<a<<" ";
  // } while (a<10);
  
  // int value = 5;
  // cout<<"Value"<<endl;
  // cout<<value<<endl;
  // cout<<&value<<endl;
  // // cout<<*value<<endl;

  // cout<<"Ptr"<<endl;
  
  // int* ptr = &value;
  // cout<<ptr<<endl;
  // cout<<&ptr<<endl;
  // cout<<*ptr<<endl;
  
  // cout<<"DPtr"<<endl;

  // int** dptr = &ptr;
  // cout<<dptr<<endl;
  // cout<<&dptr<<endl;
  // cout<<*dptr<<endl;
  // cout<<**dptr<<endl;

  int* arr = new int[5];
  for(int i = 0;i<5;i++){
    cin>>arr[i];
  }



  // int* ptr1 = &arr[4];
  // cout<<arr[4]<<endl;
  // int* ptr2 = &arr[0];
  // int dist = ptr1-ptr2;
  // cout<<dist<<endl;
  // cout<<*(ptr2+1)<<endl;
  // if(ptr1>ptr2){
  //   cout<<"4 is greater";
  // }else{
  //   cout<<"0 is greater";
  // }

  cout<<arr<<endl;
  cout<<&arr[0]<<endl;
  
  return 0;
}
