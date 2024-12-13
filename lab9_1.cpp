#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
#include<cmath>
using namespace std;

int main(){
	
	double ton;
	double beer;
	double Payment;
	
	cout << "Enter initial loan: ";
	cin >> ton;
	
	cout << "Enter interest rate per year (%): ";
	cin >> beer;
	
	cout << "Enter amount you can pay per year: ";
	cin >> Payment;
	
	double PrevBalance, Interest, Total, NewBalance;
	int year =1;
	
	PrevBalance = ton;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	while (PrevBalance > 0){
	    
	    Interest = PrevBalance * (beer / 100);
	    Total = PrevBalance + Interest;
	    
	    if (Total <= Payment){
	        Payment = Total;
	        NewBalance = 0;
	    }else{
	        NewBalance = Total - Payment;
	    }

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect

	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
	cout << setw(13) << left << year; 
	cout << setw(13) << left << PrevBalance;
	cout << setw(13) << left << Interest;
	cout << setw(13) << left << Total;
	cout << setw(13) << left << Payment;
	cout << setw(13) << left << NewBalance;
	cout << "\n";	
	
	PrevBalance = NewBalance;
	
	year++;
	    
	    
	}
	
	return 0;
}
