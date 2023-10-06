// runtime polymorphism
// edit the function in child class
// A man can be husband , father , employee .

// method overriding ->>runtime

#include<bits/stdc++.h>
using namespace std;

class Animal {
public:
// virtual void speak(){  // if virtual keyword applied then the type of obj will be called a
	void speak() {
		cout << "Speaking " << endl;
	}
	Animal() {
		cout << " cons Animal" << endl;
	}
};
// inheritance
class Dog : public Animal {
public:
	// overiding the method
	void speak () {
		cout << "Barking" << endl;
	}
	Dog() {
		cout << " cons Dog" << endl;
	}
};

int main() {

// Animal a;
// a.speak(); // speaking
// Dog doggy ;
// doggy.speak(); //Barking

// Animal* a = new Animal();
// a->speak(); //speaking

// Dog* a = new Dog();
// a->speak(); //Barking


// parent class and obj is dog type
// upcasting
	Animal* b = new Dog();
	b->speak(); // Speaking

// downcasting
	Dog* c = (Dog*)new Animal();
	c->speak(); //Barking


	// Animal * a = new Animal(); // cons Animal
	// cout << endl;
// Animal * b = new Dog();
// obj is of Dog which is refered by the Animal pointer
// cout << endl;
	// Dog * d = (Dog*) new Animal();
	// cout << endl;
// Dog * c = new Dog();
// cons Animal

// cons Animal
// cons Dog

// cons Animal

// cons Animal
// cons Dog


	return 0;
}



//_______________ Abstraction___________
// implementation hiding
// Encapsulation(data hiding) is a subset of Abstraction
// encap can be acheived by the private access modifier and 100% can be acheived by the setter and getter method

// essential info show ..
// use of key to start the car ..... how the engine is made no need to know


// encap -> data wrpped in the parent entity
// abstraction -> generalistaion / having the sort pointer without knowing what type of sorting u wanted to selct

// putting books in the bag -> encapsulation
// dont know what are the book -> abstraction


// code to create the 2d array by the heap

// int ** arr = new int * [row]
// for (int i = 0; i < row; ++i)
// {
// 	arr[i] = new int [col]

// }


// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	int row = 5;
// 	int col = 3;
// 	// heap memory
// 	int ** arr = new int * [5];
// 	for (int i = 0; i < row; ++i)
// 	{
// 		arr[i] = new int[col];
// 	}
// // printing
// 	for (int i = 0; i < row; ++i)
// 	{
// 		for (int j = 0; j < col; ++j)
// 		{
// 			cout << arr[i][j] << " ";
// 		}
// 		cout << endl;
// // deallocating
// 		for (int i = 0; i < row; ++i)
// 		{
// 			delete [] arr[i];
// 		}
// 		delete[] arr;
// 	} for (int i = 0; i < row; ++i)
// 	{
// 		for (int j = 0; j < col; ++j)
// 		{
// 			cout << arr[i][j] << " ";
// 		}
// 		cout << endl;
// 	}
// 	return 0;
// }



