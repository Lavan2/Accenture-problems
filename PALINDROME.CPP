#include<iostream>
using namespace std;
int main(){
	int num,reverse=0,rem,temp;
	cin>>num;
	cout<<num;
	temp=num;
	while(temp !=0){
	rem = temp % 10;
	reverse = reverse * 10 + rem;
	temp /= 10;
}
	if(temp == 0){
		cout<<num<<" is Palindrome";
	}else{
		cout<<num<<"is Not a Palindrome";
	}
	return 0;
}

/*OUTPUT:
77
77 is Palindrome
34
34 is Not a Palindrome*/
