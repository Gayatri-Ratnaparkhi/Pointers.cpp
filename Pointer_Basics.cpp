//Gayatri Ratnaparkhi
//PRN:23070123169
#include<iostream>
using namespace std;
int main(){
   int a=10;
   int*aptr;
   aptr=&a;
   cout<<&a<<endl;
   cout<<aptr<<endl;
   cout<<*aptr<<endl; 
}
/*
**Output**
0x6ffe14
0x6ffe14
10
*/
