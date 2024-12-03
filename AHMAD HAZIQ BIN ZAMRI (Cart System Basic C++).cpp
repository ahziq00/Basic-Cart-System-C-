#include <iomanip>
#include <cstring>
#include <cmath>
#include <iostream>

using namespace std;
void SP ();
void SP()
		{
		cout<< " __________________________________________________________________________________"  << endl;
		cout<< "|                       |                       |           |        |             |" << endl;
		cout<< "|                       |         Brand         | Range(ft) |  Code  |  Price (RM) |" << endl;
		cout<< "|                       |_______________________|___________|________|_____________|" << endl;
		cout<< "|                       |                       |           |        |             |" << endl;
		cout<< "|                       |Hunter PGP Ultra Rotor |   17-47   |  SH01  |    49.60    |" << endl;
		cout<< "|                       |_______________________|___________|________|_____________|" << endl;
		cout<< "|                       |                       |           |        |             |" << endl;
		cout<< "|                       |Gilmouse 167H Pulsating|    43     |  SH02  |    196.00   |" << endl;
		cout<< "|                       |_______________________|___________|________|_____________|" << endl;
		cout<< "|                       |                       |           |        |             |" << endl;
		cout<< "|    Sprinkler Head     |Orbit Impact Canister  |   25-45   |  SH03  |    91.80    |" << endl;
		cout<< "|                       |_______________________|___________|________|_____________|" << endl;
		cout<< "|                       |                       |           |        |             |" << endl;
		cout<< "|                       |Toro Pop-up Spray      |    15     |  SH04  |    17.15    |" << endl;
		cout<< "|                       |_______________________|___________|________|_____________|" << endl;
		cout<< "|                       |                       |           |        |             |" << endl;
		cout<< "|                       |Melnor XT Turbo        |   20-55   |  SH05  |    120.00   |" << endl;
		cout<< "|                       |_______________________|___________|________|_____________|" << endl;
		cout<< "|                       |                       |           |        |             |" << endl;
		cout<< "|                       |Rain Bird 1804VAN      |     8     |  SH06  |     5.00    |" << endl;
		cout<< "|_______________________|_______________________|___________|________|_____________|" << endl;
		}

void WP();
void WP()
		{
		cout<< " _____________________________________________________________________________________ " << endl;
		cout<< "|                     |                      |                  |        |            |" << endl;
		cout<< "|                     |      Brand           | Flow rate (GPM)  |  Code  | Price (RM) |" << endl;
		cout<< "|                     |______________________|__________________|________|____________|" << endl;
		cout<< "|                     |                      |                  |        |            |" << endl;
		cout<< "|                     | Flotec FP5172        |        67        |  WP01  |   932.00   |" << endl;
		cout<< "|                     |______________________|__________________|________|____________|" << endl;
		cout<< "|                     |                      |                  |        |            |" << endl;
		cout<< "|                     | Red Lion             |        76        |  WP02  |   1356.00  |" << endl;
		cout<< "|                     |______________________|__________________|________|____________|" << endl;
		cout<< "|                     |                      |                  |        |            |" << endl;
		cout<< "|     Water Pump      | Flotec FP5182        |        69        |  WP03  |   1236.00  |" << endl;
		cout<< "|                     |______________________|__________________|________|____________|" << endl;
		cout<< "|                     |                      |                  |        |            |" << endl;
		cout<< "|                     | Burcam Pumps         |        70        |  WP04  |   1336.00  |" << endl;
		cout<< "|                     |______________________|__________________|________|____________|" << endl;
		cout<< "|                     |                      |                  |        |            |" << endl;
		cout<< "|                     | Little Giant LSPH-200|        85        |  WP05  |   2572.00  |" << endl;
		cout<< "|                     |______________________|__________________|________|____________|" << endl; 
		cout<< "|                     |                      |                  |        |            |" << endl;
		cout<< "|                     | Wayne WLS200         |        70        |  WP06  |   1396.00  |" << endl;
		cout<< "|_____________________|______________________|__________________|________|____________|" << endl;
		}
		
void RS();
void RS()
		{
		cout<< " ___________________________________________________________________________________________ " << endl;
		cout<< "|                |                              |                      |      |             |" << endl;
		cout<< "|                |           Brand              |    Connection Type   | Code |  Price (RM) |" << endl;
		cout<< "|                |______________________________|______________________|______|_____________|" << endl;
		cout<< "|                |                              |                      |      |             |" << endl;
		cout<< "|                | Rain Bird CPRSDBEX           |         Wired        | RS01 |    83.00    |" << endl;
		cout<< "|                |______________________________|______________________|______|_____________|" << endl;
		cout<< "|                |                              |                      |      |             |" << endl;
		cout<< "|                | HUNTER Sprinkler WRCLIK      |        Wireless      | RS02 |   273.55    |" << endl;
		cout<< "|                |______________________________|______________________|______|_____________|" << endl;
		cout<< "|  Rain Sensor   |                              |                      |      |             |" << endl;
		cout<< "|                | Orbit Rain and Freeze Sensor |        Wireless      | RS03 |   124.95    |" << endl;
		cout<< "|                |______________________________|______________________|______|_____________|" << endl;
		cout<< "|                |                              |                      |      |             |" << endl;
		cout<< "|                | Toro Sprinkler System        |         Wired        | RS04 |    76.00    |" << endl;
		cout<< "|                |______________________________|______________________|______|_____________|" << endl;
		cout<< "|                |                              |                      |      |             |" << endl;
		cout<< "|                | Rain Bird - WR2              |        Wireless      | RS05 |   292.00    |" << endl;
		cout<< "|________________|______________________________|______________________|______|_____________|" << endl;
		}

void WM();
void WM()
		{
		cout<< " ___________________________________________________________________________________________ " << endl;
		cout<< "|             |                                        |                 |      |           |" << endl;
		cout<< "|             |               Brand                    | Connection Type | Code | Price (RM)|" << endl;
		cout<< "|             |________________________________________|_________________|______|___________|" << endl;
		cout<< "|             |                                        |                 |      |           |" << endl;
		cout<< "|             | Rachio 3 Smart Sprinkler               |    Wireless     | WM01 |   756.00  |" << endl;
		cout<< "| Water Meter |________________________________________|_________________|______|___________|" << endl;
		cout<< "|             |                                        |                 |      |           |" << endl;
		cout<< "|             | Orbit B-Hyve Sprinkler Timer           |    Wireless     | WM02 |   373.45  |" << endl;
		cout<< "|             |________________________________________|_________________|______|___________|" << endl;
		cout<< "|             |                                        |                 |      |           |" << endl;
		cout<< "|             | Orbit B-Hyve Smart Hose Watering Timer |    Wireless     | WM03 |   61.85   |" << endl;
		cout<< "|_____________|________________________________________|_________________|______|___________|" << endl;
		}


int main () {
	// Declaring all the variable that will be used in the coding //
	char nak1, nak2, nak3, nak4, nak5, nak6, code1[5]= " ", code2[5]= " ", code3[5]= " ", code4[5]= " ";
	char name1[50], name2[50], name3[50], name4[50], nama[50], alamat[100], nophone[50];
	float price1, price2, price3, price4, price5, price6, price7, price8;
	int qnt1, i=0;
	

	// Starting of while loop //
	do{
	
	// Calculation of counter //
	// The counter will start with 1 because the i is been declared as 0 //
	i=i+1;	
	
	cout<< "			Welcome To Haziq SDN BDH"<<endl;
	cout<< " Where we sell every part of water sprinkler system that you need!"<< endl;
	cout<< "\n***********************************************************************" << endl;
	cout<< "Please Enter Your Name		:";
	cin >>ws;
	cin.getline(nama,50);
	cout<< "Please Enter Your Address	:";
	cin >>ws;
	cin.getline(alamat,100);
	cout<< "Please Enter Your No Phone	:";
	cin >> ws;
	cin.getline(nophone,50);
	cout<< "Let us help you to set up your own water sprinkler system !" << endl;
	cout<< "Enter Yes[Y] and No[N]"<< endl;
	cin >> nak1;
	
	// Starting of switch case of wether  user want to set their own sprikler system with our help or not //
	// Case 1 when they say yes by keyin Y //
	switch(nak1){
	case 'Y':	{
		
		cout<< "\nLet us start with sprinkler head"<< endl;
		cout<< "Enter Yes[Y] and No[N]"<< endl;
		cin >> nak2;
		
		// Case 1.1 when the user say yes by keyin Y //
		switch(nak2){
		case 'Y':	{
		
		SP();
		{
		}
		
		// User will be asked for the brand that they desired //
		cout<< "what type of brand did you want" <<endl;
		cout<< "Please enter the code :";
		cin >>ws;
		cin.getline(code1,5);
		
		// Name and price of the sprinkelr head will be determind by the code that user insert //
		{
		if(strcmp (code1,"SH01") == 0){
			strcpy(name1,"Hunter PGP Ultra Rotor" );
			price1 = 49.60;
		}
			
		else if(strcmp(code1, "SH02") == 0){
			strcpy(name1,"Gilmouse 167H Pulsating" );
			price1 = 196.00;
		}
		else if(strcmp(code1, "SH03") == 0){
			strcpy(name1,"Orbit Impact Canister" );
			price1 = 91.80 ;
		}
		else if(strcmp(code1, "SH04") == 0){
			strcpy(name1,"Toro Pop-up Spray" );
			price1 = 17.15 ;
		}
		else if(strcmp(code1, "SH05") == 0){
			strcpy(name1,"Melnor XT Turbo" );
			price1 = 120.00 ;
		}
		else if(strcmp(code1, "SH06") == 0){
			strcpy(name1,"Rain Bird 1804VAN" );
			price1 = 5.00 ;
		}
		else {
			cout<< "Wrong Code!";
			strcpy(name1,"" );
			price1 = 0 ;
		}
		
		}
		
		
		// The user will be asked on how much sprinkler head that they want
		cout<< "Quantity of Sprinkler Head: ";
		cin >> qnt1;
		break;
					}
		
		// If the user enter N for no, the name and price of sprinkler head will be set to 0 //	
		default: {
			cout<< "We Moving To The Next Part";
			strcpy(name1, " ");
			price1 = 0.00;
			break;
		} 
					}
		
		// User will be asked if they want to purchase a water pump from us //
		// If the user said no by entering N they will move to next step //			
		cout<< "\nYou want to purchase a water pump from us?"<< endl;
		cout<< "Enter Yes[Y] and No[N]"<< endl;
		cin >> nak3;
		 
		// Case if they decide to select yes by entering Y and no by entering N //
		switch(nak3){
		case 'Y': 	{
			
		WP();
		{
		}
		
		// User will be asked for the brand that they desired //
		cout<< "what type of brand did you want"<< endl;
		cout<< "Please enter the code :";
		cin >> ws;
		cin.getline(code2,5);
		
		// Name and price of the water pump will be determind by the code that user insert //
		{
		if(strcmp (code2,"WP01") == 0){
			strcpy(name2,"Flotec FP5172" );
			price2 = 932.00;
		}
		else if(strcmp(code2, "WP02") == 0){
			strcpy(name2,"Red Lion" );
			price2 = 1356.00;
		}
		else if(strcmp(code2, "WP03") == 0){
			strcpy(name2,"Flotec FP5182" );
			price2 = 1236.00;
		}
		else if(strcmp(code2, "WP04") == 0){
			strcpy(name2,"Burcam Pumps" );
			price2 = 1336.00;
		}
		else if(strcmp(code2, "WP05") == 0){
			strcpy(name2,"Little Giant LSPH-200" );
			price2 = 2572.00;
		}
		else if(strcmp(code2, "WP06") == 0){
			strcpy(name2,"Wayne WLS200" );
			price2 = 1396.00;
		}
		else {
			cout<< "Wrong Code!";
			strcpy(name2,"" );
			price2 = 0 ;
		}
		}
			break;
		}
		
		// If the user enter N for no, the name and price of water pump will be set to 0 //
		default: {
			cout<< "We Moving To The Next Part";
			strcpy(name2, " ");
			price2 = 0.00;
			break;
		}
					}
		
		// User will be asked if they want to purchase a rain sensor from us //
		// If the user said no by entering N they will move to next step //
		cout<< "\nYou want to puchase a rain sensor from us?"<< endl;
		cout<< "Enter Yes[Y] and No[N]"<< endl;
		cin >> nak4;
		
		// Case if they decide to select yes by entering Y and no by entering N //
		switch(nak4){
		case 'Y': 	{
		
		RS();
		{
		}
		
		// User will be asked for the brand that they desired //
		cout<< "what type of brand did you want"<< endl;
		cout<< "Please enter the code :";
		cin >> ws;
		cin.getline(code3,5);
		
		// Name and price of the rain sensor will be determind by the code that user insert //
		{
		if(strcmp (code3,"RS01") == 0){
			strcpy(name3,"Rain Bird CPRSDBEX" );
			price3 = 83.00;
		}
		else if(strcmp(code3, "RS02") == 0){
			strcpy(name3,"HUNTER Sprinkler WRCLIK" );
			price3 = 273.00;
		}
		else if(strcmp(code3, "RS03") == 0){
			strcpy(name3,"Orbit Rain and Freeze Sensor" );
			price3 = 124.95;
		}
		else if(strcmp(code3, "RS04") == 0){
			strcpy(name3,"Toro Sprinkler System" );
			price3= 76.00;
		}
		else if(strcmp(code3, "RS05") == 0){
			strcpy(name3,"Rain Bird - WR2" );
			price3 = 292.00;
		}
		else {
			cout<< "Wrong Code!";
			strcpy(name3,"" );
			price3 = 0 ;
		}
		}
			break;
		}
		
		// If the user enter N for no, the name and price of rain sensor will be set to 0 //
		default: {
			cout<< "We Moving To The Next Part";
			strcpy(name3, " ");
			price3 = 0.00;
			break;
		}
					}
				
		// User will be asked if they want to purchase a water meter from us //
		// If the user said no by entering N they will move to next step //
		cout<< "\nYou want to purchase a water meter from us?"<< endl;
		cout<< "Enter Yes[Y] and No[N]"<< endl;
		cin >> nak5;
		
		// Case if they decide to select yes by entering Y and no by entering N //
		switch(nak5){
		case 'Y': 	{
			
		WM();
		{
		}
		
		// User will be asked for the brand that they desired //
		cout<< "what type of brand did you want"<< endl;
		cout<< "Please enter the code :";
		cin >> ws;
		cin.getline(code4,5);
		
		// Name and price of the water meter will be determind by the code that user insert //
		{
		if(strcmp (code4,"WM01") == 0){
			strcpy(name4,"Rachio 3 Smart Sprinkler" );		
			price4 = 756.00;
		}
		else if(strcmp(code4, "WM02") == 0){
			strcpy(name4,"Orbit B-Hyve Sprinkler Timer" );
			price4 = 373.45;
		}
		else if(strcmp(code4, "WM03") == 0){
			strcpy(name4,"Orbit B-Hyve Smart Hose Watering Timer" );
			price4 = 61.85;
		}
		else {
			cout<< "Wrong Code!";
			strcpy(name4,"" );
			price4 = 0 ;
		}
		}
			break;
		}
		
		// If the user enter N for no, the name and price of water meter will be set to 0 //
		default: {
			cout<< "We Moving To The Next Part";
			strcpy(name4, " ");
			price4 = 0.00;
			break;
		}
					}
	
	break;
	}
	
	// If the user enter N or any other input, all the part listed above will be set to 0 // 
	default: {
	
		cout<< "Thanks For Passing By!";
		strcpy(name1, " ");
			price1 = 0.00;
		strcpy(name2, " ");
			price2 = 0.00;
		strcpy(name3, " ");
			price3 = 0.00;
		strcpy(name4, " ");
			price4 = 0.00;
	}
	}
	
	// price8 is a price of total sprinkler head //
		price8 = price1 * qnt1;
		
	// price5 is a total price of all the part that user enter //
		price5 = (price1 * qnt1) + price2 + price3 + price4;
		
	// price6 is a price of gst since it is 6% so it will be 0.06 //
		price6 = price5 * 0.06;
	
	// price7 is a net total of all part //
		price7 = price5 + price6;
    	
	cout<< ""<<endl;
	cout<< "***********************************************************************" << endl;
	cout<< "			  HAZIQ SDN BHD" << endl;
	cout<< "	 	 ADDRESS : Lot 6, Jalan Suria 4/2," << endl;
	cout<< "		Taman Purnama, 86000, Kluang, Johor" << endl;
	cout<< "			No Phone: 07-7786453" << endl;
	cout<< "***********************************************************************" << endl;
	cout<< "					CASH RECEIPT" << endl;
	cout<< "NUMBER OF CUSTOMER				:"<<i<< endl;
	cout<< "Customer Name					:"<<nama << endl;
	cout<< "Alamat						:"<<alamat<< endl;
	cout<< "No Phone					:"<<nophone<< endl;
	cout<< "***********************************************************************" << endl;
	cout<< "Brand Of Sprinkler Head				:"<< name1<< endl;
	cout<< "Quantity of Sprinkler Head			:"<< qnt1<< endl;
	cout<< "Price of Sprinkler Head				:RM"<< price8<< endl;
	cout<< "Brand of Water Pump				:" << name2<< endl;
	cout<< "Price of Water Pump				:RM"<< price2 << endl;
	cout<< "Brand of Rain Sensor				:"<< name3<< endl;
	cout<< "Price of Rain Sensor				:RM"<< price3<< endl;
	cout<< "Brand of Water Meter				:"<< name4<< endl;
	cout<< "Price of Water Meter				:RM"<< price4<< endl;
	cout<< "***********************************************************************" << endl;
	cout<< "GST 						:RM"<< price6<< endl;
	cout<< "Total Price					:RM"<< price7<< endl;
	cout<< "***********************************************************************" << endl;
	cout<< "		THANKS FOR PUCHASING WITH US "<<endl;
	
	// user will be asked if they want to repeat the process or not // 
	// if the user enter Y or y the user will be brought back to the starting of the while loop // 
	cout<< "Do you want to make another purchase? Yes[Y] or No[N]: ";
		cin>> nak6;
		}while (nak6 == 'Y'|| nak6 == 'y');
	// if the user enter other that Y or y the program it will stop //	
	return 0;
}
