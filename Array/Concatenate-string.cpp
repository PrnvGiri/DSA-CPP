#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str1[]= "Hello, ";
    char str2[]="world";
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    char conc[len1 + len2 +1];
    for(int i=0; i<len1;i++){
        conc[i]=str1[i];
    }
    for(int i=0; i<len2;i++){
        conc[len1+i]=str2[i];
    }
    conc[len1+len2]='\0';
    cout<<conc<<endl;
    return 0;

}
