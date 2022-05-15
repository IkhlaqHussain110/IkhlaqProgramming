#include<iostream>
using namespace std;
int main() {
	string s;
	string s1;
	int flag;
	cout<<"Enter the string: ";
	cin>>s;
	s1=s;
	for(int i=s.length(); i>=0; i--) {
		for(int j=0; j<s1.length(); j++) {
			if(s1[j]==s[i]) {
				flag=1;
			} else {
				flag=0;
			}
		}
	}
	if(flag==1) {
		cout<<"\nString is palindrome";
	} else
		cout<<"\nString is not palindrome";
	return 0;
}

