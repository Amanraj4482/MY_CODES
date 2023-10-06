// // programming technique that everything evloves around the object
// // object is entity that 1. state or properties  2. behaviour


// // the acutal entity is called the object
// // object is also called the instance of the clss
// // and the blueprint is called the class

// // the size of the empty class is -> 1 byte
// // pading and gready alignment


// #include<bits/stdc++.h>
// using namespace std;

// // for the existance of the track of the class i have to give the memory to the class as the 1 byte

// class Aman {
// //Aman is the name give to the class
// //state or properties
// private:
// //for the security purpose we set some members to private
// 	int weight;
// public:
// //all data has been marked public
// 	int age;//age is the property of Aman
// 	string name;//same as name is the property of Aman

// 	//CONSTRUCTOR
// 	Aman() {
// 		cout << "Constructor called" << endl;

// 	};

// 	//behaviour or functions
// 	void eat() {
// 		cout << "Eating" << endl;

// 	}


// 	void sleep() {
// 		cout << "Sleeping" << endl;

// 	}

// 	//when we need to use the private member we use the function name called **(getter and setter)
// 	int getWeight() { //this is the function which is use to fetch the weight
// 		return weight;
// 	}

// 	void setWeight(int w/*weight*/) {	//(THIS)-> keyword->uses as pointer to (current object)
// 		//this is the function which is used to set the weight
// 		weight = w;
// 		//this->weight=weight;
// 		//left weight is pointing the private (int weight)
// 		//&the right weight is pointing the weight name varible inside the setWeight function

// 	}
// };
// int main() {
// // 	// cout<<"size->"<<sizeof(Aman)<<endl; size of empty class is always => 1

// // 	//object creation
// // 	//static based allocations->

// // 	Aman raj;//Aman-type and raj-object
// // 	//Note- if i want to access the property of any object then
// // 	// use the dot(.) operator

// // 	raj.age = 20;
// // 	raj.name = "fucking";
// // 	cout << "age of Aman-" << raj.age << endl;
// // 	cout << "name of Aman-" << raj.name << endl;

// // //Note->>//cout<< "weight of Aman-" <<raj.weight<<endl;-> since the wright is private modifier it cannot be accesed outside the class;


// // 	// age of Aman-20
// // 	// name of Aman-fucking
// // 	raj.eat();//Eating
// // 	raj.sleep();//Sleeping


// // 	//now for accesssing the weight //we set the value of weight ->>**By using the function setWeight
// // 	raj.setWeight(40);//calling the set weight functions from class
// // 	//now for printing the weight of raj we call the funcition getWeight()
// // 	cout<<"Weight= "<<raj.getWeight()<<endl;
// // 	//output->Weight =40

// //DYNAMIC ALLOCATIONS->creating dynamic memory allocations
// // 	Aman* priyansh = new Aman;//-> this object created -> iske liye constructor call kiya h
// // 	//bina constructor ko call bina wo aa jata h
// // 	(*priyansh).age = 140; //actual object k upr age
// // 	(*priyansh).name = "Hrithik";


// // //the alternate way is to use the arrow to acces the dynamic memory
// // 	//arrow(->) operator
// // 	priyansh->age = 17;
// // 	priyansh->name = "sure";

// // 	priyansh->eat();//we cannot use dot operator because it is dynamic allocations
// // 	priyansh->sleep();


// //Note//*******constructor call hoga dono hi case m ya static way ya dynamic way
// 	Aman a();
// 	Aman* b = new Aman(); //-Aman is a data type

// 	return 0;
// }





//-----------------------------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;


class Animal {

private:
	int weight;

	//state and property
public:
	int age;
	string name;


	// default constructor
	// when we create the constructor
	// object initilization->>
	// constructor is called in static or dynamic memory allocation
	Animal() {
		// void printage(int age, string name) {
		// 	this.age = age;
		// 	this.name = name;
		// }
		cout << "Constructor called" << endl;
		this->weight = 0;
		this->age = 0;
		this->name = "";
	}

	// parameterised constructor
	// Animal ( int age) {
	// 	this->age = age;
	// 	cout << "parameterised constructor called ->" << this->age << endl;

	// }
	// Animal ( int age, int weight) {
	// 	this->age = age;
	// 	this->weight = weight;
	// 	cout << "parameterised constructor 2 called ->" << this->age << endl;

	// }

	// // copy constructor
	// Animal (Animal & obj) {  // pass by value
	// 	// infinte call so pass it by refrence
	// 	this->age = obj.age;
	// 	this->weight = obj.weight;
	// 	this->name = obj.name;
	// 	cout << "I am inside the copy constructor" << endl;

	// }
	// behaviour / methods / functions
	void eat() {
		cout << "eating" << endl;
	}

	void sleep() {
		cout << "sleeping" << endl;
	}


	// using the getter and setter method to access the private member
	int getWeight() {
		return weight;
	}

	void setWeight(int w) {
		// this is pointer to current object
		this->weight = w;
	}


	void print() {
		cout << this->age << " " << this->weight << " " << this->name << endl;
	}

	// creaing the destructror

	~Animal() {
		cout << "I am inside the destrucotor" << endl;
	}
}; // this is neccessary in the c++

int main() {
	// creation of object

	// 1. static allocation
	// Animal dog;

	// dog.age = 12;
	// dog.name = "Tomy";
	// cout << "Age of dog " << dog.age << endl;
	// cout << "Name of dog " << dog.name << endl;

	// // accessig the private marked member :

	// dog.setWeight(101);
	// cout << dog.getWeight() << endl;

	// // cout << dog.weight << endl;  //cannot be accessed
	// // instead we use the getter and setter method

	// // calling the method
	// dog.eat();
	// dog.sleep();



	// 2. dynamic allocation
	//heap memory :
	// Animal *bird = new Animal(); // adress of the bird inside the bird
	// // accessing by the pointer and the arrow
	// // (*bird).age = 23;
	// // (*bird).name = "kukku";
	// // cout << (*bird).age << endl;

	// bird->age = 234;
	// bird->name = "rohini";
	// cout << bird->name << endl;

	// // method calling

	// bird->sleep();
	// bird->eat();

	// calling the parameterised constructor
	// Animal* e = new Animal(34, 32);
// 	Animal a(23);

// 	// copying the constructor
// 	Animal b = a; //static object
// 	Animal c(b);
// // another way to create the object and copy the objects
// 	Animal animal (c);

	// Animal d;

	// d.age = 23;
	// d.setWeight(234);
	// d.name = "babbaar";


	// Animal f = d;

	// d.print();
	// f.print();

	// d.name[0] = 'G';
	// d.print();

	cout << "A obj creating" << endl;
	Animal a ;
	a.age = 3;

	cout << "B obj creating" << endl;
	Animal * b = new Animal();
	b->age = 23;

	// manual deletion of the object
	// for the dynamic b object
	delete b;
	return 0;
}


// access modifier
// public->state and behaviour can asseccesd with and outside the class
// private->it can only be assecces within the class~ by default all the memebers are private marked
// proctected->

// shallow and deep copy ->