#include<iostream>
using namespace std;
template<class T>
class base
{
 T val;
 public:
 base(){cout<<"base temp called :"<<this<<endl;  }
 void get(T i) {
      val  = i;
    cout<<"this is class template get fun : "<< val<<" this : "<<this<<endl;
   }
};
template<class T>
class derived :public base<T>
{
  T dval;
  public:
  derived(T val){
    dval = val;
     cout<<"this is derievd class : "<<this<<endl;
    }
   void get(T & val){
  base<T>::get(val);
   cout<<"the derived class value is : "<<dval<<endl; 
    }
};
int main() {
   int j =10;
   base<int> b;
  derived<int> obj(j);
  int i =45;
  obj.get(i);
 return 0;
}
