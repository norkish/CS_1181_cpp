#include <iostream>

using namespace std;

class Person {
	int SSN;
	string firstName, middleName, surName;

  public:
	Person(int ssn, string fName, string mName, string sName);

	void setFirstName(string fName);
};


int main() {
    Person john(000000000, "John", "", "Doe");

    john.setFirstName("Meta World Peace");


    return 0;
}
