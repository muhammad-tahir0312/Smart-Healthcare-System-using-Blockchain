#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <windows.h>
#include <stdlib.h>
#include <fstream>
#include <conio.h>

using namespace std;

// HEADER FILE :: Log_Sign
#include "Log_Sign.h"

class HashMapTable_LP;
class HashMapTable_SC;

class MedicalRecordBlock{
	private:
		int iterator;
		bool FLAGG;		//SET ON LINER PROBING 
	
		// variables for personal details
		string Name, F_name;
		char Gender;
		int Age;
		int CNIC;			// (used for login/signin as a KEY in HASHING)
		double Weight, Height;
		// variables for medical details
		bool Diabetes, Hypertention, Thyroid, Alergies;
		// insurance billing
		double surgery, emergency, physician;
		
		public:
		//constructor default
		MedicalRecordBlock(){
			FLAGG = 1;
			iterator = 0;
			Name = "\0";
			F_name = "\0";
			Age = 0;
			Weight = 0.0;
			Height = 0.0;
			CNIC = 0;
			Gender = '0';	
			Diabetes = false;
			Hypertention = false;
			Thyroid = false;
			Alergies = false;
			surgery = 0.0;
			emergency = 0.0;
			physician = 0.0;
		}
		//constructor(peronal details)
		MedicalRecordBlock(string name, string fname, int age, double weight, double height, int cnic, char gender, bool dia, bool thyr, bool hyp, bool alleg, double sur, double emerg, double pshy):
		Name(name), F_name(fname),Age(age), Weight(weight), Height(height), CNIC(cnic), Gender(gender), 
		Diabetes(dia), Hypertention(hyp), Thyroid(thyr), Alergies(alleg),
		surgery(sur), emergency(emerg), physician(pshy){}
		
	// getter for flag	
	bool GetFlag(){
		return FLAGG;
	}	
	// getters for personal details
	string GetName(){
		return Name;
	}
	string GetF_name(){
		return F_name;
	}
	int GetAge(){
		return Age;
	}
	double GetWeight(){
		return Weight;
	}
	double GetHeight(){
		return Height;
	}
	int GetCNIC(){
		return CNIC;
	}
	char GetGender(){
		return Gender;
	}
	
	//getters for medical history
	bool GetDiabetes(){
		return Diabetes;
	}
	bool GetHypertention(){
		return Hypertention;
	}
	bool GetThyroid(){
		return Thyroid;
	}
	bool GetAllergies(){
		return Alergies;
	}
	
	//getters for dues
	double GetSurgery(){
		return surgery;
	}
	double GetEmergency(){
		return emergency;
	}
	double GetPhysician(){
		return physician;
	}
	
	// setter for FLAG 
	void SetFlag(bool a){
		FLAGG = a;
		
//
//		
//		Obj1.ResetHashTable_LP();
//		Obj2.ResetHashTable_SC();
////	if(FLAGG == true){
////		OBJ = myHash1.SearchCNIC_LP(cnic); 
////	}
////	else{
////		OBJ = myHash2.SearchCNIC_SC(cnic); 
////	}		
		
	}		
	// setters for personal details
	void SetName(string A){
		Name = A;
	}
    void SetF_name(string B){
		F_name = B;
	}
	void SetAge(int A){
		Age = A;
	}
	void SetWeight(double A){
		Weight = A;
	}
	void SetHeight(double A){
		Height = A;
	}
	void SetCNIC(long int A){
		CNIC = A;
	}
	void SetGender(char A){
		Gender = A;
	}
	
	//setters for med history
	void SetDiabetes(bool a){
			Diabetes = a;
	}
	void SetHypertention(bool a){
			Hypertention = a;
	}
	void SetThyroid(bool a){
			Thyroid = a;
	}
	void SetAlergies(bool a){
			Alergies = a;
	}
	
	
	//setters for med dues
	void SetSurgery(double D){
			surgery = D;
	}
	void SetEmergencies(double D){
			emergency = D;
	}
	void SetPhysician(double D){
			physician = D;
	}
	
	
	//update medical record
		// 1. Update Personal Details
		void updatePersonalDetails(){
			int choice;
			cout<<"To Update Personal Detail, Press:"<<endl;
			cout<<"\t (1) Name "<<endl;
			cout<<"\t (2) Age"<<endl;
			cout<<"\t (3) Weight"<<endl;
			cout<<"\t (4) Height"<<endl;
			cout<<"\t (5) CNIC"<<endl;
			cout<<"\t (6) Gender"<<endl;
			cout<<"\t (7) Exit"<<endl;
			cin>>choice;
			
			switch(choice){
				case 1:{
					string name;
					cout<<"Enter Name: ";
					fflush(stdin);
					getline(cin,name);
					SetName(name);
					break;
				}					
				case 2:{
					int age;
					cout<<"Enter Age: ";
					cin>>age;
					SetAge(age);
					break;
				}
				case 3:{			
					double Weight;
					cout<<"Enter Weight: ";
					cin>>Weight;
					SetWeight(Weight);
					break;
				}
				case 4:{			
					double Height;
					cout<<"Enter Height: ";
					cin>>Height;
					SetHeight(Height);
					break;
				}
				case 5:{
					long int CNIC;
					cout<<"Enter CNIC: ";
					cin>>CNIC;
					SetCNIC(CNIC);
					break;
				}
				case 6:{
					char Gender;
					cout<<"Enter Gender: ";
					cin>>Gender;
					SetGender(Gender);
					break;
				}
				case 7:{
					cout<<"Exit: ";
					break;
				}
				default:{
				    cout<<"Invalid Entree.";
					break;
				}	
			}
		}
		// 2. Update Medical Details
		void updateMedicalHistory(){
			int choice;
			cout<<"To Update Medical History, Press:"<<endl;
			cout<<"\t (1) Diabetes "<<endl;
			cout<<"\t (2) Hypertention"<<endl;
			cout<<"\t (3) Thyroid"<<endl;
			cout<<"\t (4) Alergies"<<endl;
			cout<<"\t (5) Exit"<<endl;
			cin>>choice;
			
			switch(choice){
				case 1:{
					bool yesRno;
					cout<<"Status Update: Diabetes ";
					cin>>yesRno;
					SetDiabetes(yesRno);
					break;
				}
				case 2:{
					bool yesRno;
					cout<<"Status Update: Hypertention ";
					cin>>yesRno;
					SetHypertention(yesRno);
					break;
				}
				case 3:{
					bool yesRno;
					cout<<"Status Update: Thyroid ";
					cin>>yesRno;
					SetThyroid(yesRno);
					break;
				}
				case 4:{
					bool yesRno;
					cout<<"Status Update: Alergies ";
					cin>>yesRno;
					SetAlergies(yesRno);					
					break;
				}
				case 5:{
					cout<<"Exit: ";
					break;
				}
				default:{
				    cout<<"Invalid Entree.";
					break;
				}	
			}
		}
		// 3. Update Insurance Details
		void updateInsuranceDues(){
			int choice;
			cout<<"To Update Insurance's Detail, Press:"<<endl;
			cout<<"\t (1) Surgery "<<endl;
			cout<<"\t (2) Emergency"<<endl;
			cout<<"\t (3) Physician"<<endl;
			cout<<"\t (4) Exit"<<endl;
			cin>>choice;
			
			switch(choice){
				case 1:{
					double numberOf;
					cout<<"Update: Surgeries ";
					cin>>numberOf;
					SetSurgery(numberOf);
					break;
				}
				case 2:{
					double numberOf;
					cout<<"Update: Emergencies ";
					cin>>numberOf;
					SetEmergencies(numberOf);
					break;
				}
				case 3:{
					double numberOf;
					cout<<"Update: Physician ";
					cin>>numberOf;
					SetPhysician(numberOf);
					break;
				}
				case 4:{
					cout<<"Exit: ";
					break;
				}
				default:{		
				    cout<<"Invalid Entree.";
					break;
				}	
			}
		}
	
	//printing med status:
	void Display_Med_His(){
		cout<<endl<<"MEDICAL HISTORY: "<<endl;
		cout<<endl<<"\tDiabetes: "<<GetDiabetes()<<endl<<"\tHypertention: "<<Hypertention<<endl<<"\tThyroid: "<<Thyroid<<endl<<"\tAllergies: "<<Alergies<<endl<<endl;
	}
	
	//printing dues status:
	void Display_InsDues(){
		cout<<endl<<"INSURANCE DETAILS: "<<endl;
		cout<<endl<<"\tSurgery: "<<GetSurgery()<<endl<<"\tEmergency: "<<GetEmergency()<<endl<<"\tPhysician: "<<GetPhysician()<<endl<<endl;
	}
	
	//printing personal details
	void Display_Per_Det(){
		cout<<endl<<"PERSONAL DETAILS: "<<endl;
		cout<<endl<<"\tName: "<<GetName()<<endl<<"\tFathers Name: "<<GetF_name()<<endl<<"\tGender: "<<GetGender()<<endl<<"\tCNIC: "<<GetCNIC()<<endl<<"\tAge: "<<GetAge()<<endl<<"\tWeight: "<<GetWeight()<<endl<<"\tHeight: "<<GetHeight()<<endl<<endl;
	}
	
	void DisplayWhole(){
		Display_Per_Det();		
		Display_Med_His();
		Display_InsDues();
	}
};

//########################################################## HASHING ##########################################################

int tableSize = 100;

void TableSize(int size){
	tableSize = size;
}
//############################################## LINEAR PROBING ########################################################
class HashTableNode_LP{
	public:
		int CNIC;
		MedicalRecordBlock value;
	
	HashTableNode_LP(int CNIC, MedicalRecordBlock value){
		this->CNIC = CNIC;
		this->value = value;
	}
};

class HashMapTable_LP{
	private:
		HashTableNode_LP **top;
	
	public:
		HashMapTable_LP(){
			top = new HashTableNode_LP *[tableSize];
			
			for(int i = 0; i < tableSize; i++)
				top[i] = NULL;
		}
		
		int HashFunc_LP(int CNIC){
			return (CNIC % tableSize);
		}
		
		void Insert_LP(int CNIC, MedicalRecordBlock value){
			int i = 0, h = HashFunc_LP(CNIC);
			
			while(top[h] != NULL && i < tableSize){
				h = HashFunc_LP(h + 1);
				i++;
			}
			
			if(top[h] != NULL)
				delete top[h];
				
			top[h] = new HashTableNode_LP(CNIC, value);
		}
		
		MedicalRecordBlock SearchCNIC_LP(int CNIC){
			MedicalRecordBlock temp;
				temp.SetCNIC(0);
			
			int i = 0, h = HashFunc_LP(CNIC);
			
			while(top[h] != NULL && top[h]->CNIC != CNIC && i < tableSize){
				h = HashFunc_LP(h + 1);
				i++;
			}
				
			if(top[h] == NULL)
				return temp;
				
			else
				return top[h]->value;
		}
		
		void Remove_LP(int CNIC){
			int i = 0, h = HashFunc_LP(CNIC);
			
			while(top[h] != NULL && top[h]->CNIC != CNIC && i < tableSize){
				h = HashFunc_LP(h + 1);
				i++;
			}
			
			if(top[h]->CNIC == CNIC){
				top[h] = NULL;
				cout << "Element Deleted!" << endl;
			}
						
			else
				cout << "No element exists on key: " << CNIC << endl;
		}

		void Display_LP(){
			cout<<"\n\tSize: "<<tableSize<<endl<<endl;
			for(int i = 0; i < tableSize; i++) 
				cout<< "\t\t "<<top[i]<<endl ;
		}
		
		~HashMapTable_LP(){
			for(int i = 0; i < tableSize; i++) 
				if(top[i] != NULL)
					delete top[i];
			
			delete[] top;
		}
};
//################################################################### END ###################################################################################



//########################################################## SEPERATE CHAINING ########################################################

class HashTableNode_SC{
	public:
		int CNIC;
		MedicalRecordBlock value;
		HashTableNode_SC *next;
	
	HashTableNode_SC(int CNIC, MedicalRecordBlock value){
		this->CNIC = CNIC;
		this->value = value;
		this->next = NULL;
	}
};

class HashMapTable_SC{
	private:
		HashTableNode_SC **top;
	
	public:
		HashMapTable_SC(){
			top = new HashTableNode_SC *[tableSize];
			
			for(int i = 0; i < tableSize; i++)
				top[i] = NULL;
		}
		
		int HashFunc_SC(int CNIC){
			return (CNIC % tableSize);
		}
		
		void Insert_SC(int CNIC, MedicalRecordBlock value){
			int h = HashFunc_SC(CNIC);
			HashTableNode_SC *temp = top[h];
			
			if(top[h] == NULL){
				top[h] = new HashTableNode_SC(CNIC, value);
				return;
			}
			
			while(temp->next != NULL)
				temp = temp->next;
				
			temp->next = new HashTableNode_SC(CNIC, value);
		}
		
		MedicalRecordBlock SearchCNIC_SC(int CNIC){
			MedicalRecordBlock temp1;
				temp1.SetCNIC(0);
			
			int h = HashFunc_SC(CNIC);
			HashTableNode_SC *temp = top[h];
			
			if(top[h] == NULL)
				return temp1;
				
			while(temp->next != NULL && temp->CNIC != CNIC){
					temp = temp->next;
			}
			
				
			if(temp->CNIC == CNIC)
				return temp->value;
				
			else
				return temp1;
		}
		
		void Remove_SC(int CNIC){
			int h = HashFunc_SC(CNIC);
			HashTableNode_SC *temp = top[h];
			
			if(top[h] == NULL){
				cout << "No element exists on key: " << CNIC << endl;
				return;
			}
			
			if(top[h] != NULL && top[h]->CNIC == CNIC){
				top[h] = NULL;
				cout << "Element Deleted!" << endl;
				return;
			}
			
			if(top[h]->next != NULL && top[h]->next->CNIC == CNIC){
				top[h]->next = NULL;
				cout << "Element Deleted!" << endl;
				return;
			}
			
			while(temp->next != NULL && temp->CNIC != CNIC)
				temp = temp->next;
			
			if(temp->next != NULL && temp->next->CNIC == CNIC){
				HashTableNode_SC *curr = temp->next;
				temp->next = curr->next;
				delete curr;
				cout << "Element Deleted!" << endl;
			}
						
			else
				cout << "No element exists on key: " << CNIC << endl;
		}

		void Display_SC(){
			cout<<"\n\tSize: "<<tableSize<<endl<<endl;
			HashTableNode_SC *temp;
			for(int i = 0; i < tableSize; i++){				
				temp = top[i];
				if(top[i] != NULL){
					while( temp != NULL){
						cout<<"\t\t"<<temp;
						cout<<"\t ";
						temp = temp->next;
					}
				}
				else{
					cout<<"\t\t"<<0;
				}
				cout<<endl;
			}
		}
		
		~HashMapTable_SC(){
			for(int i = 0; i < tableSize; i++) 
				if(top[i] != NULL)
					delete top[i];
			
			delete[] top;
		}
};

//#################################################################### END #############################################################



//############################################## DOCTORS ########################################################
int co,co1,co2;
class Doctor{
	public:
		MedicalRecordBlock **arr1, **arr2, **arr3;
		int DoctorID;
		string docName;
		
		Doctor(){
			co =0;
			co =0;
			co =0;
			//123
			arr1 = new MedicalRecordBlock *[tableSize];
			
			for(int i = 0; i < tableSize; i++)
				arr1[i] = NULL;		
				
			// 456
			arr2 = new MedicalRecordBlock *[tableSize];			
			for(int i = 0; i < tableSize; i++)
				arr2[i] = NULL;
			
			//789
			arr3 = new MedicalRecordBlock *[tableSize];			
			for(int i = 0; i < tableSize; i++)
				arr3[i] = NULL;
		}
		
		Doctor(int docID, string name): DoctorID(docID), docName(name) {}
		
		void shareDetails_dr(int id, MedicalRecordBlock patient){			
			if(id == 123){
				arr1[co] = new MedicalRecordBlock(patient);
				co++;				
			}
			else if(id == 456){
				arr2[co] = new MedicalRecordBlock(patient);
				co1++;				
			}
			else if(id == 789){
				arr3[co] = new MedicalRecordBlock(patient);
				co2++;
			}
			else{
				cout<<"Invalid Input";
			}
		}
};

//############################################## Insursance Companies ########################################################
int count,count1,count2;
class InsuranceComp{
	public:
		MedicalRecordBlock **arr1, **arr2, **arr3;
		int CompanyID;
		string companyName;
	
		InsuranceComp(){
			count =0;
			count1 =0;
			count2 =0;
			//111
			arr1 = new MedicalRecordBlock *[tableSize];
			
			for(int i = 0; i < tableSize; i++)
				arr1[i] = NULL;		
				
			// 222
			arr2 = new MedicalRecordBlock *[tableSize];			
			for(int i = 0; i < tableSize; i++)
				arr2[i] = NULL;
			
			//333
			arr3 = new MedicalRecordBlock *[tableSize];			
			for(int i = 0; i < tableSize; i++)
				arr3[i] = NULL;
		}
		
		InsuranceComp(int id, string name): CompanyID (id), companyName(name) {}
		
		void shareDetails(int id, MedicalRecordBlock patient){			
			if(id == 111){
				arr1[count] = new MedicalRecordBlock(patient);
				count++;				
			}
			else if(id == 222){
				arr2[count1] = new MedicalRecordBlock(patient);
				count1++;				
			}
			else if(id == 333){
				arr3[count2] = new MedicalRecordBlock(patient);
				count2++;
			}
			else{
				cout<<"Invalid okayyy??";
			}
		}
};
//###################################################################### END INSURANCE #######################################################


void gotoxy(int x, int y){
	
  static HANDLE h = NULL;  
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };  
  SetConsoleCursorPosition(h,c);
}

// STYLING FUNCTION
void Intro(void)
    {
        int i;
        string p=" WELCOME TO HEALTHCARE CONSOLE BASED APPLICATION ";
        gotoxy(20,12);

        for(i=0;i<12;i++){

            Sleep(55);
            cout<<":";
        }

        for(i=0;i<p.size();i++){

            Sleep(50);
            cout<<p[i];
        }

        for(i=0;i<12;i++){

            Sleep(55);
            cout<<":";
        }

        string d=" A Project developed by:";
        gotoxy(49,24);

        for(i=0;i<d.size();i++){

            Sleep(50);
            cout<<d[i];
        }

        string S="Sabika Shameel K21-4606";
        string I="Insha  Javed   K21-3279";
        string Y="Muhammad Tahir K21-4503";
        gotoxy(50,26);

        for(i=0;i<S.size();i++){

            Sleep(50);
            cout<<S[i];
        }

        gotoxy(50,27);

        for(i=0;i<I.size();i++){

            Sleep(50);
            cout<<I[i];

        }

        gotoxy(50,28);

        for(i=0; i<Y.size(); i++){

            Sleep(50);
            cout<<Y[i];
        }
}


int main(){
	
	Log_Sign L;
	MedicalRecordBlock block_flag;
	block_flag.SetFlag(1);
		
	HashMapTable_LP myHash1;
	HashMapTable_SC myHash2;
	
	InsuranceComp Obj_insur;
	Doctor Obj_dr;
		
	Doctor availableDoctors[3]={ Doctor(123, "Sarah Naeem"), Doctor(456, "Wajahat Khan"), Doctor(789, "Qirat Baloch") } ;//Doctors
	InsuranceComp insCompanies[3]= { InsuranceComp(111, "Jubliee"), InsuranceComp(222, "Smart Choice"), InsuranceComp(333, "State Life") }; // Insurance Companies
			
	system("color E5");
  	Intro();
	getch();
	system("CLS");

while(true){
do{
		char option;
		system("CLS");
		
	while(true){
		cout <<endl<< "Choose From The Following: " << endl << endl;
		cout << "\tA) Patient" << endl;
		cout << "\tB) Doctor" << endl;
		cout << "\tC) Admin" << endl;
		cout << "\tD) Insurance" << endl;
		cout << "\tE) Exit" << endl;
	try
		{
			cin >> option;
			if(option=='A' || option=='a' || option=='B' || option=='b' || option=='C' || option=='c' || option=='D' || option=='d' || option=='E' || option=='e')
			{
				break; 
			}
			else
			{
				throw(option);
			}
		}
   	catch(char o)	{
			cout << endl << "Try again! Your input was " << o << " which is invalid" << endl;
			cout << endl << "[PRESS 'ENTER' TO CONTINUE]" << endl;
			getch();
			system("cls");	
	}
}
	    switch (option){
			case 'A':
				case 'a':{
					system("cls");
					//////////////////////////////////////
					string p=" WELCOME TO THE PATIENT'S PORTAL";
        			gotoxy(45,4);
        			
        			for(int i=0;i<p.size();i++){
			            Sleep(50);
			            cout<<p[i];
			        }
        			/////////////////////////////////////
					cout << endl << endl;
					
				while(true){
					cout <<endl<< "Choose From The Following: " << endl << endl;
					cout << "\tA) New Patient" << endl;
					cout << "\tB) Old Patient" << endl;
					cout << "\tC) Exit" << endl;				
					try
						{
							cin >> option;
							if(option=='A' || option=='a' || option=='B' || option=='b' || option=='C' || option=='c')
							{
								break; 
							}
							else
							{
								throw(option);
							}
						}
				   	catch(char o)	{
							cout << endl << "Try again! Your input was " << o << " which is invalid" << endl;
							cout << endl << "[PRESS 'ENTER' TO CONTINUE]" << endl;
							getch();
							system("cls");	
					}
				}		        	
		        	switch(option){
						case 'A':
							case 'a':{			
								system("cls");														
								string name, fname;
								int age, cnic;
								char gender;
								bool dia, thyr, hyp, alleg;
								double weight, height, emer, pshy, sur;
								
								cout<<endl<<"\t\t\t\t\t\tPATIENT REGISTRATION"<<endl<<endl;
								cout<<endl<<"Personal Details: "<<endl;
								cout<<"\tEnter Name: ";
								fflush(stdin);
								getline(cin,name);	
								cout<<"\tEnter Father Name: ";
								fflush(stdin);
								getline(cin,fname);	
								cout<<"\tEnter Age: ";
								cin>>age;
								cout<<"\tEnter Gender [M / F]: ";
								cin>>gender;	
								cout<<"\tEnter CNIC [Last 6]: ";
								cin>>cnic;
								cout<<"\tEnter weight: ";
								cin>>weight;
								cout<<"\tEnter Height: ";
								cin>>height;
								cout<<endl<<"Medical History: "<<endl;
								cout<<"\tDo You Have Diarrhea? [1->YES / 0->NO]: ";
								cin>>dia;
								cout<<"\tDo You Have Thyroid [1->YES / 0->NO]: ";
								cin>>thyr;
								cout<<"\tDo You Have Hypertension [1->YES / 0->NO]: ";
								cin>>hyp;
								cout<<"\tDo You Have Allergies [1->YES / 0->NO]: ";
								cin>>alleg;
								cout<<endl<<"Insurance Details: "<<endl;
								cout<<"\tEnter Emergency Hospital Charges, if any: ";
								cin>>emer;
								cout<<"\tEnter Physician's Appointment Charges, if any: ";
								cin>>pshy;
								cout<<"\tEnter Surgery Charges, if any: ";
								cin>>sur;
								
								MedicalRecordBlock block(name, fname, age, weight, height, cnic, gender, dia, thyr, hyp, alleg, sur, emer, pshy);
								
									if(block_flag.GetFlag() == true ){
										myHash1.Insert_LP(cnic, block);
									}
									else{
										myHash2.Insert_SC(cnic, block);
									}
								
								cout << endl << "\n\n\n\n\n\n\n\n       \t\t\t\t\t[PRESS 'ENTER' TO CONTINUE]" << endl;
								getch();
								break;
							}
		        		case 'B':
							case 'b':{
								int cnic;
								cout<<"Enter CNIC: ";
								cin>>cnic;
								
								MedicalRecordBlock OBJ;
									OBJ.SetCNIC(0); 
									
									if(block_flag.GetFlag() == true){
										OBJ = myHash1.SearchCNIC_LP(cnic); 
									}
									else{
										OBJ = myHash2.SearchCNIC_SC(cnic); 
									}	
									
							if(OBJ.GetCNIC() != 0){
								system("cls");	
								cout << endl <<" \t\t\t[ ACCOUNT FOUND! ]"<<endl;
									int xx=1;
								do{																																								
									while(true){
										cout <<endl<< "Choose From The Following: " << endl << endl;
										cout << "\tA) Display All Details" << endl;
										cout << "\tB) Display Personal Details" << endl;
										cout << "\tC) Display Medical History" << endl;
										cout << "\tD) Display Medical Bills" << endl;
										cout << "\tE) Update Personal Details" << endl;
										cout << "\tF) Update Medical History" << endl;
										cout << "\tG) Update Medical Bills" << endl;
										cout << "\tH) Share Medical Data with Your Doctor" << endl;
										cout << "\tI) Share Medical Data with Your Insurance Company" << endl;
										cout << "\tJ) Exit" << endl;				
										try        
											{
												cin >> option;
												if(option=='A' || option=='a' || option=='B' || option=='b' || option=='C' || option=='c' || option=='D' || option=='d' || option=='E' || option=='e' || option=='F' || option=='f' || option=='G' || option=='g' || option=='H' || option=='h' || option=='I' || option=='i'|| option=='j' || option=='J' )
												{
													break; 
												}
												else
												{
													throw(option);
												}
											}
									   	catch(char o)	{
												cout << endl << "Try again! Your input was " << o << " which is invalid" << endl;
												cout << endl << "[PRESS 'ENTER' TO CONTINUE]" << endl;
												getch();
												system("cls");	
										}
									}		        	
							        	switch(option){
											case 'A':
												case 'a':{		
													system("cls");												
														OBJ.DisplayWhole();
													cout << endl << "[PRESS 'ENTER' TO CONTINUE]" << endl;
													getch();
													break;
												}
							        		case 'B':
												case 'b':{
													system("cls");
														OBJ.Display_Per_Det();							
													cout << endl << "[PRESS 'ENTER' TO CONTINUE]" << endl;
													getch();
													break;
												}
							        		case 'C':
												case 'c':{
													system("cls");
														OBJ.Display_InsDues();
													cout << endl << "[PRESS 'ENTER' TO CONTINUE]" << endl;
													getch();
													break;
												}
							        		case 'D':
												case 'd':{
													system("cls");
														OBJ.Display_InsDues();
													cout << endl << "[PRESS 'ENTER' TO CONTINUE]" << endl;
													getch();							
													break;
												}
							        		case 'E':
												case 'e':{	
													system("cls");						
														OBJ.updatePersonalDetails();
													cout << endl << "[PRESS 'ENTER' TO CONTINUE]" << endl;
													getch();							
													break;
												}
							        		case 'F':
												case 'f':{
													system("cls");							
														OBJ.updateMedicalHistory();
													cout << endl << "[PRESS 'ENTER' TO CONTINUE]" << endl;
													getch();							
													break;
												}
							        		case 'G':
												case 'g':{
													system("cls");							
														OBJ.updateInsuranceDues();
													cout << endl << "[PRESS 'ENTER' TO CONTINUE]" << endl;
													getch();							
													break;
												}
											case 'H':
												case 'h':{
													system("cls");
													int docID, i;
													bool flag=false;
													while(1){
														system("cls");
														cout<<"\n\nEnter Doctor's ID (to share your Medical Data): ";
														cin>>docID;
														for(i=0; i<3; i++){
															if(availableDoctors[i].DoctorID == docID){																
																Obj_dr.shareDetails_dr(docID, OBJ);
																flag = true;
																break;
															}
														}
															if(flag == false){
																cout<<"\nSorry, no doctor was found. Try Again!";
																continue;
															}
															break;													
													}
													system("cls");
													cout<<"\n\n\n\t\t\t\t Medical Record Successfully Shared with Dr. " << availableDoctors[i].docName << " ! ";
													cout << endl << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n        \t\t\t\t\t[PRESS 'ENTER' TO CONTINUE]" << endl;
													getch();
													break;
												}
											case 'I':
												case 'i':{
													system("cls");
													int compID, i;
													bool flag=false;
													while(1){
														system("cls");
														cout<<"\n\nEnter Insurance Company's ID (to share your Medical Data): ";
														cin>>compID;
														for(i=0; i<3; i++){												
															if(insCompanies[i].CompanyID == compID){
																Obj_insur.shareDetails(compID, OBJ);
																flag = true;
																break;
															}
														}
															if(flag == false){
																cout<<"\nSorry, no insurance company was found. Try Again!";
																continue;
															}
															break;													
													}
													system("cls");
													cout<<"\n\n\n\t\t\t\t Medical Record Successfully Shared with " << insCompanies[i].companyName <<" Insurance! ";
													cout << endl << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n        \t\t\t\t\t[PRESS 'ENTER' TO CONTINUE]" << endl;
													getch();
													break;
												}
											case 'J':
												case 'j':{				
													xx=0;
													break;
												}
							        		default:
												cout << "Invalid Choice!!" << endl;
										}  
										system("cls");									
									}while(xx);
								}
								else{
									system("cls");
									cout << endl << "\t\t\t[ ACCOUNT NOT FOUND! ]" << endl;
									cout << endl << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n        \t\t\t\t\t[PRESS 'ENTER' TO CONTINUE]" << endl;
									getch();
								}
								
								break;
							}
		        		case 'C':
							case 'c':{
								break;
							}
		        		default:
							cout << "Invalid Choice!!" << endl;
					}  				
					break;
			}
			case 'B':
				case 'b':{			
		        	system("cls");
					//////////////////////////////////////
					string p=" WELCOME TO THE DOCTOR'S PORTAL";
        			gotoxy(45,4);
        			
        			for(int i=0;i<p.size();i++){
			            Sleep(50);
			            cout<<p[i];
			        }
					cout << endl << endl;
					/////////////////////////////////////
					cout<<"LIST OF THE DOCTORS: "<<endl;
					cout<< "\tSarah Naeem"<<endl;
					cout<< "\tWajahat Khan"<<endl;
					cout<< "\tQirat Baloch"<<endl;
					
					int docID, index; 
					bool flag=false;
					while(1){
						cout << "\nEnter you ID: " << endl << endl;
						cin>>docID;
						
						for(index=0; index<3; index++){
							if(availableDoctors[index].DoctorID == docID){
								flag =true;
								break;
							}
						}
						if(flag==false){
							cout<<"Invalid ID, try agian.\n";
							cout << endl << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n        \t\t\t\t\t[PRESS 'ENTER' TO CONTINUE]" << endl;
							getch();
							system("cls");
							continue;
						}
						break;
					}
					system("cls");
					cout<<"\n\n\n\t\tDR. "<<availableDoctors[index].docName<<": \n";
					int temp, c=0;
					
					if(docID == 123){
						for(int i=0; i<co; i++){
							if(Obj_dr.arr1[i] != NULL){
								c++;
							}
						}
						if(c>=1){
							for(int i=0; i<co; i++){
								cout<<"\nPatient '"<< Obj_dr.arr1[i]->GetName()<<"' , has shared their medical record with you, would you like to view it? (PRESS "<<i+1<<") ";
							}
							cin>>temp;
							Obj_dr.arr1[temp-1]->Display_Per_Det();
							Obj_dr.arr1[temp-1]->Display_Med_His();
							Obj_dr.arr1[temp-1]->updatePersonalDetails();
							Obj_dr.arr1[temp-1]->updateMedicalHistory();
							cout << endl << "\n\n\n\n\n\n\n\n        \t\t\t\t\t[PRESS 'ENTER' TO CONTINUE]" << endl;
							getch();
						}
						else{
							cout<<"\n\n\t\t\t\t\t\t  [No Entries]"<<endl;
							cout << endl << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n       \t\t\t\t\t[PRESS 'ENTER' TO CONTINUE]" << endl;
							getch();
						}
					}
					else if(docID == 456){
							c=0;
						for(int i=0; i<co1; i++){
							if(Obj_dr.arr2[i] != NULL){
								c++;
							}
						}
						if(c>=1){
							for(int i=0; i<co1; i++){
								cout<<"\nPatient '"<< Obj_dr.arr2[i]->GetName()<<"' , has shared their medical record with you, would you like to view it? (PRESS "<<i+1<<") ";
							}
							cin>>temp;
							Obj_dr.arr2[temp-1]->Display_Per_Det();
							Obj_dr.arr2[temp-1]->Display_Med_His();
							Obj_dr.arr2[temp-1]->updatePersonalDetails();
							Obj_dr.arr2[temp-1]->updateMedicalHistory();
							cout << endl << "\n\n\n\n\n\n\n\n      \t\t\t\t\t[PRESS 'ENTER' TO CONTINUE]" << endl;
							getch();
						}
						else{
							cout<<"\n\n\t\t\t\t\t\t  [No Entries]"<<endl;
							cout << endl << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n       \t\t\t\t\t[PRESS 'ENTER' TO CONTINUE]" << endl;
							getch();
						}
					}
					else if(docID == 789){
							c=0;
						for(int i=0; i<co2; i++){
							if(Obj_insur.arr3[i] != NULL){
								c++;
							}
						}
						if(c>=1){
							for(int i=0; i<co2; i++){
								cout<<"\nPatient '"<< Obj_dr.arr3[i]->GetName()<<"' , has shared their medical record with you, would you like to view it? (PRESS "<<i+1<<") ";
							}
							cin>>temp;
							Obj_dr.arr3[temp-1]->Display_Per_Det();
							Obj_dr.arr3[temp-1]->Display_Med_His();
							Obj_dr.arr3[temp-1]->updatePersonalDetails();
							Obj_dr.arr3[temp-1]->updateMedicalHistory();
							cout << endl << "\n\n\n\n\n\n\n\n        \t\t\t\t\t[PRESS 'ENTER' TO CONTINUE]" << endl;
							getch();
						}
						else{
							cout<<"\n\n\t\t\t\t\t\t  [No Entries]"<<endl;
							cout << endl << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n       \t\t\t\t\t[PRESS 'ENTER' TO CONTINUE]" << endl;
							getch();
						}
					}
					else{
						cout<<"\n\n\t\tAlright! Have a Good Day!";
						cout << endl << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n        \t\t\t\t\t[PRESS 'ENTER' TO CONTINUE]" << endl;
						getch();
					}
					break;
				}
			case 'C':
				case 'c':{
					system("cls");
					//////////////////////////////////////
					string p=" WELCOME TO THE ADMIN'S PORTAL";
        			gotoxy(45,4);
        			
        			for(int i=0;i<p.size();i++){
			            Sleep(50);
			            cout<<p[i];
			        }
					cout << endl << endl;
					/////////////////////////////////////

			if(L.Options() == true){	 		
				 		system("CLS");
				int xxx=1;
			do{
				while(true){
					cout <<endl<< "Choose From The Following: " << endl << endl;
					cout << "\tA) Set Size of Hash Table" << endl;
					cout << "\tB) Linear Probing" << endl;
					cout << "\tC) Seperate Chaining" << endl;
					cout << "\tD) Display Array" << endl;
					cout << "\tE) Exit" << endl;				
					try        
						{
							cin >> option;
							if(option=='A' || option=='a' || option=='B' || option=='b' || option=='C' || option=='c' || option=='D' || option=='d' || option=='E' || option=='e')
							{
								break; 
							}
							else
							{
								throw(option);
							}
						}
				   	catch(char o)	{
							cout << endl << "Try again! Your input was " << o << " which is invalid" << endl;
							cout << endl << "[PRESS 'ENTER' TO CONTINUE]" << endl;
							getch();
							system("cls");	
					}
				}		        	
		        	switch(option){
						case 'A':
							case 'a':{			
								int size;
								cout<<"Enter Size of Hashtable: "<<endl;
								cin>> size;
									
									TableSize(size);	// global function												
		
								cout << endl << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n        \t\t\t\t\t[PRESS 'ENTER' TO CONTINUE]" << endl;
								getch();
								break;
							}
		        		case 'B':
							case 'b':{
								
								cout<<"Linear Probing Method Chosen!"<<endl;
								block_flag.SetFlag(1);
																
								cout << endl << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n        \t\t\t\t\t[PRESS 'ENTER' TO CONTINUE]" << endl;
								getch();
								break;
							}
		        		case 'C':
							case 'c':{
								
								cout<<"Seperate Chaining Method Chosen!"<<endl;
								block_flag.SetFlag(0);
														
					cout << endl << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n        \t\t\t\t\t[PRESS 'ENTER' TO CONTINUE]" << endl;
					getch();
								break;
							}
		        		case 'D':
							case 'd':{
								system("cls");	
								cout<<"Displaying HashTable: "<<endl;
									if(block_flag.GetFlag() == true){
										myHash1.Display_LP();
									}
									else{
										myHash2.Display_SC();
									}
								
					cout << endl << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n        \t\t\t\t\t[PRESS 'ENTER' TO CONTINUE]" << endl;
					getch();							
								break;
							}
		        		case 'E':
							case 'e':{
							xxx=0;							
								break;
							}
		        		default:
							cout << "Invalid Choice!!" << endl;
					}  
					system("cls");					
		 		}while(xxx);
				}//end of if				 	
				 	break;
				}
			case 'D':
				case 'd':{
					system("cls");
					//////////////////////////////////////
					string p=" WELCOME TO THE INSURANCE COMPANY'S PORTAL";
        			gotoxy(45,4);
        			
        			for(int i=0;i<p.size();i++){
			            Sleep(50);
			            cout<<p[i];
			        }
					cout << endl << endl;
					/////////////////////////////////////
					cout<<"INSURANCE COMPANIES: "<<endl;
					cout<< "\tJubliee"<<endl;
					cout<< "\tSmart Choice"<<endl;
					cout<< "\tState Life"<<endl;
					
					int compID, index; 
					bool flag=false;
					while(1){
						cout << "\nEnter Insurance Company's ID: " << endl << endl;
						cin>>compID;
						
						for(index=0; index<3; index++){
							if(insCompanies[index].CompanyID == compID){
								flag =true;
								break;
							}
						}
						if(flag==false){
							cout<<"Invalid ID, try agian.\n";
							cout << endl << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n        \t\t\t\t\t[PRESS 'ENTER' TO CONTINUE]" << endl;
							getch();
							system("cls");
							continue;
						}
						break;
					}
					system("cls");
					cout<<"\n\n\n\t\tInsurance Company: "<<insCompanies[index].companyName<<"\n";
					int temp,c=0;
					
					if(compID == 111){
						for(int i=0; i<count; i++){
							if(Obj_insur.arr1[i] != NULL){
								c++;
							}
						}
						if(c>=1){
							for(int i=0; i<count; i++){
								cout<<"\nPatient '"<< Obj_insur.arr1[i]->GetName()<<"' , has shared their Insurance Details with your Insurance Company, would you like to view it? (PRESS "<<i+1<<") ";
							}
							cin>>temp;
							Obj_insur.arr1[temp-1]->Display_Per_Det();
							Obj_insur.arr1[temp-1]->Display_InsDues();
							cout << endl << "\n\n\n\n\n\n\n\n\n       \t\t\t\t\t[PRESS 'ENTER' TO CONTINUE]" << endl;
							getch();
						}
						else{
							cout<<"\n\n\t\t\t\t\t\t  [No Entries]"<<endl;
							cout << endl << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n       \t\t\t\t\t[PRESS 'ENTER' TO CONTINUE]" << endl;
							getch();
						}
					}
					else if(compID == 222){
							c=0;
						for(int i=0; i<count1; i++){
							if(Obj_insur.arr2[i] != NULL){
								c++;
							}
						}
						if(c>=1){
							for(int i=0; i<count1; i++){
								cout<<"\nPatient '"<< Obj_insur.arr2[i]->GetName()<<"' , has shared their Insurance Details with your Insurance Company, would you like to view it? (PRESS "<<i+1<<") ";
							}
							cin>>temp;
							Obj_insur.arr2[temp-1]->Display_Per_Det();
							Obj_insur.arr2[temp-1]->Display_InsDues();
							cout << endl << "\n\n\n\n\n\n\n\n\n       \t\t\t\t\t[PRESS 'ENTER' TO CONTINUE]" << endl;
							getch();
						}
						else{
							cout<<"\n\n\t\t\t\t\t\t  [No Entries]"<<endl;
							cout << endl << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n       \t\t\t\t\t[PRESS 'ENTER' TO CONTINUE]" << endl;
							getch();
						}
					}
					else if(compID == 333){
							c=0;
						for(int i=0; i<count2; i++){
							if(Obj_insur.arr3[i] != NULL){
								c++;
							}
						}
						if(c>=1){
							for(int i=0; i<count2; i++){
								cout<<"\nPatient '"<< Obj_insur.arr3[i]->GetName()<<"' , has shared their Insurance Details with your Insurance Company, would you like to view it? (PRESS "<<i+1<<") ";
							}
							cin>>temp;
							Obj_insur.arr3[temp-1]->Display_Per_Det();
							Obj_insur.arr3[temp-1]->Display_InsDues();
							cout << endl << "\n\n\n\n\n\n\n\n\n       \t\t\t\t\t[PRESS 'ENTER' TO CONTINUE]" << endl;
							getch();
						}
						else{
							cout<<"\n\n\t\t\t\t\t\t  [No Entries]"<<endl;
							cout << endl << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n       \t\t\t\t\t[PRESS 'ENTER' TO CONTINUE]" << endl;
							getch();
						}
					}
					else{
						cout<<"\n\n\t\tAlright! Have a Good Day!";
						cout << endl << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n        \t\t\t\t\t[PRESS 'ENTER' TO CONTINUE]" << endl;
						getch();
					}
					break;
				}
			case 'E':
				case 'e':{
					system("cls");
					//////////////////////////////////////
					string p=" EXITING THE PROGRAM";
        			gotoxy(46,4);
        			
        			for(int i=0;i<p.size();i++){
			            Sleep(50);
			            cout<<p[i];
			        }
					cout << endl << endl;
					cout << endl << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n       \t\t\t\t\t[PRESS 'ENTER' TO CONTINUE]" << endl;
					getch();
					/////////////////////////////////////
				 	exit(0);
				 	break;
				}
			default:
				cout << "Invalid Choice!!" << endl;
		}
	cout << "#*# END OF PROGRAM #*#";
	break;

}while(true);
}
	return 1;
}

