//homework
#include<iostream>
#include<vector>
using namespace std;
vector <string> a;
class User{
   
        string name;
        string accountholder;
        string pin;
        bool isLogin = false;
    public:
        string check(string accountholder){
            string ab;
            for (int i = 0 ; i < a.size() ; i++){
                if  (a[i] == accountholder){
                    ab = "Already exists" ;
                    return ab;
                }
            }
            a.push_back(accountholder);
        }
        void print(){
            cout << "Put your details:" << endl;
            cin >> accountholder;
            if (a.size() < 1)
            {
                a.push_back(accountholder);
            }
            else{
                string ab = check(accountholder);
            }
            cout << "Enter your pin" << endl;
            cin >> pin;
        }
        //Default constructor:
        User(string name){
            print();
        }
        void setPin(){
            int p;
            cout << "Enter your new pin" << endl;
            cin >> p;
            pin = p;
            cout << "Your pin is successfully changed" << endl;
        }
        //Login process:
        void Login(){
            string accountholder;
            string pin;
            cout << "Enter your name" << endl;
            cin >> accountholder;
            cout << "Enter your pin" << endl;
            cin >> pin;

            if (this->accountholder == accountholder && this->pin == pin){
                cout << "You are successfully logged in" <<endl;
                isLogin = true;
            }
            else{
                cout << "Oops you have logged out" << endl;
                string ptr;
                cout << "Enter new pin" << endl;
                cin >> ptr;
                if (ptr == pin)
                {
                    setPin();
                }
                else   {
                    cout << "Wrong pin entered" << endl;
                     isLogin = false;
                }  
            }     
        }
        //Logout:
        void Logout(){
            if (isLogin == false)
            {
                cout << "Your have successfully logged out" << endl;
            }
            
        }
        //show details:
        void showDetails(){
            if (isLogin == true)
            {
                cout << "showing your details" << endl;
                cout << "Your name is " << name << endl;
                cout << "Your username is " << accountholder << endl;
            }
            else{
                cout << "Incomplete login" << endl;
            }
            
        }

};

int main(){
    User a1("Sohom");
    a1.Login();
    a1.Logout();
    a1.showDetails();
    User a2("Sohom");
    a2.Login();
    a2.Logout();
    return 0;
}
