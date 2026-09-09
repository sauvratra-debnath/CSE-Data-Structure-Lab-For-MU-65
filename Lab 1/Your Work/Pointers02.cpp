#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int a = 10;
   int *ptr = &a;
   *ptr = 20;
   cout <<"New value of a :"<<a<<endl;
   cout <<"Differenced pointer value :"<<(*ptr)<<endl;
   return 0;
}