//Dialog of the first example is given below.
#include<iostream>
using namespace std;
#include<string>

int main{

string name;

cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
cout << "?????: ";
cin >> name;
cout << "Fahsai: Wow!!! " << name <<" is a really cool name.";
cout << "Fahsai: I think you are an Engineering student. What is your student ID?";
cout << name <<":";
string id;
cin >> id;
cout << "Fahsai: I think you may be GEAR "<< int(id[0]+id[1]<<) - 12 ". I have a free movie ticket for you.";
cout << "Fahsai: Let\'s go to the cinema together!!!";
cout << "Fahsai: What movie do you want to watch?";
cout << name <<":";
string movie;
cin >> movie;
cout << "Fahsai: So....which day are you free to go with me?";
cout << name <<":";
string day;
cin >> day;
cout << "Fahsai: "<< day <<"....that is OK!!! I'm looking forward to watching "<<movie<<" with you.";
cout << name <<":";
string word;
cin >> word;
cout << "Fahsai: 555+ see you Next "<<day<< ". Bye Bye \\(^ ^)/";
}
