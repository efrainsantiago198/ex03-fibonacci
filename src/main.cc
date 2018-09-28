/**
* CS V15 Data Structures and Algorithms
* CRN: 70342
* Assignment: ex03-fibonacci
*
* Statement of code ownership: I hereby state that I have written all of this
* code and I have not copied this code from any other person or source.
*
* @author Efrain Santiago
*got this idea from Alden Smith
*/
#include <iostream>
#include "fibonacci.h"
using std::cout;
using std::endl;
using edu::vcccd::vc::csv15::fibonacci;
int main(int agrc, char *argv[]) {
	int count = 0;
	cout << "How far are you willing to go?" << endl;
	std::cin >> count;
	if (count >= 50)
	{
		cout << "Not allowed" << endl;
	}
	cout << "Doing Fibonacci(" << count << ")" << endl;
	auto fibNumb = fibonacci(count);
	cout << "Fibonacci(" << count << ")=" << fibNumb << endl;
}