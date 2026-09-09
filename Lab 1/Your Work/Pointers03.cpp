#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int a = 30;
   int *ptr = &a;
   int **ptr2 = &ptr;
   cout <<"Value of a using ptr :"<<**ptr2<<endl;
   cout <<"Value of ptr itself :"<<ptr2<<endl;
   return 0;
}