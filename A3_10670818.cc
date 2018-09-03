 #include<iostream>
 using namespace std;
 int main ( )
 {
 	int s;
 	cout<<"Please enter your exam score."<<endl;
 	cin>>s;
 	if (s>100 || s<0)
 {	cout<<"Invalid exam score, program terminated."<<endl; 
 return 0;
 }
 	cout<<"Your grade is "<<endl;
 	if(s<=100 && s >79)
 	cout<<"\"A\""<<endl;
 	else if(s<89 && s>74)
 	cout<<"\"B+\""<<endl;
 	else if(s<75 && s>69)
 	cout<<"\"B\""<<endl;
 	else if (s<70 && s>64)
 	cout<<"\"C+\""<<endl;
 	else if (s<65 && s>59)
 	cout<<"\"C\""<<endl;
 	else if (s<60 && s> 54)
 	cout<<"\"D\""<<endl;
 	else if (s<55 && s> 49)
 	cout<<"\"E\""<<endl;
 	else if (s<50 )
 	cout<<"\"F\""<<endl;
 return 0;
 }