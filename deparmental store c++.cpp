//FUNCTIONS OF C++ USED :- CLASSES , CONSTRUCTOR , DESTRUCTORS , MANIPULATORS , STRINGS    
#include<iostream>                                                                
#include<conio.h>
#include<math.h>
#include<string>
#include<iomanip>
using namespace std;
class store
{   
    public:
	store()                                               // DEFAULT CONSTRUCTOR
	{
		cout<<setfill('*')<<setw(10)<<"*"<<" WELCOME TO RELIANCE MART , SHOPPING MADE EASY "<<setfill('*')<<setw(10)<<"*"<<endl<<endl;  //Manipulators
	cout<<"PRESS 1 - LOGIN AS AUTHORISED PERSONNEL ."<<endl ;
	cout<<"PRESS 2 - LOGIN AS REGISTERED RELIANCE-MART CUSTOMER ."<<endl ;
	int alpha;
	cin>>alpha;
	switch (alpha)
	{
	case 1:
	cout<<"ENTER PASSWORD : "<<endl;
   char password[20];int i;
	for(i=0;i<5;i++)
	{
	password[i]=getch();
	system("cls");
	cout<<"ENTER PASSWORD : "<<endl;
	for(int j=1;j<=(i+1);j++)
	{
		cout<<"*";
	}
	}
	break;
	case 2:
	cout<<"ENTER PASSWORD : "<<endl;
	
	for(i=0;i<5;i++)
	{
	password[i]=getch();
	system("cls");
	cout<<"ENTER PASSWORD : "<<endl;
	for(int j=1;j<=(i+1);j++)
	{
		cout<<"*";
	}
	}
	break;
	default :
	cout<<"KINDLY ,  CHOOSE VALID OPTION"<<endl;
			
	}
	cout<<"**** ACCESS GRANTED ******!!"<<endl<<endl;
    cout<<"PLEASE CHOOSE ANYONE AMONG THE FOLLOWING OPTIONS "<<endl<<endl;
	}
	
	
  
		
	void choose ()                                                    
	{   
		 A :{
		cout<<"PRESS : "<<endl;
		cout<<"1 TO BUY "<<endl;
		cout<<"2 TO SEE STOCKS "<<endl;
		cout<<"3 TO ADD STOCKS "<<endl;
		cout<<"4 TO SEARCH AN ITEM"<<endl;
		cout<<"5 FOR MAKING PAYMENT "<<endl;
		cout<<"6 FOR COMPLAINT AND FEEDBACK "<<endl;
		cout<<"7 TO QUIT"<<endl<<endl;
		
		int beta;
		string feedback;
		cin>>beta;
		switch(beta) 
	
		{
			case 1:
	    {
				cout<<"PLEASE CHOOSE THE CATEGORY :"<<endl;
			cout<<"PRESS 11 FOR CLOTHING & FASHION"<<endl;
			cout<<"PRESS 12 FOR ELECTRONICS"<<endl;
			cout<<"PRESS 13 FOR GROCERY"<<endl;
			cout<<"PRESS 14 FOR BOOKS,TOYS,BAGS"<<endl<<endl;
			int gamma;
			cin>>gamma;
			switch(gamma)
			{
				case 11:
		
		
				cout<<"PLEASE SEE THE STOCKS BELOW :"<<endl;
			cout<<"CATEGORY          ITEM CODE           ITEM                     QUANTITY                 PRICE/PC       "<<endl;
			cout<<"CLOTHING              C1                COTTON SHIRTS               250                     100/-        "<<endl;
			cout<<"CLOTHING              C2               TROUSERS                        250                     200/-        "<<endl;
			cout<<"CLOTHING              C3               SWEATERS                       100                     500/-        "<<endl;
			cout<<"CLOTHING              C4               BLAZERS                         50                      1,000/-      "<<endl<<endl;
			break;
			
			
			
			case 12:
		
			cout<<"PLEASE SEE THE STOCKS BELOW :"<<endl;
			cout<<"CATEGORY          ITEM CODE           ITEM                     QUANTITY                 PRICE/PC       "<<endl;
			cout<<"ELECTRONICS           E1               REFRIGERATOR                  30                      35,000/-     "<<endl;
			cout<<"ELECTRONICS           E2               IPHONE X                      50                    80,000/-             "<<endl;
 			cout<<"ELECTRONICS           E3               ELECTRIC IRON                 40                      10,000/-     "<<endl<<endl;
 			break;
 	
 			case 13:
 		
				 		cout<<"PLEASE SEE THE STOCKS BELOW :"<<endl;
			cout<<"CATEGORY          ITEM CODE           ITEM                     QUANTITY                 PRICE/PC       "<<endl;
			cout<<"GROCERY               G1               ATTA SHAKTIBHOG                200                     350/-        "<<endl;
			cout<<"GROCERY               G2               REFINED OIL 1L                500                     90/-         "<<endl;
			cout<<"GROCERY               G3               SUGAR 1KG                     1,000                   50/-         "<<endl;
			cout<<"GROCERY               G4               SALT 1KG                     500                     20/-         "<<endl<<endl;
			break;
		
		case 14:
		
			cout<<"PLEASE SEE THE STOCKS BELOW :"<<endl;
			cout<<"CATEGORY          ITEM CODE           ITEM                     QUANTITY                 PRICE/PC       "<<endl;
			cout<<"BOOKS,TOYS,BAGS       B1               INTRO TO C++                 70                      400/-        "<<endl;
			cout<<"BOOKS,TOYS,BAGS       B2               BARBIE DOLL                  50                      300/-        "<<endl;
			cout<<"BOOKS,TOYS,BAGS       B3               GYM BAG                      80                      500/-        "<<endl;
			cout<<"BOOKS,TOYS,BAGS       B4               SCHOOL BAG                  100                      400/-        "<<endl<<endl;
		
			break;	
		
			}
			
			char zz[10];
			cout<<"ENTER THE CODE OF THE ITEM YOU WANT TO BUY"<<endl;
			cin>> zz;
			cout<<"THANKS FOR BUYING"<<endl;
			cout<<"YOU HAVE TO PAY RS. 100 + GST(18%)= Rs. 118"<<endl;
			cout<<"YOU CAN PAY USING DEBIT CARD OR NET-BANKING UNDER PAYMENT TAB"<<endl<<endl;
		    goto A;
			
			
		}
			
			
			case 2:
		
		
					{
			cout<<"PLEASE SEE THE STOCKS BELOW :"<<endl;
			cout<<"CATEGORY          ITEM CODE           ITEM                     QUANTITY                 PRICE/PC       "<<endl;
			cout<<"CLOTHING              1                COTTON SHIRTS               250                     100/-        "<<endl;
			cout<<"CLOTHING              2               TROUSERS                     250                     200/-        "<<endl;
			cout<<"CLOTHING              3               SWEATERS                     100                     500/-        "<<endl;
			cout<<"CLOTHING              4               BLAZERS                      50                      1,000/-      "<<endl;
			cout<<"ELECTRONICS           5               REFRIGERATOR                 30                      35,000/-     "<<endl;
			cout<<"ELECTRONICS           6               IPHONE X                     50                       80,000/-    "<<endl;
 			cout<<"ELECTRONICS           7               ELECTRIC IRON                40                      10,000/-     "<<endl;
			cout<<"GROCERY               8               ATTA SHAKTIBHOG              200                     350/-        "<<endl;
			cout<<"GROCERY               9               REFINED OIL 1L               500                     90/-         "<<endl;
			cout<<"GROCERY               10               SUGAR 1KG                   1,000                   50/-         "<<endl;
			cout<<"GROCERY               11              SALT 1KG                     500                     20/-         "<<endl;
			cout<<"BOOKS,TOYS,BAGS       12               INTRO TO C++                70                      400/-        "<<endl;
			cout<<"BOOKS,TOYS,BAGS       13               BARBIE DOLL                 50                      300/-        "<<endl;
			cout<<"BOOKS,TOYS,BAGS       14               GYM BAG                     80                      500/-        "<<endl;
			cout<<"BOOKS,TOYS,BAGS       15               SCHOOL BAG                  100                   400/-          "<<endl<<endl<<endl;
			
		    }
		    cout<<"NOW PRESS ANOTHER KEY OR 7 TO EXIT"<<endl<<endl;
		    goto A;
		
		
			case 3:
		{
				cout<<"_________________________________________________________________________________________________________________"<<endl<<endl;
			cout<<"-------------PORTAL OF ADDING STOCKS---------------------" <<endl<<endl	;
			int n;
			cout<<"HOW MANY QUANTITIES OF ALL ITEMS DO YOU WANT TO ADD"<<endl;
			cin>>n;
			cout<<"PLEASE SEE  UPDATED THE STOCKS BELOW :"<<endl;
			cout<<"CATEGORY          ITEM CODE           ITEM                 OLD QUANTITY    NEW QUANTITY                 PRICE/PC       "<<endl;
			cout<<"CLOTHING              1                COTTON SHIRTS        250              "<< n+250   <<"                 "  <<"     100/-        "<<endl;
			cout<<"CLOTHING              2               TROUSERS              250              "<< n+250   <<"                 "  <<"     200/-        "<<endl;
			cout<<"CLOTHING              3               SWEATERS              100              "<< n+100   <<"                 "  <<"     500/-        "<<endl;
			cout<<"CLOTHING              4               BLAZERS               50               "<< n+50    <<"                 "  <<"     1,000/-      "<<endl;
			cout<<"ELECTRONICS           5               REFRIGERATOR          30               "<< n+30    <<"                 "  <<"     35,000/-     "<<endl;
			cout<<"ELECTRONICS           6               IPHONE X              50               "<< n+50    <<"                 "  <<"     80,000/-     "<<endl;
 			cout<<"ELECTRONICS           7               ELECTRIC IRON         40               "<< n+40    <<"                 "  <<"     10,000/-     "<<endl;
			cout<<"GROCERY               8               ATTA SHAKTIBHOG       200              "<< n+200   <<"                 "  <<"     350/-        "<<endl;
			cout<<"GROCERY               9               REFINED OIL 1L        500              "<< n+500   <<"                 "  <<"     90/-         "<<endl;
			cout<<"GROCERY               10               SUGAR 1KG             1000             "<< n+1000  <<"                 "  <<"     50/-         "<<endl;
			cout<<"GROCERY               11               SALT 1KG              500              "<< n+500   <<"                 "  <<"     20/-         "<<endl;
			cout<<"BOOKS,TOYS,BAGS       12               INTRO TO C++          70               "<< n+70    <<"                 "  <<"     400/-        "<<endl;
			cout<<"BOOKS,TOYS,BAGS       13               BARBIE DOLL           50               "<< n+50    <<"                 "  <<"     300/-        "<<endl;
			cout<<"BOOKS,TOYS,BAGS       14               GYM BAG               80               "<< n+80    <<"                 "  <<"     500/-        "<<endl;
			cout<<"BOOKS,TOYS,BAGS       15               SCHOOL BAG            100              "<< n+100   <<"                 "  <<"     400/-        "<<endl<<endl<<endl;
			
			goto A;}
			
			case 4:
			

    {
	
	int code;

	cout<<"ENTER THE CODE OF THE ITEM THAT YOU WANT TO SEARCH"<<endl;
	cout<<"FOR EX. 1,2,3,----------15"<<endl<<endl;
	cin>>code;
	if(code==1)
{
		cout<<"CATEGORY- CLOTHING , ITEM - COTTON SHIRTS , PRICE/PC=RS. 100"<<endl;
}
	else if(code==2)
	{
		cout<<"CATEGORY- CLOTHING , ITEM - TROUSERS , PRICE/PC=RS. 200 " <<endl;
	}
	else if(code==3)
	{
		cout<<"CATEGORY- CLOTHING , ITEM - SWEATERS, PRICE/PC=RS. 500"<<endl;
	}
	else if(code==4)
	{
		cout<<"CATEGORY- CLOTHING , ITEM - BLAZERS, PRICE/PC=RS. 1000"<<endl;
	}
	else if(code==5)
	{
		cout<<"CATEGORY- ELECTRONICS , ITEM - REFRIGERATOR, PRICE/PC=RS. 35000"<<endl;
	}
	else if(code==6)
	{
		cout<<"CATEGORY- ELECTRONICS , ITEM - IPHONE X, PRICE/PC=RS. 80000"<<endl;
	}
	else if(code==7)
	{
		cout<<"CATEGORY- ELECTRONICS , ITEM - ELECTRIC IRON, PRICE/PC=RS.10000"<<endl;
	}else if(code==8)
	{
		cout<<"CATEGORY- GROCERY  , ITEM - ATTA SHAKTIBHOG, PRICE/PC=RS. 350"<<endl;
	}
	else if(code==9)
	{
		cout<<"CATEGORY- GROCERY  , ITEM - REFINED OIL 1L, PRICE/PC=RS. 90"<<endl;
	}else if(code==10)
	{
		cout<<"CATEGORY- GROCERY  , ITEM - SUGAR 1KG , PRICE/PC=RS. 50"<<endl;
	}else if(code==11)
	{
		cout<<"CATEGORY- GROCERY  , ITEM - SALT 1KG, PRICE/PC=RS. 20 "<<endl;
	}else if(code==12)
	{
		cout<<"CATEGORY- BOOKS,TOYS,BAGS , ITEM - INTRO TO C++, PRICE/PC=RS. 400"<<endl;
	}else if(code==13)
	{
		cout<<"CATEGORY- BOOKS,TOYS,BAGS , ITEM - BARBIE DOLL , PRICE/PC=RS.300"<<endl;
	}
	else if(code==14)
	{
		cout<<"CATEGORY- BOOKS,TOYS,BAGS , ITEM - GYM BAG , PRICE/PC=RS.500"<<endl;
	}
	else if(code==15)
	{
		cout<<"CATEGORY- BOOKS,TOYS,BAGS , ITEM - SCHOOL BAG, PRICE/PC=RS.400"<<endl;
		
	}
	else
	cout<<" ******PLEASE ENTER RIGHT CODE, THANKYOU ************ "<<endl;
	
    goto A;
	
		
}
case 5:

		{
		cout<<"PAYMENT PORTAL"<<endl<<endl;
		cout<<"******YOUR PAYMENT IS SECURED THROUGH SSL*******DO NOT REFRESH*******"<<endl<<endl;
		int pp;
		
		cout<<"Press 20 to pay using Debit-card"<<endl;
		cout<<"Press 21 to pay using Internet Banking"<<endl;
		cin>>pp;
		switch(pp)
		{
			case 20:
				{
					long int cardno,cvv;
					double amount;
					cout<<"ENTER CARD NUMBER"<<endl;
					cin>>cardno;
					cout<<"ENTER CVV"<<endl;
					cin>>cvv;
					cout<<"ENTER AMOUNT"<<endl;
					cin>>amount;
					cout<<"*****PROCESSING************DO NOT REFRESH*******"<<endl<<endl;
					cout<<"PAYMENT SUCCESSFUL"<<endl;
					break;
				}
				case 21:
				{
					string uname;                                        //using string
					double amount;
					cout<<"ENTER USERNAME"<<endl;
					cin>>uname;
					cout<<"ENTER AMOUNT"<<endl;
					cin>>amount;
					cout<<"*****PROCESSING************DO NOT REFRESH*******"<<endl<<endl;
					cout<<"PAYMENT SUCCESSFUL"<<endl<<endl;
					break;
				}
		}
		
		
	
		goto A;
		
	}
			case 6:
		{
				cout<<"PLEASE WRITE YOUR COMPLAINT OR FEEDBACK HERE :"<<endl<<endl;
			cin>>feedback;
			cout<<"THANKYOU , FOR YOUR FEEDBACK "<<endl<<endl;
			goto A;
		}
			case 7:
		{
				cout<<"THANKYOU , FOR CHOOSING RELIANCE-MART . PLEASE VISIT AGAIN."<<endl;
			break;
			default :
	        {
			cout<<"KINDLY , PLEASE CHOOSE VALID OPTION"<<endl;
	           goto A;
			}
	    }
			
		}
	}
}
        ~store()                                                                //DESTRUCTOR
        {
        	cout<<"NOW,GRAB FLAT 15% DISCOUNT ON SBI DEBIT CARDS"<<endl;
        	cout<<"TERMS & CONDITIONS APPLY"<<endl;
        	cout<<"COPYRIGHT 2019 , ALL RIGHTS RESERVED"<<endl<<endl;
        	
		}
};
 
main()
{   
     {
	 store s1;
	 s1.choose();
     }
}
