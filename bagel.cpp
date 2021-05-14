#include<iostream>

using namespace std;

int main() {
    cout << "Hello, Welcome to the app" << endl;
    cout << "Please create a new account" << endl;
    cout << "Choose a username: " << endl;//pop
    string user;
    getline(cin, user);
    cout << "Choose a Password" << endl;//popo
    string pass;
    getline(cin, pass);
    cout << "Please enter your Information" << endl;
    cout << "Username : " << endl;
    string username;
    getline(cin, username);
    cout << "Password" << endl;
    string password;
    getline(cin, password);

    while (username != user || password != pass){
        cout << "Wrong username or password or Password ,Please try again " << endl;
    cout << "Username:" << endl;
    getline(cin, username);
    cout << "Password:" << endl;
    getline(cin, password);
}
 cout<<"Welcome to the  bagel app"<<endl;
 double balance =5.00;
 cout<<"Would you like to add money to your balance?"<<endl;
 string q1;
 getline(cin,q1);
 if(q1=="yes") {
     cout << "Enter how much money you want to add:<<endl" << endl;
     double add;
     cin >> add;
     cout << "Your new balance is" << balance + add << "dollars"<<endl;
 }else {
     cout << "alright" << endl;
 }
 cout<<" Would you like a bagel today..?"<<endl;
string q2;
getline(cin,q2);

if(q2=="yes") {
    cout << "Please select What bagel you want" << endl;
    string bageltype[] = {"cheese bagel", "nature bagel", "egg bagel"};
    double bagelprices[] = {3.00, 4.00, 5.00};

    cout << "1. " << bageltype[0] << "--" << bagelprices[0] << "dollars" << endl;
    cout << "2. " << bageltype[1] << "--" << bagelprices[1] << "dollars" << endl;
    cout << "3. " << bageltype[2] << "--" << bagelprices[2] << "dollars" << endl;
    cout << " Your Choice : " << endl;
    int q3;
    cin >> q3;
    while(q3>3||q3<1){
        cout<<"This is not valid input please try again"<<endl;
        cin >> q3;
    }
    if (q3 == 1) {
        cout << " You have ordeed a " << bageltype[0] << endl;
        cout << "The total price of your Order " << bagelprices[0] << " dollars" << endl;
        cout << "You have  " << balance - bagelprices[0] << " dolllars left on your balance" << endl;

    }else if(q3==2){
        cout << " You have ordeed a " << bageltype[1] << endl;
        cout << "The total price of your Order " << bagelprices[1] << "dollars" << endl;
        cout << "You have  " << balance - bagelprices[1] << " dolllars left on your balance" << endl;

    }else if(q3==3){
        cout << " You have ordeed a " << bageltype[2] << endl;
        cout << "The total price of your Order " << bagelprices[2] << " dollars" << endl;
        cout << "You have " << balance - bagelprices[2] << " dolllars left on your balance" << endl;
    }

}else{
    cout<<"Alright Have a good Day..:)"<<endl;

}


return 0;
}