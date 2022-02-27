#include <iostream>
using namespace std;

int binary_search(int *arr, int num, int key)
{ 
  int start = 0;
  int end = num -1;
  int mid = (start + end) / 2;

  cout<<"mid"<<mid<<endl;
  while(start <= end)
    {
      mid = (start + end)/ 2;
      cout<<"mid"<<mid<<endl;
      if (arr[mid] == key)
      {
        return mid;
      }
      else if (arr[mid] < key)
      {
        start = mid + 1;
      }
      else
      {  
        end = mid -1;
      }
    }
  return -1;
}

int main()
{
  int arr[] = {24,34,44,55,61};
  int num_of_elements = sizeof(arr)/sizeof(int);
  int index = -1;
  int key = -1;
  cout<<"Enter the number to search"<<endl;
  cin>>key;
  index = binary_search(arr,num_of_elements,key);
  if(index != -1)
  {
    cout<<"Number found at "<<index;
  }
  else
  {
    cout<<"Number not found";
  }
  
}