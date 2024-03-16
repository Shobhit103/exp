// in last of a string null character is stored --> \0
// cin do not takes input after space, tab and enter
// in char arr there is no need to pass size of array but in int arr we need to pass it
#include<iostream>
using namespace std;
char Lowercase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool palindrome(char name[],int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(Lowercase( name[s] ) == Lowercase(name[e])){
            s++;
            e--;
        }
        else{
            return 0;
        }
    }
    return 1;
}
void reverse(char name[], int n){
    for(int s=0,e=n-1;s<=e;s++,e--){
        swap(name[s],name[e]);
    }
}
int length(char name[]){
    int cnt = 0;
    for(int i=0;name[i]!='\0';i++){
        cnt++;
    }
    return cnt;
}
int main(){
    char name[20];
    string str = "Abcde";
    int len;
    cout << "enter your name"<< endl;
    cin >> name;
    cout << "your name is ";
    cout << name << endl;
    len = length(name);
    cout<< "Length of name is : "<< len << endl;
    reverse(name, len);
    cout<< "Reversed string is : " << name << endl;
    cout<< "Palindrome or not : " << palindrome(name, len) << endl; 
    cout << " CHARACTER is " << Lowercase('b') << endl;
    cout << " CHARACTER is " << Lowercase('C') << endl;

}