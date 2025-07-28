// code related to Character
#include <iostream>
#include<cstring> //cstylestring for that 
#include<string> 
#include<cctype>
///string class c++;


using namespace std;

bool isVowel(char c){
    c=tolower(c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        return true;
    }else {
        return false;
    }
}

int main() {
     
    string name;
    getline(cin,name);//get user input string (including white space);
    cout<<name<<endl;
    // int i=0;
    // while(name[i]!='\0'){
    //      i++;
        
    // }
    // cout<<"Length of above string is "<<i;
    
    // string fullName = "Aditya";
    
    // //size Of string
    // cout<<"Get length String : "<<fullName.length()<<endl;
    
    // //Modifying the string
    // //concatenating string for that use + /.append also
    // fullName= fullName+" Gore";
    // cout<<fullName<<endl;
    // //Inserting substr in str .insert(pos,substr);
    // fullName.insert(6," Ashok");
    // cout<<fullName<<endl;
    // //Replacing name .replace;
    // fullName.replace(0,6,"Apurva");
    // cout<<fullName<<endl;
    
    // //Searching
    // cout<<fullName.find("Ashok")<<endl;
    // cout<<fullName.find("Aditya")<<endl;
    // cout<<fullName.substr(0,6)<<endl;
    
    //Toggle each Character in String
    
    // string toggleName="";
    // for(int i=0;i<name.length();i++){
    //     if(islower(name[i])){
    //         toggleName+=toupper(name[i]);
    //     }else{
    //         toggleName+=tolower(name[i]);
    //     }
    // }
    // cout<<toggleName;
    
    //Cout the vowel in string
    
    // int cv=0;
    // for(int i=0;i<name.length();i++){
    //     if(isVowel(name[i])){
    //         cv++;
    //     }
    // }
    // cout<<cv;
    
    //Write a Program to Remove the Vowels from a String
    
    // string rmvstr="";
    // for(int i=0;i<name.length();i++){
    //     if(!isVowel(name[i])) rmvstr+=name[i];
    // }
    // cout<<rmvstr;
    
    //Write a Program to Remove All Characters From a String Except Alphabets
    // string alphastr="";
    // for(int i=0;i<name.length();i++){
    //     if(isalpha(name[i])) alphastr+=name[i];
    // }
    // cout<<alphastr;
    
    
    
    
   

    return 0;
}