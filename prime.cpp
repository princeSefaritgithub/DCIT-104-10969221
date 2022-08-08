# include<iostream> 
using namespace std;
void PrimeNum(){
	int n;    int sum_Of_PrimeNumbers;   float count_Of_PrimeNumbers;   float avg_Of_PrimeNumbers;
	sum_Of_PrimeNumbers = 0;      count_Of_PrimeNumbers = 0;
	cout<<"Enter positive integer: ";
	cin>>n;
	cout<<"__________________________________________________________________________________"<<endl;
	cout<<"Prime numbers below "<<n<<" are"<<endl;
	cout<<"__________________________________________________________________________________"<<endl;
    for(int i=2;i<n;i++){
    	int output=0;
    	for(int j=2;j<=i/2;j++){
    		if(i%j==0){
    			output=1; 
				break;
	    	}
		}
		if (output==0){
		cout<<i<<endl;
		sum_Of_PrimeNumbers+=i;
		count_Of_PrimeNumbers+=1;
	    }
	}
	avg_Of_PrimeNumbers = sum_Of_PrimeNumbers/count_Of_PrimeNumbers;
	cout<<"The sum of the the printed prime numbers above is "<<sum_Of_PrimeNumbers<<endl;
	cout<<"The count of the prime numbers is "<<count_Of_PrimeNumbers<<endl;
	cout<<"The average the of the sum of the prime numbers above is "<<avg_Of_PrimeNumbers<<endl;
}
int main(){
	PrimeNum();
	return 0;
}
