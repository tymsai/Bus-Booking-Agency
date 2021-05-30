#include<iostream>
#include<dos.h>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<bits/stdc++.h>
using namespace std;
class bus
{
    public:
        void delhi ();
        void mumbai ();
        void kolkata ();
        void bangalore ();
        void hyderabad ();
};
void bus::kolkata()
{   cout<<"--------------------------\n";
    cout<<"List of Buses for Kolkata : \n";
    cout<<"Enter the S.No to proceed \n";
    cout<<"1. AC , Cost Per Seat - 159INR \n2. Non AC , Cost Per Seat - 99INR\n";
    int ac,se,tc;
    char p;
    string name;
    cin>>ac;
    switch (ac)
    {
    case 1:
        cout<<"Enter your Full Name :  ";
        /*getline(cin,name);*/
        cin>>name;
        cout<<"Enter your required no of seats : ";
        cin>>se;
        tc=se*159;
        cout<<"--------------------\n";
        cout<<" Your total amount is : "<<tc<< " \n Name : "<<name<<" \n Total seats : "<<se<< " \n Do you want to continue Y / N \n ";
        cin>>p;
        if( p == 'y' || p == 'Y' )
        {
        cout<<"Fetching for the payment server ..... \n ";
        Sleep(3000);/*delay(3000);*/
        cout<<"Amout is successfully deducted from your Travel Id \n ";
        cout<<"Reservation Success !!! \n Happy Journey ";
        }
        else{
            cout<< "Order Cancelled ";
            exit;
        }
        break;
    case 2:
           cout<<"Enter your Full Name :  ";
        /*getline(cin,name);*/
        cin>>name;
        cout<<"Enter your required no of seats : ";
        cin>>se;
        tc=se*99;
        cout<<"--------------------\n";
        cout<<" Your total amount is : "<<tc<< " \n Name : "<<name<<" \n Total seats : "<<se<< " \n Do you want to continue Y / N \n ";
        cin>>p;
        if( p == 'y' || p == 'Y' )
        {
        cout<<"Fetching for the payment server ..... \n ";
        Sleep(3000);/*delay(3000);*/
        cout<<"Amout is successfully deducted from your Travel Id \n ";
        cout<<"Reservation Success !!! \n Happy Journey ";
        }
        else{
            cout<< "Order Cancelled ";
            exit;
        }
        break;
    default:
        cout<<"wrong Input ";
        break;
    }
    getch();
}
void bus::delhi()
{
    cout<<"--------------------------\n";
    cout<<"List of Buses for Delhi : \n";
    cout<<"Enter the S.No to proceed \n";
    cout<<"1. AC , Cost Per Seat - 559INR \n2. Non AC , Cost Per Seat - 499INR\n";
    int ac,se,tc;
    char p;
    string name;
    cin>>ac;
    switch (ac)
    {
    case 1:
        cout<<"Enter your Full Name :  ";
        /*getline(cin,name);*/
        cin>>name;
        cout<<"Enter your required no of seats : ";
        cin>>se;
        tc=se*559;
        cout<<"--------------------\n";
        cout<<" Your total amount is : "<<tc<< " \n Name : "<<name<<" \n Total seats : "<<se<< " \n Do you want to continue Y / N \n ";
        cin>>p;
        if( p == 'y' || p == 'Y' )
        {
        cout<<"Fetching for the payment server ..... \n ";
        Sleep(3000);/*delay(3000);*/
        cout<<"Amout is successfully deducted from your Travel Id \n ";
        cout<<"Reservation Success !!! \n Happy Journey ";
        }
        else{
            cout<< "Order Cancelled ";
            exit;
        }
        break;
    case 2:
           cout<<"Enter your Full Name :  ";
        /*getline(cin,name);*/
        cin>>name;
        cout<<"Enter your required no of seats : ";
        cin>>se;
        tc=se*499;
        cout<<"--------------------\n";
        cout<<" Your total amount is : "<<tc<< " \n Name : "<<name<<" \n Total seats : "<<se<< " \n Do you want to continue Y / N \n ";
        cin>>p;
        if( p == 'y' || p == 'Y' )
        {
        cout<<"Fetching for the payment server ..... \n ";
        Sleep(3000);/*delay(3000);*/
        cout<<"Amout is successfully deducted from your Travel Id \n ";
        cout<<"Reservation Success !!! \n Happy Journey ";
        }
        else{
            cout<< "Order Cancelled ";
            exit;
        }
        break;
    default:
        cout<<"wrong Input ";
        break;
    }
    getch();
}
void bus::hyderabad()
{
    cout<<"--------------------------\n";
    cout<<"List of Buses for Hydeabad : \n";
    cout<<"Enter the S.No to proceed \n";
    cout<<"1. AC , Cost Per Seat - 359INR \n2. Non AC , Cost Per Seat - 199INR\n";
    int ac,se,tc;
    char p;
    string name;
    cin>>ac;
    switch (ac)
    {
    case 1:
        cout<<"Enter your Full Name :  ";
        /*getline(cin,name);*/
        cin>>name;
        cout<<"Enter your required no of seats : ";
        cin>>se;
        tc=se*359;
        cout<<"--------------------\n";
        cout<<" Your total amount is : "<<tc<< " \n Name : "<<name<<" \n Total seats : "<<se<< " \n Do you want to continue Y / N \n ";
        cin>>p;
        if( p == 'y' || p == 'Y' )
        {
        cout<<"Fetching for the payment server ..... \n ";
        Sleep(3000);/*delay(3000);*/
        cout<<"Amout is successfully deducted from your Travel Id \n ";
        cout<<"Reservation Success !!! \n Happy Journey ";
        }
        else{
            cout<< "Order Cancelled ";
            exit;
        }
        break;
    case 2:
           cout<<"Enter your Full Name :  ";
        /*getline(cin,name);*/
        cin>>name;
        cout<<"Enter your required no of seats : ";
        cin>>se;
        tc=se*199;
        cout<<"--------------------\n";
        cout<<" Your total amount is : "<<tc<< " \n Name : "<<name<<" \n Total seats : "<<se<< " \n Do you want to continue Y / N \n ";
        cin>>p;
        if( p == 'y' || p == 'Y' )
        {
        cout<<"Fetching for the payment server ..... \n ";
        Sleep(3000);/*delay(3000);*/
        cout<<"Amout is successfully deducted from your Travel Id \n ";
        cout<<"Reservation Success !!! \n Happy Journey ";
        }
        else{
            cout<< "Order Cancelled ";
            exit;
        }
        break;
    default:
        cout<<"wrong Input ";
        break;
    }
    getch();
}
void bus::bangalore()
{
    cout<<"--------------------------\n";
    cout<<"List of Buses for Bangalore : \n";
    cout<<"Enter the S.No to proceed \n";
    cout<<"1. AC , Cost Per Seat - 459INR \n2. Non AC , Cost Per Seat - 299INR\n";
    int ac,se,tc;
    char p;
    string name;
    cin>>ac;
    switch (ac)
    {
    case 1:
        cout<<"Enter your Full Name :  ";
        /*getline(cin,name);*/
        cin>>name;
        cout<<"Enter your required no of seats : ";
        cin>>se;
        tc=se*459;
        cout<<"--------------------\n";
        cout<<" Your total amount is : "<<tc<< " \n Name : "<<name<<" \n Total seats : "<<se<< " \n Do you want to continue Y / N \n ";
        cin>>p;
        if( p == 'y' || p == 'Y' )
        {
        cout<<"Fetching for the payment server ..... \n ";
        Sleep(3000);/*delay(3000);*/
        cout<<"Amout is successfully deducted from your Travel Id \n ";
        cout<<"Reservation Success !!! \n Happy Journey ";
        }
        else{
            cout<< "Order Cancelled ";
            exit;
        }
        break;
    case 2:
           cout<<"Enter your Full Name :  ";
        /*getline(cin,name);*/
        cin>>name;
        cout<<"Enter your required no of seats : ";
        cin>>se;
        tc=se*299;
        cout<<"--------------------\n";
        cout<<" Your total amount is : "<<tc<< " \n Name : "<<name<<" \n Total seats : "<<se<< " \n Do you want to continue Y / N \n ";
        cin>>p;
        if( p == 'y' || p == 'Y' )
        {
        cout<<"Fetching for the payment server ..... \n ";
        Sleep(3000);/*delay(3000);*/
        cout<<"Amout is successfully deducted from your Travel Id \n ";
        cout<<"Reservation Success !!! \n Happy Journey ";
        }
        else{
            cout<< "Order Cancelled ";
            exit;
        }
        break;
    default:
        cout<<"wrong Input ";
        break;
    }
    getch();
}
void bus::mumbai()
{
    cout<<"--------------------------\n";
    cout<<"List of Buses for Mumbai : \n";
    cout<<"Enter the S.No to proceed \n";
    cout<<"1. AC , Cost Per Seat - 109INR \n2. Non AC , Cost Per Seat - 59INR\n";
    int ac,se,tc;
    char p;
    string name;
    cin>>ac;
    switch (ac)
    {
    case 1:
        cout<<"Enter your Full Name :  ";
        /*getline(cin,name);*/
        cin>>name;
        cout<<"Enter your required no of seats : ";
        cin>>se;
        tc=se*109;
        cout<<"--------------------\n";
        cout<<" Your total amount is : "<<tc<< " \n Name : "<<name<<" \n Total seats : "<<se<< " \n Do you want to continue Y / N \n ";
        cin>>p;
        if( p == 'y' || p == 'Y' )
        {
        cout<<"Fetching for the payment server ..... \n ";
        Sleep(3000);/*delay(3000);*/
        cout<<"Amout is successfully deducted from your Travel Id \n ";
        cout<<"Reservation Success !!! \n Happy Journey ";
        }
        else{
            cout<< "Order Cancelled ";
            exit;
        }
        break;
    case 2:
           cout<<"Enter your Full Name :  ";
        /*getline(cin,name);*/
        cin>>name;
        cout<<"Enter your required no of seats : ";
        cin>>se;
        tc=se*59;
        cout<<"--------------------\n";
        cout<<" Your total amount is : "<<tc<< " \n Name : "<<name<<" \n Total seats : "<<se<< " \n Do you want to continue Y / N \n ";
        cin>>p;
        if( p == 'y' || p == 'Y' )
        {
        cout<<"Fetching for the payment server ..... \n ";
        Sleep(3000);/*delay(3000);*/
        cout<<"Amout is successfully deducted from your Travel Id \n ";
        cout<<"Reservation Success !!! \n Happy Journey ";
        }
        else{
            cout<< "Order Cancelled ";
            exit;
        }
        break;
    default:
        cout<<"wrong Input ";
        break;
    }
    getch();
}
int main(){
    system("Color 0A");
    int a;
    char b;
    bus obj;
    string un,c, pass = "1234Abc*";
    
    cout<<"\t\t\t\t\t\t\t\t\t !!! Welcome !!! \n\t\t\t\t\t\t\t\t We cover all your Destinations \n"<<endl;
    cout<<"Enter Your Travel Id Password to continue \n ";
    cout<<"\nEnter Password : ";
    getline(cin,c);
    if(c==pass)
    {
        cout<<"Enter the S.No to proceed \n ";
        cout<<"1. Delhi \n 2. Mumbai \n 3. Kolkata \n 4. Bangalore \n 5. hyderabad \n";
        cin>>a;
        switch (a)
        {
        case 1:
            obj.delhi();
            break;
        case 2:
            obj.mumbai();
            break;
        case 3:
            obj.kolkata();
            break;
        case 4:
            obj.bangalore();
            break;
        case 5:
            obj.hyderabad();
            break;            
        default:
            cout<<"Wrong nSelection";
            break;
        }
    }
    else{
        cout<<"Wrong password";
        getch();
        exit;
    }
    return 0;
}
/* THE END */