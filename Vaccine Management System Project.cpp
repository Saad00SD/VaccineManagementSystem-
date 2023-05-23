#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
int pi[50]={50};
int	mod[50]={50};
int	sin[50]={50};

struct detail
{
	string d_name;
	int d_id;
	string d_gender;
	int d_age;
	string d_prof;
	int d_bp;
	int d_temp;
	string d_add;
	int d_contact;
	string d_vac;
	
};

void new_rec() 		// 1. Data Entry Function
{
	detail d;
	cout<<"***************************************************************"<<endl;
	cout<<"\t\t\t ENTER THE DETAILS \t\t\t"<<endl;
	cout<<"***************************************************************"<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"\n Enter the Data "<<endl;
	
	fstream write;
		write.open("record_list.txt", ios::app);
		cout<<"Enter Your Name: ";
		cin.get();
		getline(cin, d.d_name);				
		cout<<"Enter Your ID Card Number: ";
		cin>>d.d_id;								
		cout<<"Enter Your Gender[M/F]: ";
		cin>>d.d_gender;		
		cout<<"Enter Your Age: ";
		cin>>d.d_age;			
		cout<<"Enter Your Profession: ";
		cin.get();
		getline(cin, d.d_prof);			
		cout<<"Enter Your Blood Peasure: ";
		cin>>d.d_bp;			
		cout<<"Enter Your Body Temperature [*C]: ";
		cin>>d.d_temp;			
		cout<<"Enter Your Address: ";
		cin.get();
		getline(cin, d.d_add);			
		cout<<"Enter Your Contact Number: ";
		cin>>d.d_contact;	
		cout<<"Enter the vaccine[P/M/S] "<<endl;
		cout<<"Pfizer [P] / Moderna [M] / Sinopharm [S]";
		cin>>d.d_vac;
			write << d.d_name << endl;
			write<<d.d_id<<endl;
			write<<d.d_gender<<endl;
			write<<d.d_age<<endl;
			write << d.d_prof << endl;
			write<<d.d_bp<<endl;
			write<<d.d_temp<<endl;
			write << d.d_add << endl;
			write<<d.d_contact<<endl;	
			write<<d.d_vac<<endl;
			write.close();
		cout<<"--------------------------------------------"<<endl;
		cout<<"  YOUR DATA HAS BEEN SUCCESSFULLY INSERTED "<<endl;
		cout<<"--------------------------------------------"<<endl;
}

void pi_add()
{	
	int pi_n,i=0;
	cout<<"How many Pizer vaccine you want to add? "<<endl;
	cin>>pi_n;
    pi[i]=pi[i]+pi_n;
  	cout<<"Now Total Number of Pizer Vaccine is "<<pi[i]<<endl;	
}

void mod_add()
{
	int mod_n,i=0;
	cout<<"How many Moerna vaccine you want to add? "<<endl;
	cin>>mod_n;
    mod[i]=mod[i]+mod_n;
  	cout<<"Now Total Number of Pizer Vaccine is "<<mod[i]<<endl;	
}

void sin_add()
{
	int sin_n,i=0;
	cout<<"How many Sinopharm vaccine you want to add? "<<endl;
	cin>>sin_n;
    sin[i]=sin[i]+sin_n;
  	cout<<"Now Total Number of Pizer Vaccine is "<<sin[i]<<endl;	
}

void add_vac()      // 4. Add more vaccine function
{
	char ch;
	cout<<"----------------------------------------------------------------"<<endl;
	cout<<"Currently Available Vaccines"<<endl;
	cout<<"----------------------------------------------------------------"<<endl;	
	cout<<"\tPfizer    [P] : "<<pi[0]<<endl;
	cout<<"\tModerna   [M] : "<<mod[0]<<endl;
	cout<<"\tSinopharm [S] : "<<sin[0]<<endl;
	cout<<"----------------------------------------------------------------"<<endl;
	cout<<"Which vaccine are you going to add [P/M/S] : ";
	cin>>ch;
	
		switch(ch)
		{
		case 'P':
		case 'p':
			pi_add();
			break;
		case 'M':
		case 'm':	
			mod_add();
			break;
		case 'S':
		case 's':
			sin_add();
			break;
		default:
			cout<<"Invalid Choice!! Enter the correct choice ";
			break;
	}
}

void dis_vac()     // 3. available vaccine function
{
	cout<<"*********************************************************************************"<<endl;cout<<endl;
	cout<<"\t\t\t Available Vaccines \t\t\t"<<endl;
	cout<<"---------------------------------------------------------------------------------"<<endl;cout<<endl;
	cout<<"\t\tPfizer    [P] : "<<pi[0]<<endl;
	cout<<"\t\tModerna   [M] : "<<mod[0]<<endl;
	cout<<"\t\tSinopharm [S] : "<<sin[0]<<endl;
	cout<<"---------------------------------------------------------------------------------"<<endl;cout<<endl;cout<<endl;
}

void table()
{
			cout<<"======================+================================+=========================+=================================+==========================="<<endl;
			cout<<"Name ";
    		cout<<setw(15)<<"ID No.";
    		cout<<setw(15)<<"Gender";
    		cout<<setw(15)<<"Age";
    		cout<<setw(15)<<"Profession";
    		cout<<setw(15)<<"B.P";
    		cout<<setw(15)<<"Temarature";
    		cout<<setw(15)<<"Address";
    		cout<<setw(15)<<"Contact No";
    		cout<<setw(15)<<"Vaccine"<<endl;
			cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

}

void display(detail d)
{  	
			cout<<d.d_name<<setw(15);
			cout<<d.d_id<<setw(15);
			cout<<d.d_gender<<setw(15);
			cout<<d.d_age<<setw(15);
			cout<<d.d_prof<<setw(15);
			cout<<d.d_bp<<setw(15);
			cout<<d.d_temp<<setw(15);
			cout<<d.d_add<<setw(15);
			cout<<d.d_contact<<setw(15);
			cout<<d.d_vac;
			cout<<endl;		

}

void dis_2(detail d)
{
	  			cout<<"Name           : "<<d.d_name<<endl;
   	        	cout<<"ID Number      : "<<d.d_id<<endl;
   		        cout<<"Gender         : "<<d.d_gender<<endl;
   		        cout<<"Age            : "<<d.d_age<<endl;
   	        	cout<<"Profession     : "<<d.d_prof<<endl;
   	        	cout<<"B.P            : "<<d.d_bp<<endl;
   	        	cout<<"Temperature[*C]: "<<d.d_temp<<endl;
   	        	cout<<"Address        : "<<d.d_add<<endl;
   	        	cout<<"Contact        : "<<d.d_contact<<endl;
   	        	cout<<"Vaccine Name   : "<<d.d_vac<<endl;
}

void view_all( )	// 2. View all Data Function
{
	
	detail d;
	ifstream read;
	read.open("record_list.txt");
	while(read>>d.d_name>>d.d_id>>d.d_gender>>d.d_age>>d.d_prof>>d.d_bp>>d.d_temp>>d.d_add>>d.d_contact>>d.d_vac)
	{
		
		//read>>d.d_name>>d.d_id>>d.d_gender>>d.d_age>>d.d_prof>>d.d_bp>>d.d_temp>>d.d_add>>d.d_contact>>d.d_vac;
		/*read>>d.d_name;
		read>>d.d_id;		
		read.ignore();
		getline(read,d.d_gender);
		read>>d.d_age;
		read.ignore();
		getline(read,d.d_prof);
		read>>d.d_bp;
		read>>d.d_temp;
		read.ignore();
		getline(read,d.d_add);
		read>>d.d_contact;
		read.ignore();
		getline(read,d.d_vac);*/
		display(d);	
		}
		read.close();
}	

int search()		// 5. Search Function
{
	int nid;
	detail d;
	cout<<"*****************************"<<endl;cout<<endl;
	cout<<"Enter The ID Number to Search"<<endl;
	cin>>nid;
	ifstream read;
	string s;
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"\t\tThis is the data of ID "<<nid<<endl;
	cout<<"---------------------------------------------------------"<<endl;	
	read.open("record_list.txt");
	while(!read.eof())
	{
		read>>d.d_name;
		read>>d.d_id;
		read.ignore();
		getline(read,d.d_gender);
		read>>d.d_age;
		read.ignore();
		getline(read,d.d_prof);
		read>>d.d_bp;
		read>>d.d_temp;
		read.ignore();
		getline(read,d.d_add);
		read>>d.d_contact;
		read.ignore();
		getline(read,d.d_vac);
		if (d.d_id == nid) {
        dis_2 (d);
        return d.d_id;
        }
	}
	cout<< "Can not find " <<nid <<endl;
    read.close();
}	

void del_data()		// 6. Delete Data Function
{
	int id;
	cout<<"\t\t*************************************"<<endl;
	cout<<"\t\t\t\t DELETE RECORDS \t\t"<<endl;
	cout<<"\t\t*************************************"<<endl;
	cout<<"Enter your ID: ";
	cin>>id;    
	cout << "\n\tDo you want to detlete id of "<<id<<"  (y/n) : ";
    char choice;
    cin >> choice;
    if (choice == 'y') {
	detail d;
	ofstream new_file;
	new_file.open("updated_file.txt");	
	ifstream read;
	read.open("record_list.txt");	
	while(!read.eof())
	{
            read>>d.d_name;
            read>>d.d_id;
            read.ignore();
            getline(read,d.d_gender);
			read>>d.d_age;
            read.ignore();
            getline(read,d.d_prof);
            read>>d.d_bp;
            read>>d.d_temp;
            read.ignore();
            getline(read,d.d_add);
            read>>d.d_contact;
            read.ignore();
            getline(read,d.d_vac);
            
			if(d.d_id!=id)
		{
			new_file<<d.d_name<<endl;
			new_file<<d.d_id<<endl;
			new_file<<d.d_gender<<endl;
			new_file<<d.d_age<<endl;
			new_file<<d.d_prof<<endl; 
			new_file<<d.d_bp<<endl;
			new_file<<d.d_temp<<endl;
			new_file<<d.d_add<<endl;  
			new_file<<d.d_contact<<endl;
			new_file<<d.d_vac<<endl;
		}	
	}	
	new_file.close();
	read.close();
	remove("record_list.txt");
	rename("updated_file.txt","record_list.txt");
	cout<<"\t\t Record is Succsessfully Deleted."<<endl;
	}
else{
    cout << "\n\tRecord not deleted";
    }
}

void develop()		// 7. Developers Function
{
	int choice;
    cout<<"\t\t******************************************"<<endl;
	cout<<"\t\t\t\t DEVELOPERS \t\t"<<endl;
	cout<<"\t\t******************************************"<<endl;
    cout<<"\t1. Saad Fahim"<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<endl;	
            cout<<"Name		:"<<" Saad Fahim"<<endl;
            cout<<"Department	:"<<" CS"<<endl;
            cout<<"Batch		:"<<" Batch 2"<<endl;
            cout<<"Contact No	:"<<" +94-766533626"<<endl;
            cout<<"Email		:"<<" saadfahim2012@gmail.com"<<endl;
            cout<<endl;    
    cout<<"\t2. Ifras Inaan"<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<endl;
        	cout<<"Name		:"<<"Ifras Inaan"<<endl;
            cout<<"Department	:"<<"CS"<<endl;
            cout<<"Batch		:"<<"Batch 2"<<endl;
            cout<<"Contact No	:"<<"+94-769056573"<<endl;
            cout<<"Email		:"<<"ifrasinaan@gmail.com"<<endl;
            cout<<"\n"<<endl;
}

void about()		// 8. about Function
{
	cout<<"\t\t\t******************************************"<<endl;
	cout<<" \t\t\t   About Vaccination Management System.\n"<<endl;
	cout<<"\t\t\t******************************************"<<endl;
	cout<<"\t This program is about a vaccination system for hospital management."<<endl;
	cout<<"\tIn this Program we can enter the data of who want to take vaccine from hospital."<<endl;
	cout<<"\tAfter adding the data of some person, can see the summary of all the data's"<<endl;
	cout<<"\tIf the hospital management needs to more vaccines there is an option also.In that option we can add the new vaccines too."<<endl;
	cout<<"\tHowever,If hospital management needs to delete some data they can delete the datas from using delete opition."<<endl;
	cout<<endl;cout<<endl;
	cout<<"\t \t S T A Y    H O M E    S T A Y     S A F E"<<endl;
	cout<<endl;
}

void menu()
{
	cout<<"\t\t\t*********************************************************************************"<<endl;
	    cout<<"\t\t\t`````````````````````````````````````````````````````````````````````````````````"<<endl;
		cout<<"\t\t\t|\t\t\t\t\t\t\t\t\t\t|"<<endl;
		cout<<"\t\t\t|        V A C C I N A T I O N      M A N A G E M E N T      S Y S T E M        |"<<endl;
		cout<<"\t\t\t|\t\t\t\t\t\t\t\t\t\t|"<<endl;cout<<endl;
		cout<<"\t\t\t`````````````````````````````````````````````````````````````````````````````````"<<endl;
		cout<<"\t\t\t*********************************************************************************"<<endl;
		cout<<endl;
		cout<<endl;
		cout<<setw(10)<<"\t\t\t\t 1. Enter New record "<<endl;
		cout<<endl;
		cout<<setw(10)<<"\t\t\t\t 2. View All Data "<<endl;
		cout<<endl;		
		cout<<setw(10)<<"\t\t\t\t 3. Available Vaccines "<<endl;
		cout<<endl;
		cout<<setw(10)<<"\t\t\t\t 4. Add More Vaccines "<<endl;
		cout<<endl;	
		cout<<setw(10)<<"\t\t\t\t 5. Search Record "<<endl;
		cout<<endl;	
		cout<<setw(10)<<"\t\t\t\t 6. Delete Record "<<endl;
		cout<<endl;
		cout<<setw(10)<<"\t\t\t\t 7. Developers "<<endl;
		cout<<endl;
		cout<<setw(10)<<"\t\t\t\t 8. About "<<endl;
		cout<<endl;
		cout<<setw(10)<<"\t\t\t\t 9. Exit "<<endl;
		cout<<endl;
}
int main()
{
	int choice;
	while(true)
	{
		menu();
		cout<<"\t\tEnter Your Choice: ";
		cin>>choice;
		switch(choice)
		{
		case 1:
			system("cls");
			new_rec();
			break;
		case 2:
			system("cls");
			table();
			view_all();
			break;
		case 3:
			system("cls");
			dis_vac();
			break;			
		case 4:
			system("cls");
			add_vac();
			break;
		case 5:
			system("cls");
			search();
			break;
		case 6:
			system("cls");
			del_data();
			break;
		case 7:
			system("cls");
			develop();
			break;
		case 8:
			system("cls");
			about();
			break;
		case 9:
			exit(0);
		default:
			cout<<"Invalid Number!! Enter the correct number ";
			break;
		}
	}
}
