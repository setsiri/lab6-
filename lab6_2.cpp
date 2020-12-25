#include<iostream>
#include<string>
using namespace std;



int main(){

	
	string name;
	cout<<"Fahsai: Sawadee ka...Can you tell me your name?"<<"\n";
	cout<<"?????: ";
	getline(cin,name);
	cout<<"Fahsai: Wow!!! "<<name<<" is a really cool name."<<"\n";
	
	
	int Id;
	int gear;
	cout<<"Fahsai: I think you are an Engineering student. What is your student ID?"<<"\n";
	cout<<name<<": ";
	cin>>Id;
	gear = (Id/10000000)-12;
	cout<<"Fahsai: I think you may be GEAR "<<gear<<". I have a free movie ticket for you."<<"\n";
	cin.ignore();
	
	string movie;
	cout<<"Fahsai: Let's go to the cinema together!!!"<<"\n";
	cout<<"Fahsai: What movie do you want to watch?"<<"\n";
	cout<<name<<": ";
	getline(cin,movie);
	
	
	string time;
	cout<<"Fahsai: So....which day are you free to go with me?"<<"\n";
	cout<<name<<": ";
	getline(cin,time);
	cout<<"Fahsai: "<<time<<"....that is OK!!! I'm looking forward to watching "<<movie<<" with you."<<"\n";
	
	
	string bye;
	cout<<name<<": ";
	getline(cin,bye);
	cout<<"Fahsai: 555+ see you "<<time<<". Bye Bye \\(^ ^)/";


}
