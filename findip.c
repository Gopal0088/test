#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* findnetwork(char *s){
  int i,j,ip=0;
   i=0;j=1;
   while(s[i] != '.'){
      ip =( ip*10)+(s[i]-'0');
     // j =j*10;
      i++;
   }
  i--;
  if(ip >= 1 && ip <= 126)
    return "A";
  else if(ip >= 128 && ip <= 191)
   return "B";
 else if(ip >= 192 && ip <= 223)
   return "C";
 else
   return "can't find ip";
}
int main() {
 char s[] = "192.168.1.1";



 printf("the network is :%s\n", findnetwork(s));
 return 0;
}
