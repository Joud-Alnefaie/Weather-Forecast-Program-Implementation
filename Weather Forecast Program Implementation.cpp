/* The program asks the user to enter 7 degrees, either Celsius or Fahrenheit, then the average temperature is calculated 
Celsius or Fahrenheit, then displays it to the user and displays a description of the weather condition during the week */


#include <iostream>
using namespace std;

int main(){


    int userTemp[7];
    int sumTemp = 0;
    char tempUnit;
    double averageTemp, cTemp, fTemp;
    
    cout<<"please choose a tempreture unit:"<<endl; //Prompting the user to pick a tempreture unit.
    
    cout<<"C - Celsious."<<endl;
    cout<<"F - Fahrenheit."<<endl; //Available tempreture units.
    cin>>tempUnit;
    
    switch (tempUnit){ 

        case 'C':

            cout<<"you picked the Celsious unit."<<endl; //what happens when the user picks the celsious unit.
        break;
        
        case 'F':

            cout<<"you picked the Fahrenheit unit."<<endl; //what happens when the user picks the fahrenheit unit.
        break;
        
        case 'c':

            cout<<"you picked the Celsious unit."<<endl; //what happens when the user picks the celsious unit.
        break;

        case 'f':

            cout<<"you picked the Fahrenheit unit."<<endl; //what happens when the user picks the fahrenheit unit.
        break;
        
        default: 
            cout<<"not valid!"<<endl<<"please enter one of the provided options [C,F]."<<endl; //what happens when the user picks something that is not listed in the options.
    }

    if (tempUnit=='c' || tempUnit=='C' || tempUnit=='f' || tempUnit=='F'){
    
        cout << "\nEnter the 7 temperature readings:\n";

            for (int i = 0; i < 7; i++){
                cout << "Day " << i+1 << ": ";
                cin >> userTemp[i];
                sumTemp = sumTemp + userTemp[i];
            }
	}
    
    averageTemp = sumTemp / 7.0;
    
	switch(tempUnit){

	    case 'C':

		    cTemp = averageTemp;
            fTemp = (averageTemp * 9/5) + 32;
            cout << "The temperature in Celsius is " << cTemp << endl;
            cout << "The temperature in Fahrenheit is " << fTemp << endl;
        break;
            
        case 'c':

			cTemp = averageTemp;
            fTemp = (averageTemp * 9/5) + 32;
            cout << "The temperature in Celsius is " << cTemp << endl;
            cout << "The temperature in Fahrenheit is " << fTemp << endl;
        break;
            
        case 'F':

            fTemp = averageTemp;
            cTemp = (averageTemp - 32) * 5/9;
            cout << "The temperature in Celsius is " << cTemp << endl;
            cout << "The temperature in Fahrenheit is " << fTemp << endl;
        break;
            
        case 'f':

            fTemp = averageTemp;
            cTemp = (averageTemp - 32) * 5/9;
            cout << "The temperature in Celsius is " << cTemp << endl;
            cout << "The temperature in Fahrenheit is " << fTemp << endl;
        break;
	}
			
	if (tempUnit=='c' || tempUnit=='C' || tempUnit=='f' || tempUnit=='F'){
	// Determining weather conitions and suggestions

        if(averageTemp<=0){

            cout<<" The weather is Freezing"<<endl;
            cout<<"We suggest that you Turn on the heater now."<<endl;
        }

        else if ( averageTemp<15){

            cout<<"The weather is Cold"<<endl;
            cout<<"We suggest that you wear heavy clothes."<<endl;
        }

        else if (averageTemp<25){

            cout<<"The weather is Cool"<<endl;
            cout<<"Enjoy the weather."<<endl;
        }

        else if (averageTemp<30){

            cout<<"The weather is warm"<<endl;
            cout<<"Relax and wear what you want."<<endl;
        }

        else if(averageTemp<40){

            cout<<"The weather is Hot"<<endl;
            cout<<"Not preferable to go out."<<endl;
        }

        else if (averageTemp<=100){

            cout<<"The weather is too hot to live in"<<endl;
            cout<<"See you in heaven."<<endl;
        }

        else{

            cout<<"The weather is Boiling"<<endl;
            cout<<"something went wrong"<<endl;
        }
    }

    return 0;
}