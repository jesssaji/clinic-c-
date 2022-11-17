#include<iostream>
using namespace std;

class patient{
	public:
		int patientID;
		string PName;
		void getPatientInfo();
		void putPatientInfo();
		void makeAppointment();
		void diagnosis();
		void billing();
		void printBill();
		
		
	private:
		string address;
		string gender;
		int phone;
		string bloodGroup;
		string doctorName;
		string appDate;
		string diagnosisInfo;
		string medicineInfo;
		int doctorFee;
		int medicineCharge;
		int total;
};

void patient :: getPatientInfo()
{
	cout<<"\nenter Patient ID:";
	cin>>patientID;
	cout<<"enter Patient name:";
	cin>>PName;
	cout<<"enter Address:";
	cin>>address;
	cout<<"enter Gender:";
	cin>>gender;
	cout<<"enter Phone no:";
	cin>>phone;
	cout<<"enter Blood Group:";
	cin>>bloodGroup;
}
void patient ::putPatientInfo()
{
	cout<<"\nPatient Details\n";
	if(PName=="")
	{
		cout<<"\nENTER SOME DATA FIRST!!!\n";
	}
	else{
	cout<<"\nPatient ID: ";
	cout<<patientID;
	cout<<"\nPatient Name: ";
	cout<<PName;
	cout<<"\nAddress: ";
	cout<<address;
	cout<<"\nGender: ";
	cout<<gender;
	cout<<"\nPhone no: ";
	cout<<phone;
	cout<<"\nBlood Group: ";
	cout<<bloodGroup;
	}
}
void patient :: makeAppointment()
{
	cout<<"\nEnter Doctor Name:";
	cin>>doctorName;
	cout<<"Enter Appointment Date:";
	cin>>appDate;
}
void patient :: diagnosis()
{
	cout<<"\nEnter Diagnosis info:";
	cin>>diagnosisInfo;
	cout<<"Enter Medicine info:";
	cin>>medicineInfo;
}
void patient :: billing()
{
	cout<<"\nEnter doctor fee:";
	cin>>doctorFee;
	cout<<"Enter medicine charge:";
	cin>>medicineCharge;
	total=doctorFee+medicineCharge;
}
void patient :: printBill()
{
	cout<<"\nDoctor fee: ";
	cout<<doctorFee;
	cout<<"\nMedicine charge: ";
	cout<<medicineCharge;
	cout<<"\nTotal amount: ";
	cout<<total;
}

int main()
{
	patient p1;
	int selection;
	cout<<"\n\nWELCOME TO SMALL SCALE CLINIC!!";
	while(1)
	{
	cout<<"\n\n1.Enter patient details\n2.Patient Details\n3.Make an appointment\n4.Diagnosis details\n5.Enter Billing details\n6.Print Bill\n7.Exit\n"; 
	cin>>selection;
	
	switch (selection) {
		case 1:
			p1.getPatientInfo();
			cout<<"\nPatient Deatils recieved!!";
			break;
		case 2:
			p1.putPatientInfo();
			break;
		case 3:
			p1.makeAppointment();
			cout<<"\nAppointment Made!! be on time";
			break;
		case 4:
			p1.diagnosis();
			cout<<"\nDiagnosis Info registered to sys";
			break;
		case 5:
			p1.billing();
			cout<<"\nBILL GENERATED";
			break;
			
		case 6:
			cout<<"\nBILL\n";
			p1.putPatientInfo();
			p1.printBill();
			break;
		case 7:
			cout<<"GoodByeee";
			return 0;
			break;
		default:
			cout<<"\nInvalid Input";
		}
	}
}		
