#include <iostream>
using namespace std;

class Animal {
protected:
	string name;

public:
	Animal(string n) {
		name = n;
	}


	virtual void displayDetails() {
		cout << "Animal Name: " << name << endl;
	}
};


class Dog : public Animal {
public:
	Dog(string n) : Animal(n) {}

	void displayDetails() override {
		cout << "Dog Name is: " << name << endl;
		cout << "Dog says Bark" << endl;
	}
};


class Cat : public Animal {
public:
	Cat(string n) : Animal(n) {}

	void displayDetails() override {
		cout << "Cat Name is: " << name << endl;
		cout << "Cat says Meow" << endl;
	}
};

int main() {


	Dog d("jerry");
	Cat c("Kitty");


	Animal* animals[2];

	animals[0] = &d;
	animals[1] = &c;


	for (int i = 0; i < 2; i++) {
		animals[i]->displayDetails();
		cout << endl;
	}

	return 0;
}