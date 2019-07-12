#include <iostream>       // std::cout
using namespace std;
template<class T>
class base
{
    T val;
    public:
     base(T );
    void set();
};
template <class T>
base<T>::base(T str){
    val = str;
    cout<<"con called :"<<this<<endl;}
template<class T>
void base<T>::set(){
    cout<<"the output is :"<<val<<endl;
}
template<>
class base<char *>
{
    char * val;
    public:
     base(char *str){
          val =str;
         cout<<"special temp : "<<val<<endl;
     }
    
};
int main(){
     char *s= "hi this is gopal";
     
     base<int> *ptr = new base<int>(10);
     ptr->set();
     
         base<float> *ptr1 = new base<float>(99.9999);
     ptr1->set();
   base<char *>*str = new base<char *>(s);
    //str->set();
    return 0;
}
