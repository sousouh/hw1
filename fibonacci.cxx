
#include <iostream>
using namespace std;
int main(){
  int N,a,b,c;
  a=0;
  b=1;

   cout<< "A non-negative integer value please: "<< endl;
   cin>> N;
   
  if (N>1){
   for(int i=2; i<N+1; i++){
   c=a+b;
   a=b;
   b=c;
       }
   cout << "The " << N << "th number of Fibonacci sequence is " << c << endl;
                                                                             }
  else
    if (N==1)
     cout << "The " << N << "th number of Fibonacci sequence is " << b << endl;

        else
          cout << "The " << N << "th number of Fibonacci sequence is considered to be " << a << endl;

return 0;
         }
