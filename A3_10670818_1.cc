 #include<iostream>
 using namespace std;
 int main ( )
 {
 	int s;
 	cout<<"Please enter your exam score."<<endl;
 	cin>>s;
 	while (s>100 || s<0)
 {	cout<<"Invalid exam score, please try again"<<endl; 
 cin>>s;
 }
 	cout<<"Your grade is "<<endl;
 	switch (s/10)

{
case 0:
case 1:
case 2: 
case 3:
cout<<"\F\""<<endl;
break;
case 4:
break;
cout<<"\E\""<<endl;
break;
case 5:  
cout<<"\"D\"" << endl;
break;
case 6:
cout <<"\"C\"" << endl;
break;
case 7:
cout<<"\"B\"" << endl;
break;
case 8:
case 9:
case 10:
cout<<"\"A\"" << endl;

break;
default:
cout<<"Grade checking complete."<< endl;
//Less efficient grading system as compared to the if then else due to the limitations of the "switch case"
} 
return 0;
 }