//Input for linear search code in C++
#include<iostream>
using namespace std;

int linSearch(int arr[], int size, int key) {
   for(int i = 0; i<size; i++) {
      if(arr[i] == key) 
         return i+1;
   }
   return -1; 
}

int main() {
   int n, searchKey, loc;
   cout << "Enter No. of elements: ";
   cin >> n;
   int a[n]; //create an array of size n
   cout << "Enter items: " << endl;

   for(int i = 0; i< n; i++) {
      cin >> a[i];
   }

   cout << "Enter search key to search in the list: ";
   cin >> searchKey;

   if((loc = linSearch(a, n, searchKey)) >= 0)
      cout << "Item found at location: " << loc << endl;
   else
      cout << "Item is not found in the list." << endl;
}

/*
Output:

Enter No. of elements: 5
Enter items: 
23
65
98
90
23
Enter search key to search in the list: 90
Item found at location: 4
*/
