#include<iostream>
using namespace std;
int main(){
    int gallons;
    float M_A,MPG;
    float average=0;
    int count=0;
    
    while(M_A!=-1){
    	count++;
    	cout<<"Enter Distance in Miles(-1 to quite) :";
    	cin>>M_A;
    	cout<<"Enter Total Gallons :";
    	cin>>gallons;
    	MPG=M_A/gallons;
    	average=MPG/count;
    	cout<<"Mileages per Gallon for this Trip :"<<MPG<<endl;
    	cout<<"Total mileages per Gallon :"<<average<<endl;
    	cout<<"Enter Distance in Miles and -1 to quite: ";
    	cin>>M_A;
	}
}

