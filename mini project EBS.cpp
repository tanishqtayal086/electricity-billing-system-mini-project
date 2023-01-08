#include<iostream>
#include<cstring>
using namespace std;
class EBS{
    public:
        void login();
        void mainmenu();
        void newcustomer();
        void billing();
        void ans();
        void payment();
        void paybill();
        void complaint();
};
int bill;

void EBS::login (){
    EBS e;
    string username;
    string password;
    cout<<"Enter your username : ";
    cin>>username;
    cout<<"Enter your password : ";
    cin>>password;
    cout<<endl;
    if(username=="admin" && password=="12345"){
        cout<<"WELCOME login successful"<<endl;
        cout<<endl;
        e.mainmenu();
    }
    else{
        cout<<"Invalid username or password"<<endl;
        cout<<"Try again..."<<endl;
        cout<<endl;
        e.login();
    }
}

void EBS::mainmenu(){       // function to display main menu
    EBS e;
    int ch;
    cout<<"MAIN MENU"<<endl;
    cout<<"1. Add new customer"<<endl;
    cout<<"2. Bill generation"<<endl;
    cout<<"3. Pay bill"<<endl;
    cout<<"4. Register a complain"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<endl;
    cout<<"Enter your choice : ";
    cin>>ch;
    cout<<endl;
    switch (ch){
        case 1 :        e.newcustomer();
                        break;

        case 2 :        e.billing();
                        cout<<endl;
                        cout<<endl;
                        e.ans();
                        break;

        case 3 :        e.paybill();
                        break;

        case 4 :        e.complaint();
                        break;

        case 5 :        cout<<"********Thank you for visiting*********";
                        cout<<endl;
                        break;

        default :       cout<<"Invalid choice";
                        break;
    }
}

void EBS::newcustomer(){             // function for adding new customer
    EBS e;
    string a;
    cout<<"Do you want to add new customer (y/n) : ";
    cin>>a;
    if(a=="y"){
            string cname;
            string country;
            string state;
            string district;
            string city;
            string region;
            string aadhar;
            string phoneno;
            double pincode;
            int houseno;
            cout<<"Enter your name : ";
            cin>>cname;
            cout<<"Enter your country : ";
            cin>>country;
            cout<<"Enter your state : ";
            cin>>state;
            cout<<"Enter your district : ";
            cin>>district;
            cout<<"Enter your city : ";
            cin>>city;
            cout<<"Enter your PIN code : ";
            cin>>pincode;
            cout<<"Enter your region (address) : ";
            cin>>region;
            cout<<"Enter your house no : ";
            cin>>houseno;
            cout<<"Enter your aadhar card details : ";
            cin>>aadhar;
            cout<<"Enter your phone no : ";
            cin>>phoneno;
            cout<<endl;
            cout<<"Processing..............."<<endl;
            cout<<"New customer added successfully.."<<endl;
            cout<<"_______________________________________________________________________________________"<<endl;
            cout<<"THE NEW CUSTOMER DETAILS ARE"<<endl;
            cout<<"Name : "<<cname<<endl;
            cout<<"Aadhar details : "<<aadhar<<"*****"<<endl;
            cout<<"Phone number : "<<phoneno<<"**"<<endl;
            cout<<"Address : "<<houseno<<", "<<region<<", "<<city<<", "<<"Dist : "<<district<<", "<<state<<", "<<country<<endl;
            cout<<"PIN code : "<<pincode;
            cout<<endl;
            cout<<"_______________________________________________________________________________________"<<endl;
            cout<<"Username for new customer is : admin"<<endl;
            cout<<"Password for new customer is : 12345"<<endl;
            cout<<endl;
            e.mainmenu();
    }
    else if(a=="n"){
            cout<<endl;
            e.mainmenu();
    }
    else{
        cout<<"Invalid choice"<<endl;
        cout<<endl;
        e.mainmenu();
    }
}

void EBS::billing(){
    int units;
    cout<<"Enter the number of units consumed in this month acc to the meter : ";
    cin>>units;
    if(units<=100){
        bill=3*units;
        cout<<"Bill for this month is : "<<bill<<" Rs";
    }
    else if(units>100 && units<=200){
        bill=5*units;
        cout<<"Bill for this month is : "<<bill<<" Rs";
    }
    else if(units>200 && units<=300){
        bill=7*units;
        cout<<"Bill for this month is : "<<bill<<" Rs";
    }
    else{
        bill=10*units;
        cout<<"Bill for this month is : "<<bill<<" Rs";
    }
}

void EBS::ans(){             // function if we want to pay bill after bill generation
    EBS e;
    string ans;
    cout<<"Do you want to pay the bill now (y/n) : ";
    cin>>ans;
    if(ans=="y"){
        cout<<endl;
        e.payment();
    }
    else if(ans=="n"){
        cout<<endl;
        e.mainmenu();
    }
    else{
        cout<<"Invalid choice"<<endl;
        cout<<endl;
        e.mainmenu();
    }
}

void EBS::payment(){
    EBS e;
    string paymentoption;
    cout<<"Your bill amount is : "<<bill<<endl;
    cout<<"Do you want to pay bill by debit card/credit card/UPI : ";
    cin>>paymentoption;

    if(paymentoption=="debitcard"){         //to pay the bill by debit card
            string dno;
            int cvv;
            int pin;
            cout<<"Enter your debit card no : ";
            cin>>dno;
            cout<<"Enter your cvv number : ";
            cin>>cvv;
            cout<<"Enter your pin : ";
            cin>>pin;
            cout<<endl;
            if(pin==1212){
                cout<<"Processing........."<<endl;
                cout<<"Do not close the window..."<<endl;
                cout<<"____________________________________________________"<<endl;
                cout<<"Your bill has been paid successfully"<<endl;
                cout<<"Thanks for visiting"<<endl;
                cout<<endl;
                e.mainmenu();
            }
            else{
                cout<<"Invalid pin"<<endl;
                cout<<"Try again with correct pin"<<endl;
                cout<<endl;
                e.mainmenu();
            }
    }

    else if(paymentoption=="creditcard"){         //to pay the bill by creditcard
            string ccno;
            int cvv;
            int pin;
            cout<<"Enter your credit card no : ";
            cin>>ccno;
            cout<<"Enter your cvv number : ";
            cin>>cvv;
            cout<<"Enter your pin : ";
            cin>>pin;
            cout<<endl;
            if(pin==1313){
                cout<<"Processing........."<<endl;
                cout<<"Do not close the window..."<<endl;
                cout<<"____________________________________________________"<<endl;
                cout<<"Your bill has been paid successfully"<<endl;
                cout<<"Thanks for visiting"<<endl;
                cout<<endl;
                e.mainmenu();
            }
            else{
                cout<<"Invalid pin"<<endl;
                cout<<"Try again with correct pin"<<endl;
                cout<<endl;
                e.mainmenu();
            }
    }

    else if (paymentoption=="upi" || paymentoption=="UPI"){         //to pay the bill by upi
            string upiid;
            int pin;
            cout<<"Enter your upi id : ";
            cin>>upiid;
            cout<<"Enter your pin : ";
            cin>>pin;
            cout<<endl;
            if(pin==1414){
                cout<<"Processing........."<<endl;
                cout<<"Do not close the window..."<<endl;
                cout<<"____________________________________________________"<<endl;
                cout<<"Your bill has been paid successfully"<<endl;
                cout<<"Thanks for visiting"<<endl;
                cout<<endl;
                e.mainmenu();
            }
            else{
                cout<<"Invalid pin"<<endl;
                cout<<"Try again with correct pin"<<endl;
                cout<<endl;
                e.mainmenu();
            }
    }
    else{
        cout<<endl;
        cout<<"Invalid payment option"<<endl;
        cout<<endl;
        e.mainmenu();
    }

}

void EBS::paybill(){
    EBS e;
    e.billing();
    cout<<endl;
    e.ans();
}

void EBS::complaint(){
    EBS e;
    int c;
    string brief;
    cout<<"COMPLAINT Regarding : "<<endl;
    cout<<"1. Unable to login"<<endl;
    cout<<"2. Unable to generate the bill"<<endl;
    cout<<"3. Unable to pay the bill"<<endl;
    cout<<"4. Unable to add new customer"<<endl;
    cout<<"5. Any other complain"<<endl;
    cin>>c;

    switch(c) {
    case 1 :
                cout<<"_______________________________________________________________________________________"<<endl;
                cout<<"Try again entering correct username and password"<<endl;
                cout<<"SORRY FOR THE INCONVENIENCE..."<<endl;
                cout<<"If not solved contact +91 456454344354"<<endl;
                cout<<"_______________________________________________________________________________________"<<endl;
                cout<<endl;
                e.mainmenu();
                break;

    case 2 :    cout<<"_______________________________________________________________________________________"<<endl;
                cout<<"We will look after it and will revert to u soon"<<endl;
                cout<<"SORRY FOR THE INCONVENIENCE..."<<endl;
                cout<<"If not solved contact +91 456454344354"<<endl;
                cout<<"_______________________________________________________________________________________"<<endl;
                cout<<endl;
                e.mainmenu();
                break;

    case 3 :    cout<<"_______________________________________________________________________________________"<<endl;
                cout<<"It can be so that u have entered wrong payment details try it once again"<<endl;
                cout<<"SORRY FOR THE INCONVENIENCE..."<<endl;
                cout<<"If not solved contact +91 456454344354"<<endl;
                cout<<"_______________________________________________________________________________________"<<endl;
                cout<<endl;
                e.mainmenu();
                break;

    case 4 :    cout<<"_______________________________________________________________________________________"<<endl;
                cout<<"Enter correct customer details it can be so that u have entered any wrong information try it once again"<<endl;
                cout<<"SORRY FOR THE INCONVENIENCE..."<<endl;
                cout<<"If not solved contact +91 456454344354"<<endl;
                cout<<"_______________________________________________________________________________________"<<endl;
                cout<<endl;
                e.mainmenu();
                break;

    case 5 :    cout<<"_______________________________________________________________________________________"<<endl;
                cout<<"Write in brief about your complain : ";
                cin>>brief;
                cout<<"We will look after your complaint and will revert you sooon"<<endl;
                cout<<"SORRY FOR THE INCONVENIENCE...."<<endl;
                cout<<"If not solved contact +91 456454344354"<<endl;
                cout<<"_______________________________________________________________________________________"<<endl;
                cout<<endl;
                e.mainmenu();
                break;
    }
}

int main(){
    EBS e;
    cout<<"ELECTRICITY BILLING SYSTEM"<<endl;
    cout<<endl;
    e.login();
    return 0;
}
