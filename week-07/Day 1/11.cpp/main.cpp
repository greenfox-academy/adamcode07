#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdexcept>
using namespace std;

int main() {
	srand(time(NULL)); // This initializes the random generator.
	int rnd = 0;
	for (int i=0; i<20; i++) {
		rnd = rand() % 5; // generate a random number in the range [0, 4]
		try {
			switch (rnd) {
				case 0:
					throw 3.2f;
					break;
				case 1:
					throw double(43.56);
					break;
				case 3:
					throw runtime_error("Abrakadabra");
					break;
				case 4:
					throw false;
					break;
				default:
					throw 12;
					break;
			}
		} catch(float x){
            cout << "Dear all our float error value is: " << x << endl;
		}
		catch(double x){
            cout << "Ur double error number is: " << x << endl;
		}
		catch(runtime_error &err){
            cout << err.what() << endl;
        }
        catch(bool){
            cout << false << endl;
        }
        catch(int x){
            cout << x << endl;
        }
// Write catch blocks for each possibly thrown exception.
// In each catch block write out what the exception's type was. And what the exceptions value was.

	}

	return 0;
}
