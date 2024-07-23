#include <iostream>
using namespace std;
int main()
{
	int num, reverse = 0, rem, temp;
	cin >> num;
	cout << "Entered Number: " << num << endl;
	temp = num;
	while (temp != 0){
		rem = temp % 10;
		reverse = reverse * 10 + rem;
		temp /= 10;
	}
	if (num == reverse){
		cout << num << " is Palindrome";
	}
	else{
		cout << num << " is Not a Palindrome";
	}
	return 0;
}

/*OUTPUT:
77 //INPUT
77 is Palindrome
34
34 is Not a Palindrome*/
