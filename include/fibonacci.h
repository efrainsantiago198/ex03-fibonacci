/**
* CS V15 Data Structures and Algorithms
* CRN: 70342
* Assignment: ex03-fibonacci
*
* Statement of code ownership: I hereby state that I have written all of this
* code and I have not copied this code from any other person or source.
*
* @author Efrain Santiago
*
*/

#include <iostream>
using std::cout;
using std::endl;

namespace edu { namespace vcccd { namespace vc { namespace csv15 { 
	uint64_t fibonacci(uint64_t number) {
		if (number == 0 || number == 1) return number;
		uint64_t fib0 = 0;
		uint64_t fib1 = 1;
		for (size_t i = 2; i <= number; i++) {
			uint64_t next = fib0 + fib1;
			fib0 = fib1;
			fib1 = next;
		}
		return fib1;
				}
			}
		}
	}
}