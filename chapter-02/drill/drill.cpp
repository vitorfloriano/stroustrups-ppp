#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the name of the person you want to write to: ";
	string first_name;
	cin >> first_name;
	cout << "Dear " << first_name << ",\n"
	     << "How are you? I am fine. I miss you.\n"
	     << "I'm writing to let you know that everything will be alright.\n";
	cout << "Enter the name of the friend you want to ask about: ";
	string friend_name;
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n";
	cout << "Write your age:\n";
	int recipient_age;
	cin >> recipient_age;
//	if(recipient_age > 110)
//		simple_error("you're kidding!") 
	cout << "I hear you just had a birthday and you are " << recipient_age << " years old.\n";
	if ( recipient_age < 12 )
		cout << "Next year you will be " << recipient_age++ << ".\n";
	if ( recipient_age == 17 )
		cout << "Next year you will be able to vote.\n";
	if ( recipient_age > 70 )
		cout << "Are you retired?\n";
	cout << "Yours sincerely,\n\n" << "Vitor\n";

	return 0;
}
