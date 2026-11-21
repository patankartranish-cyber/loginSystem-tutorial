 #include <iostream>
using namespace std;
int main(){
string username ;
int password;
cout <<"enter your username :";
cin>>username;

cout<<"enter your Password :";
cin>>password;
if(username =="Tranish" && password==1111 && password >=1000 && password <=9999)  
{
  cout<<"login succesfull Tranish";
}
else if (username == "udit" && password==6666 && password >=1000 && password <=9999)
{
  cout << "login seccesfull udit";
}
else 
{
  cout << "user not found";
}
return 0;
}