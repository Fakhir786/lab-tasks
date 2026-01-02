#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;
int main()
{   
    int account,pass_manager,tries=0,choice,i;
    string password;
    pass_manager=0;
    

    //Data
    string game[5]={"Black Myth: Wukong","Monster Hunter Wilds","HELlDIVERS 2","GTA V","Rust"};
    double price[5]={50,45,80,96,74};
    
        int id;
        string name[50];
        
        
    
   //Login menu
   do{
    menu:
    cout<<"Choose an option:"<<endl<<"1.Admin    2.Customer   3.Exit"<<endl;
    cin>>account;
   }while(account>3);
    if(account==1 || account==2)
    {
do{
    {cout<<"Enter password:";
    cin>>password;
    switch(account)
    {
        case 1:
            if(password=="admin123")
               { cout<<"Admin have successfully logged in."<<endl;
                pass_manager=1;
                break;}
            
            else
               { cout<<"Wrong password!"<<endl;
                pass_manager=0;}
            break;

        case 2:
            if(password=="customer123")
                {cout<<"Customer have succesfully logged in"<<endl;
                pass_manager=2;
                break;}
            else
               { cout<<"Wrong password!"<<endl;
                pass_manager=0;}
            break;
        case 3:
                break;
        default:
        	cout<<"Invalid choice";
    }
    tries++;
    }
    
    
}while(pass_manager==0 && tries!=3);
}
    if(account==3)
    {    cout<<"Program Exited!";
            exit(0);
    }

//Admin and Client functions
switch(pass_manager)
{
    case 1:
        cout<<"================="<<endl;
        cout<<"Admin"<<endl;
        cout<<"================="<<endl;
        cout<<"Select from the following:\n1.Update games and prices\n2.Delete games and prices\n3.Update Discounts\n4.Views Games\n5.Main Menu\n6.View statistics\n7.Logout ";
        cin>>choice;
        switch(choice)
        {
                       
          	case 1:
          	case 2:
          	case 3:
          	case 4:
          		case 6:
          	break;
            case 5:
             
             case 7:
             	goto menu;
             break;

            default:
                cout<<"Invalid choice";
                
            
            

        }

        break;

    case 2:
        cout<<"================="<<endl;
        cout<<"Client<<"<<endl;
        cout<<"================="<<endl;
        cout<<"Select from the following:\n 1.View games\n2.Select games\n3.Review Cart\n4.Checkout\n6.Main Menu\n7.Logout";
        cin>>choice;
        switch(choice)
        {
        	case 1:
          	case 2:
          	case 3:
          	case 4:
          	
            case 5:
            	break;
            case 6:
                
            case 7:
            	 goto menu;
                break;
            default:
                cout<<"Invalid choice";
        }
}

    return 0;
}
