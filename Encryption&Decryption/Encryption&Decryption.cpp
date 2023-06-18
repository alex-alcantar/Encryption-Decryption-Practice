//Project for fun and practice
#include <iostream> 
#include <array>

char b; //input key to decryption

//this will do the math for the encryption, so we can later call the function for the encryption in int main()
void Encryption(int arr[]) {
	for (int a = 0; a < 7; a++) {
		arr[a] = (arr[a] + 3) % 10;
	}

} 
//this will do the math for the decryption, so we can later call the function for the decryption in int main()
void Decryption(int arr[]) {
	for (int a = 0; a < 7; a++) {
		arr[a] = (arr[a] + 3) % 10; // +3 % 10 is the same thing as subtracting seven
	}

}

int main() {
	int number[7];
	std::cout << "Enter a 7-digit number: \n"; //when you are inputing your 7-digit number, you must press enter after entering each singular number
	for (int a = 0; a < 7; a++)
	{
		std::cin >> number[a]; //input number
	}


	Encryption(number); 

	std::cout << "\nEncrypted number: ";

	for (int a = 0; a < 7; a++)
	{
		std::cout << number[a]; //will output encrypted number
	}

	Decryption(number);
	std::cout << "\nPress B to Decrpyt Number \n"; 
	if (std::cin >> b) {
		std::cout << "\nDecrypted number: ";
		for (int a = 0; a < 7; a++)
		{
			std::cout << number[a]; //will decrypt that same number that has already been encrypted
		}
	}
	return 0;
}
