#include<iostream>
#include<stdlib.h>
using namespace std;
string name;
int Answer();
int Question_Number=0;
int Correct_Answer=0;
int Wrong_Answer=0;
void Display(void);
void Display_Random_Question(void);
void Display_Question(string Question,string a,string b,string c,string d,int ans_opt);
void Result(void);
int main()
{
	cout<<"-----WELCOME TO QUIZ GAME -------"<<endl<<endl;
	cout<<" Enter YOUR NAME "<<endl;
	cin>>name;
	system("cls");
Display_Random_Question();	
}

void Display_Random_Question()
{

 for(int i=1;i<=15;i++)
 {
		switch(i)
		{
			case 1:
			Display_Question("1.who invented computer","Charles Babage","Dennis","Elon","Albet",1);
		
			break;
			case 2:
			Display_Question("2.who is the father of computer science","Dennis","Carles Babage","Richard","Allen Turing",4);
	
			break;
			case 3:
			Display_Question( "3.who is the father of personal computer","Edward Robert","Dennis","Albert","Tom",1);
		
			break;
			case 4:
			Display_Question( "4.A CPU Contains","Mouse","A Control Unit","Memord card","Disk",2);
			
			break;
			case 5:
			Display_Question( "5.The first computer Were Programmed Using ?","c++","c","Assemle language","Machine Language",4);
		
			break;
			case 6:
			Display_Question( "6.You Organize Files By Storing Them In","file","Files","Folder","Folders",4);
			
			break;
			case 7:
			Display_Question( "7.Which device is requred to the internet connection","Modem","Pen dervie","Cd","Bluetooth",1);
			
			break;
			case 8:
			Display_Question( "8.what is a light pen ","Optical Input Pen","Optic input Pen","Optically Inputs Pen","Optically Inputs Pens",1);
		
			break;
			case 9:
			Display_Question( "9.UNIVAC is ?","universal automatic computer","universal automaticlly computer","universally automatic computers","universal auto computers",1);
		
			break;
			case 10:
			Display_Question( "10.Cd-Rom Stands For ","compactable readable only memory","compactable read only memory","universally automatic computers","universal auto computers",2);
			
			break;
			case 11:
			Display_Question( "11.alu is? ","Arithematic Logically Unit","universal automaticlly computer","Arithematically Logic Units","Arithematic Logic Unit",4);
			
			break;
			case 12:
			Display_Question( "12.vga is ?","video graphics arrays","videos graphics array","video graphically array","video graphics array",4);
			
			break;
			case 13:
			Display_Question( "13.UNIVAC is ?","universal automatic computer","universal automaticlly computer","universally automatic computers","universal auto computers",1);
		
			break;
			case 14:
			Display_Question( "14.MSI stands for ?","medium scaling integrated circuits","medium scale integrated circuiting","medium scale integrating circuits","wide areas network",1);
			break;	
			case 15:
			Display_Question( "15.WAN stands for  ?","wide area network","wide areas network","wide areas networking","widing areas network",1);
			break;	
			
	
}
}

Result();
}
void Display_Question(string Question,string a,string b,string c,string d,int ans_opt)
{
	int result;
	cout<<" "<<Question<<endl<<endl;
	cout<<" 1. "<<a<<endl<<endl;
	cout<<" 2. "<<b<<endl<<endl;
	cout<<" 3. "<<c<<endl<<endl;
	cout<<" 4. "<<d<<endl<<endl;
	cin>>result;
	
	if(result==ans_opt)
	Correct_Answer++;
	else
	Wrong_Answer++;
	system("cls");
}
void Result(){
cout<<"-----------------------------Result Of Your Quiz------------------------------"<<endl<<endl;
cout<<" "<<name<<endl<<endl;
cout<<"Your Correct Answer  :"<<Correct_Answer<<endl<<endl;
cout<<"Your Wrong Answer  :"<<Wrong_Answer<<endl<<endl;
if(Correct_Answer>Wrong_Answer)
{
	cout<<name<<" You Passed the Quiz "<<endl;
}
else{
	cout<<name<<" You Failed the Quiz \n"<<endl;
}
cout<<" \n Do you Want Answer for All The Question \n \n"<<endl;
cout<<" 1. for Get Answer \n \n 2. END  \n "<<endl;
int input;
cin>>input;
if(input==1)
Answer();
else
cout<<" \n Thanks for Spending With Me "<<endl;
}
int Answer()
{
	system("cls");
	cout<<"The Answer Are \n\n"<<endl;
	cout<<" 1.who invented computer  \n Answer = Charles Babage \n\n"<<endl;
	cout<<" 2.who is the father of computer science  \nAnswer = Allen Turing  \n\n"<<endl;
    cout<<" 3.who is the father of personal computer \nAnswer = Edward Robert  \n\n"<<endl;
    cout<<" 4.A CPU Contains  \nAnswer = A Control Unit  \n\n"<<endl;		
    cout<<" 5.The first computer Were Programmed Using ?  \nAnswer = Machine Language \n\n"<<endl;
    cout<<" 6.You Organize Files By Storing Them In  \nAnswer = Folders  \n\n"<<endl;
    cout<<" 7.Which device is requred to the internet connection  \nAnswer =Modem  \n\n"<<endl;
 	cout<<" 8.what is a light pen  \nAnswer = Optical Input Pen \n\n"<<endl;
	cout<<" 9.UNIVAC is ? \nAnswer = universal automatic computer \n\n"<<endl;
	cout<<" 10.Cd-Rom Stands For   \nAnswer = compactable read only memory \n\n"<<endl;
	cout<<" 11.alu is? \nAnswer = Arithematic Logic Unit  \n\n"<<endl;
	cout<<" 12.vga is ? \nAnswer = video graphics array\n\n"<<endl;
	cout<<" 13.UNIVAC is ?  \nAnswer = universal automatic computer \n\n "<<endl; 
	cout<<" 14.MSI stands for ?  \nAnswer = medium scaling integrated circuits \n\n"<<endl; 
	cout<<" 15.WAN stands for  ? \nAnswer = wide area network  \n\n"<<endl;   	
}
