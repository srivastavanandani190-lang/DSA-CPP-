#include<iostream>
using namespace std;

// int countVowel(string str, int index) {
//     if (index == str.length()) {
//         return 0;
//     }
    
//     char currentChar = tolower(str[index]);
//     int count = (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u') ? 1 : 0;
    
//     return count + countVowel(str, index + 1);
// }

// int main() {
//     string str = "Hello World";
//     cout << "Number of vowels in the string: " << countVowel(str, 0) << endl;
//     return 0;
// }
int count(string str,int index){
    if(index==-1){
        return 0;
    }
    if(str[index]=='a' || str[index]=='e' || str[index]=='i' || str[index]=='o' || str[index]=='u' || str[index]=='A' || str[index]=='E' || str[index]=='I' || str[index]=='O' || str[index]=='U'){
        return 1+count(str,index-1);
    }
    else{
        return count(str,index-1);
    }
}
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    int result=count(str,str.length()-1);
    cout<<"Number of vowels in the string: "<<result<<endl;
    return 0;
}