#include<iostream>
using namespace std;

class Animal {

private:

	string name;
	string sound;

public:

	void setdetail(string n,string s) {
		name=n;
		sound=s;


	}

	string getname() {
		return name;
	}

	string getsound() {

		return sound;
	}



};

class Dog : public Animal {

public:

	void makesound()
	{
		cout << "dog says bark" << endl;
	}

};

class cat:public Animal {


public:
	void makesound() {

		cout << "cat says meow" << endl;
	}

};

int main() {

	Dog d;
	cat c;

	d.makesound();
	c.makesound();


    return 0;
    
}