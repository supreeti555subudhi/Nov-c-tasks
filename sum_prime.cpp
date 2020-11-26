#include <iostream>
using namespace std;
int function(int num)
 {
   int i, no= 1;
   for(i=2;i<= num/2;i++)
    {
      if(num%i == 0)
	  {
	  no= 0;
	  break;
      }
   }
   return no;
}


int main() 
{
   int num , i;
   cout<<"Enter a positive integer: \n";
   cin>>num;
   for(i = 2; i <= num/2; ++i)
    {
      if(function(i)) 
	  {
         if(function(num - i)) 
		 {
            cout<<num<<" = "<< i <<" + "<<num-i<<endl;
         }
      }
   }
   return 0;
}
