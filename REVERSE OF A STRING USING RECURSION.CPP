#include <iostream>
using namespace std;
void reverse(char *str, int index, int n)
{
    if(index == n){ // return if we reached at last index or at the end of the string
        return ;
    }
    char temp = str[index];  // storing each character starting from index 0 in function call stack;
    reverse(str, index + 1, n);  //calling recursive function by increasing index everytime
    cout << temp;   //printing each stored character while recurring back
}
int main() {
   char a[] = "cyber security";
   int n = sizeof(a) / sizeof(a[0]);
   reverse(a, 0, n);
    return 0;
}


//OUTPUT
ytiruces rebyc
