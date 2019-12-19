#include<iostream>
using namespace std;
int main()
{
	int c=1, num, frstmax=0, secondmax=0,thirdmax=0;
	while(c<=10){
		cout << "Plz enter value number "<< c<< "\n";
		cin >> num;
		if (frstmax< num){
			thirdmax=secondmax;
			secondmax=frstmax;
			frstmax=num ;
		}
		else if(secondmax<num){
			thirdmax=secondmax;
			secondmax=num;
		}
		else if (thirdmax< num){
		thirdmax=num;
}
        c++;}
cout<<" The first max number "<< frstmax<< "\n";
cout<<" The 2nd max number "<< secondmax<< "\n";
cout<<" The 3rd max number "<< thirdmax<< "\n";
		
// 10, 11, 16, 7, 20, 17, 19, 21
		
	
}
