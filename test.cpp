#include<iostream>
#include<cstring>
using namespace std;
class base
{
  int size;
  char *s;
public:
  base(const char *ptr = NULL);
   base(const base &);
   void print();
  void change(const char *);
};
base::base (const char *ptr){
  size  = strlen(ptr);
  s = new char[size+1];
   strcpy(s, ptr);
}
void base::print() {
cout<<"the string is : "<<s<<endl;
}
base::base(const base & f){
 size  = f.size;
 s = new char[size+1];
 strcpy(s, f.s);
}
void base::change(const char *ptr){
    delete[] s;
  size  =strlen(ptr);
  s = new char [size+1];
  strcpy(s, ptr);
}
int main() {
  base obj1("HIGOPAL");
  base obj2 = obj1;
   obj1.print();
   obj2.print();
   obj2.change("hellogopal....you are changed");
   obj1.print();
   obj2.print();
  return 0;
}
