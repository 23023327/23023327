#include <iostream>
#include <string>
using namespace std;

int main() {
     cout << "Welcome to the Partner Selection Program"<<endl;
 int weight;
 cout<<"Enter your weight"<<endl;
 cin>>weight;
 string names="";
    cout << "Enter your full names:"<<endl;
    cin >> names;

string gender="";
    cout << "Enter your gender (male/female): "<<endl;
    cin >> gender;

int age;
    cout << "Enter your age: "<<endl;
    cin >> age;
int height;
   cout << "Enter your height(in metres: "<<endl;
    cin >> height;
string dressSize="";
    cout << "Enter your dressSize (small/medium/large): "<<endl;
    cin >> dressSize;
int BodyCount;
    cout << "Enter your bodycount: "<<endl;
    cin >> BodyCount;
 string employment="";
    cout << "are you employed?(yes/no): "<<endl;
    cin >> gender;


 if(gender=="female"){
    cout<<"yes i need a female"<<endl;
 }
    else(cout<<"not what i prefer"<<endl);


 if(age>18 && age<30){
    cout<<"i want her"<<endl;
 }
    else(cout<<"not interested"<<endl);


 if(employment=="yes"){
    cout<<"i prefer it"<<endl;}
    else(cout<<"must be employed"<<endl);

 if(BodyCount<5){
 cout<<"interested";<<endl}
    else(cout<<"no"<<endl);

 if(height<2){
    cout<<"i prefer it"<<endl;}
    else(cout<<"not interested"<<endl);

 if(dressSize=="medium"){
    cout<<"prefer it"<<endl;}
    else(cout<<"not my type"<<endl);


cout<<"i am"+names+"with weight"+weight+"am"+age+"years old"+" "+"my dress size is"+dressSize+"i have"+BodyCount+" "+"bodycount";


    return 0;
}
