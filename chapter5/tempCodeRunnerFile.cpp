
#include <iostream>
#include<string.h>
using namespace std;

char* delete_space(char *str,char *result) {
  int pos = 0;
 
  const int len = strlen(str); 
  for(int i = 0; i < len; i++) {
      char chr = str[i];

      if (chr == '\r' || chr == '\n' || chr == ' ') {
        continue;
      } 
      result[pos++] = chr;
  }
  return result;
}

int main() {
    
    char domain[]="@vku.udn.vn";
    char name[20];
    char result[100];
    char email[31];
    gets(name);
    const int length = strlen(name);

    if (length>20)
    {
        cout<<"N";
    }else{
    strcpy(email, delete_space(name, result));    
    strcat(email, domain);

    cout<<email;

    }
}