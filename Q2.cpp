#include<iostream>
using namespace std;

class Person {

private:

	string name;
	int age;
	string address;

public:

	void setdetails(string n,int a,string add)
	{
		name=n;
		age=a;
		address=add;
	}

	string getname()
	{
		return name;
	}

	int getage()
	{
		return age;
	}

	string getaddress()
	{
		return address;
	}

	Person(string n,int a,string add) {

		name=n;
		age=a;
		address=add;
	}
	
	Person(){
	    
	    name="not set";
	    age=0;
	    address="not set";
	    
	}



	void displayDetail() 
	{

		cout << "person name is " << name << endl;
		cout << "person age is " << age << endl;
		cout << "person address is " << address << endl;

	}
};

int main() {
    
    int n;

    cout << "Enter number of persons: ";
    cin >> n;

    string name, address;
    int age;

    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Address: ";
        cin >> address;

        Person p(name, age, address);

        cout << "\n-------Person "<< i+1 << " detail------" << endl;
        p.displayDetail();
        
    }




	return 0;
}