#include<iostream>
using namespace std;

class Book {
public:
	string title;
	string author;
	int publishedYear;

};

int main() {

	Book obj[5];

	obj[0].title="The Girl on the Train";
	obj[0].author="Paula Hawkins";
	obj[0].publishedYear=2015;

	obj[1].title="Train to Pakistan";
	obj[1].author="Khushwant Singh";
	obj[1].publishedYear=1956;

	obj[2].title="Godan ";
	obj[2].author="Munshi Premchand";
	obj[2].publishedYear=1936;

	obj[3].title="The Old Man and the Sea ";
	obj[3].author="Ernest Hemingway";
	obj[3].publishedYear=1952;

	obj[4].title="A Passage to India  ";
	obj[4].author="E.M. Forster";
	obj[4].publishedYear=1924;


	for(int j=0; j<5; j++)
	{

		cout<< "book details " << j+1 << endl;
		cout << "title: "<< obj[j].title<< endl;
		cout << "author: "<< obj[j].author<< endl;
		cout << "publishedYear: "<< obj[j].publishedYear<< endl;
	}


	return 0;
}