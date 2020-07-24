#include<iostream>

#include<fstream>  //ifsteam(read)   ofsteram(create)   fstream (ifstream , ofstream) iostream(cin ,cout)

using namespace std;
struct user {
  string name;
  string email;
  string password;
};
int main() {
  system("color  F0");
  
  //	    ofstream MyNewFile("userdataafter.txt");//create our file  with the name of (userdata.txt)
  fstream MyNewFile;
  MyNewFile.open("userdata.txt", ios::app);
  if (MyNewFile) {
  	goup:
  	system("cls");
    cout << "\t\t\t\t\t\tFile already exist" << endl;
    cout << "\t\t\t*************************************************************************" << endl;
    cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
    cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
    cout << "\t\t\t*\t\t\t Welcome Tiger's Tech \t\t\t\t*" << endl;
    cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
    cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
    cout << "\t\t\t*************************************************************************" << endl << endl;
    char res;

    cout << "\t\t\t*************************************************************************" << endl;
    cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
    cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
    cout << "\t\t\t*\tIf you have already an account \t\t\t\t\t*" << endl << endl;
    cout << "\t\t\t*\tPres 1 for login = \t\t\t\t\t\t*" << endl << endl;
    cout << "\t\t\t*\tIf u are a new user then \t\t\t\t\t*" << endl << endl;
    cout << "\t\t\t*\tPress 2 for Registration = "<<endl;
    cout << "\t\t\t*\tPress 3 to check data  = ";
    cin >> res;
    cout << "\t\t\t*\t\t\t\t\t\t\t\t\t" << endl;
    cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
    cout << "\t\t\t*************************************************************************" << endl << endl;

    if (res == '1') {
      system("cls");

    login:
    user obj[1000];

      ifstream getdata("userdata.txt");
      for (int i = 0; i < 1000; i++) {
        getdata >> obj[i].name;
        getdata >> obj[i].email;
        getdata >> obj[i].password;

      }
      string useremail;
      string userpassword;
      cout << "\t\t\t*************************************************************************" << endl;
      cout << "\t\t\t\t\tWelcome to login " << endl;
      cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
      cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
      cout << "\t\t\tEnter email = ";
      cin >> useremail;
      cout << "\t\t\tEnter password =";
      cin >> userpassword;
      cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
      cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
      cout << "\t\t\t*************************************************************************" << endl << endl;
    
      bool isLogin = false;
      for (int i = 0; i < 1000; i++) {
        if (useremail == obj[i].email && userpassword == obj[i].password) {
          system("cls");
          cout << "\t\t\t*************************************************************************" << endl;
          cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
          cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
          cout << "\t\t\t*\t\t\t Welcome " << obj[i].name << endl;
          cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
          cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
          cout << "\t\t\t*************************************************************************" << endl << endl;
          char userresponse;
          cout << "\t\t\t*************************************************************************" << endl;
          cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
          cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
          cout << "\t\t\tPress 1 for shopping = " << endl;
          cout << "\t\t\tPress 2 To open you own store = ";
          cin >> userresponse;
          cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
          cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
          cout << "\t\t\t*************************************************************************" << endl << endl;
          if (userresponse == '1') {
            system("cls");

            double iphone = 0;
            double samsungmob = 0;
            double laptop = 0;
            double gamingpc = 0;

            int wallet;
            char walletResponse;
            cout << "\t\t\t*************************************************************************" << endl;
            cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
            cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
            cout << "\t\t\t\t\t\tWelcome to Pak Tiger's" << endl;
            cout << "\t\t\t\t\t\tHow much do u want to spent  = ";
            cin >> wallet;
            cout << "\t\t\t\t\t\tyou have added the amount  = " << wallet << endl;
            cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
            cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
            cout << "\t\t\t*************************************************************************" << endl << endl;

            while (wallet >= 0) {
              if (wallet <= 10) {

                cout << "\t\t\t*************************************************************************" << endl;
                cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
                cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
                cout << "\t\t\t\tyou have = " << iphone << " APPLE  " << samsungmob << " SAMSUNG  " << endl << "\t\t\t\t In you inventory \n";
                cout << "\t\t\t\tYour Balance isnot enough to do shopping Beacuse our cheapset Product starting from 20$" << endl;
                cout << "\t\t\t\tYou remaining balance is = " << wallet << endl;
                cout << "\t\t\t\tDo you want to add more balance in you wallet Pres 1 = YES Press = 5 for checkout = ";
                cin >> walletResponse;
                cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
                cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
                cout << "\t\t\t*************************************************************************" << endl << endl;
                if (walletResponse == '1') { 
                  int addedamount;
                  cout << "\t\t\t\thow much do you want to add = ";
                  cin >> addedamount;
                  wallet = wallet + addedamount;
                  cout << "\t\t\t\t\twe have added in you balance " << wallet;
                  goto shop;
                }

                break;
              } else if (wallet != 10) {
                shop:

                  char response;
                char Cart;
                char Cart02;
                cout << "\t\t\t*************************************************************************" << endl;
                cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
                cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
                cout << "\t\t\t\tyou have = " << iphone << " APPLE  " << samsungmob << " SAMSUNG  " << endl << "\t\t\t\t In you inventory \n";
                cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
                cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
                cout << "\t\t\t*************************************************************************" << endl << endl;

                cout << "\t\t\t\tYou remaining balance is = " << wallet << endl;
                cout << "\t\t\t\t\t\t\t  MENU:    " << endl;
                cout << "\t\t\t\t\t 1              APPLE" << endl;
                cout << "\t\t\t\t\t 2              SAMSUNG" << endl;
                cout << "\t\t\t\tPress the number to get the item or press 5 to checkout = ";
                cin >> response;
                if (response == '1') {
                  cout << "\t\t\t\tYou have selected the APPLE Product " << endl;
                  cout << "\t\t\t\tYou remaining balance is = " << wallet << endl;
                  cout << "\t\t\t\t\tWhat Do you want To Buy = " << endl;
                  cout << "\t\t\t\t\t\t\t  MENU:    " << endl;
                  cout << "\t\t\t\t\t 1              APPLE MOBILE         " << endl;
                  cout << "\t\t\t\t\t 2              APPLE TAB            " << endl;
                  cout << "\t\t\t\tPress the number to get the item or press 5 to checkout = ";
                  cin >> Cart;
                  if (Cart == '1') {

                    cout << "\t\t\t\tYou remaining balance is = " << wallet << endl;
                    cout << "\t\t\t\t\t\tWhat Do you want To Buy = " << endl;
                    cout << "\t\t\t\t\t\t\t  MENU:    " << endl;
                    cout << "\t\t\t\t\t 1              Iphone 6S            10$" << endl;
                    cout << "\t\t\t\t\t 2              Iphone 7S            40$" << endl;
                    cout << "\t\t\t\t\t 3              Iphone XMAX PRO      30$" << endl;
                    cout << "\t\t\t\tPress the number to get the item or press 5 to checkout = ";
                    cin >> Cart02;
                    cout << endl;
                    if (Cart02 == '1') {
                      iphone++;
                      wallet = wallet - 10;
                    } else if (Cart02 == '2') {
                      iphone++;
                      wallet = wallet - 40;
                    } else if (Cart02 == '3') {
                      iphone++;
                      wallet = wallet - 30;
                    }
                  } else if (Cart == '2') {
                    char Cart03;
                    cout << "\t\t\t\tYou remaining balance is = " << wallet << endl;
                    cout << "\t\t\t\t\t\tWhat Do you want To Buy = " << endl;
                    cout << "\t\t\t\t\t\t\t  MENU:    " << endl;
                    cout << "\t\t\t\t\t 1              Apple Ipad Pro( 12 inch)               100$" << endl;
                    cout << "\t\t\t\t\t 2              Apple Ipad Air                         400$" << endl;
                    cout << "\t\t\t\t\t 3              Apple Ipad Mini                        300$" << endl;
                    cout << "\t\t\t\tPress the number to get the item or press 5 to checkout = ";
                    cin >> Cart03;
                    cout << endl;
                    if (Cart03 == '1') {
                      iphone++;
                      wallet = wallet - 100;
                    } else if (Cart03 == '2') {
                      iphone++;
                      wallet = wallet - 400;
                    } else if (Cart03 == '3') {
                      iphone++;
                      wallet = wallet - 300;
                    }
                  }

                } else if (response == '2') {

                  cout << "\t\t\t\tYou have selected the SAMSUNG Product " << endl;
                  cout << "\t\t\t\tYou remaining balance is = " << wallet << endl;
                  cout << "\t\t\t\t\tWhat Do you want To Buy = " << endl;
                  cout << "\t\t\t\t\t\t\t  MENU:    " << endl;
                  cout << "\t\t\t\t\t 1              MOBILE         " << endl;
                  cout << "\t\t\t\t\t 2              SAMSUNG TAB    " << endl;
                  cout << "\t\t\t\tPress the number to get the item or press 5 to checkout = ";
                  cin >> Cart;
                  if (Cart == '1') {

                    cout << "\t\t\t\tYou remaining balance is = " << wallet << endl;
                    cout << "\t\t\t\t\t\tWhat Do you want To Buy = " << endl;
                    cout << "\t\t\t\t\t\t\t  MENU:    " << endl;
                    cout << "\t\t\t\t\t 1              Samsung 6S            10$" << endl;
                    cout << "\t\t\t\t\t 2              Sasmsung 7S           40$" << endl;
                    cout << "\t\t\t\t\t 3              Samsung  Note 4       30$" << endl;
                    cout << "\t\t\t\tPress the number to get the item or press 5 to checkout = ";
                    cin >> Cart02;
                    cout << endl;
                    if (Cart02 == '1') {
                      samsungmob++;
                      wallet = wallet - 10;
                    } else if (Cart02 == '2') {
                      samsungmob++;
                      wallet = wallet - 40;
                    } else if (Cart02 == '3') {
                      samsungmob++;
                      wallet = wallet - 30;
                    }
                  } else if (Cart == '2') {
                    char Cart03;
                    cout << "\t\t\t\tYou remaining balance is = " << wallet << endl;
                    cout << "\t\t\t\t\t\tWhat Do you want To Buy = " << endl;
                    cout << "\t\t\t\t\t\t\t  MENU:    " << endl;
                    cout << "\t\t\t\t\t 1              Samsung Tab Pro( 12 inch)               100$" << endl;
                    cout << "\t\t\t\t\t 2              Samsung tab 4                           400$" << endl;
                    cout << "\t\t\t\t\t 3              Samsung tab 3                           300$" << endl;
                    cout << "\t\t\t\tPress the number to get the item or press 5 to checkout = ";
                    cin >> Cart03;
                    cout << endl;
                    if (Cart03 == '1') {
                      samsungmob++;
                      wallet = wallet - 100;
                    } else if (Cart03 == '2') {
                      samsungmob++;
                      wallet = wallet - 400;
                    } else if (Cart03 == '3') {
                      samsungmob++;
                      wallet = wallet - 300;
                    }
                  }

                } else if (response == '3') {
                  laptop++;
                  wallet = wallet - 30;
                } else if (response == '4') {
                  gamingpc++;
                  wallet = wallet - 200;
                } else if (response == '5') {
                  cout << "\t\t\t\t\t\tCheck Out ! Have a nice day ";
                  return 0;
                }
              }

            }
            MyNewFile.close();
          } else if (userresponse == '2') {
            system("cls");
            fstream myshopfile;
            myshopfile.open("shop.txt",ios::app);

            string Vshopname;
            string Vcontact;
            int P_ammount;
            int P_price;
            int i = 1;
            int x = 1;
            cout << "\t\t\t*************************************************************************" << endl;
            cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
            cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
            cout << "\t\t\t*welcome to you own shop  " << endl;
            cout << "\t\t\t*We need some information " << endl;;
            cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
            cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
            cout << "\t\t\t*************************************************************************" << endl << endl;

            while (x <= 1) {
              cout << "\t\t\tEnter Your Shop Name = ";
              cin.ignore();
              getline(cin,Vshopname);
              cout << "\t\t\tEnter Contact Number = ";
              cin >> Vcontact;
              cout << endl;
              myshopfile << Vshopname << Vcontact << endl;
              x++;
            }
            cout << "\t\t\tYou have resgiterd With the shop name = " << Vshopname << endl;
            cout << endl;
            cout << "\t\t\thow many Product do u want to added ";
            cin >> P_ammount;
            P_price = 2;
            string P_name[P_ammount][P_price];

            cout << "\t\t\tAdd Your product " << endl;
            for (int i = 0; i < P_ammount; i++) {

              for (int j = 0; j < P_price; j++) {

                cin >> P_name[i][j];

                myshopfile << P_name[i][j]<<"\t";
              }
            }

            cout << "\t\t\t\t\t\tWelcome To (" << Vshopname <<")"<< endl;

            for (int i = 0; i < P_ammount; i++) {
              cout << "\t\t\t\t Product # " << i << " = ";

              for (int j = 0; j < P_price; j++) {
                myshopfile >> P_name[i][j];

                cout << "\t" << P_name[i][j] << "\t";

              }
              cout << endl;
            }
            char goup;
            cout<<"DO you want to run this programme again  ? Press 1 ";
            cin>>goup;
            if(goup=='1'){
              goto goup;
			}else {
				cout<<"BYe BYE HAVE A NICE DAY ";
			}

            myshopfile.close();
          } else {
            cout << "\t\t\tinvalild value";
          }

          isLogin = true;
          break;
        } else {
          isLogin = false;
        }

      }
      if (isLogin == false) {
        cout << "\t\t\t*************************************************************************" << endl;
        cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
        cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
        cout << "\t\t\t*\t\tNot success !" << endl;
        cout << "\t\t\t*\t\tYour Email or Password is incorect" << endl;
        cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
        cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
        cout << "\t\t\t*************************************************************************" << endl << endl;

      }

    } else if (res == '2') {
      system("cls");

      cout << "\t\t\tWelcome to Registration page" << endl;
      string name;
      string email;
      string password;
      int i = 1;
      while (i <= 1) {
        cout << "\t\t\tEnter you name for Resgitration" << endl;
        cin>>name;
        cout << "\t\t\tEnter you email for Resgitration" << endl;
        cin>>email;
        cout << "\t\t\tEnter you password for Resgitration" << endl;
        cin >> password;
        MyNewFile << name << endl << email << endl << password << endl;
        cout << "\t\t\tYou are now Registerd" << endl;
        i = i + 1;
        goto login;
      }

      MyNewFile.close();

    } else if(res == '3'){
       int id;
       cout<<"Please enter admin Id = ";
       cin>>id;
	   if(id==1122){
	   	cout<<"\t\t\t\t\tThis is user data"<<endl;
	   	string data;
	   	char goback;
		   ifstream getalldatafromuser("userdata.txt");
	   	
	   	   while (!getalldatafromuser.eof()){
	   	  
			        getalldatafromuser>>data;
	   	   	        cout<<"\t"<<data<<endl;
			  }
			  cout<<"do u want to go back press 1";
			  cin>>goback;
			  if(goback=='1'){
			  	goto goup;
			  }
	   	
	   }else if(id==112233){
	   	cout<<"\t\t\t\t\tThis is shop data"<<endl;
	   	string data;
	   	char goback;
		 ifstream getalldatafromuser("shop.txt");
	   	
	   	   while (!getalldatafromuser.eof()){
	   	   	       
				    getalldatafromuser>>data;
	   	   	        cout<<"\t"<<data<<endl;
			  }
			  cout<<"do u want to go back press 1";
			  cin>>goback;
			  if(goback=='1'){
			  	goto goup;
			  }
	   }
    }
    else{
    	   cout << "\t\t\tERROR 404 File Not Found !";
   
	}
    return 0;
  }
}
