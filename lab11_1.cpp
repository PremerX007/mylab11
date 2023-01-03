#include<iostream>
using namespace std;

int main(){
	int count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	int number = 1;
	char grade;
	do{
		cout << "Student [" << number << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A'){ // if grade is A
			count[0] += 1;
			number++;
		}else if(grade == 'B'){ // if grade is B
			count[1] += 1;
			number++;
        }else if(grade == 'C'){
            count[2] += 1;
            number++;
        }else if(grade == 'D'){
			count[3] += 1;
			number++;
        }else if(grade == 'F'){
            count[4] += 1;
            number++;
        }else if(grade == '0'){
            break;
		}else{ // grade is wrong input
			cout << "Wrong input. Please input again." << endl;
		} 
	}while(true);
	
	
	cout << "In total " << number-1 << " students." << endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4];	
	
	return 0;
}
