// 4 pillars of the oops
// 1. Encapsulation 2. Inheritance 3. Polymorphism 4. Abstraction

// Encapsulation  => (data hiding)
// creation of class ->capsualtion
// when all the data members of the class is marked private then perfect encapsulation..

// this is at the implementation level
// where as abstraction is at the design level


// **********(data hiding )**********

// advantage -> read only / security / reuse code

// #include<bits/stdc++.h>
// using namespace std;

// class Animal {
// private :
// 	int age;
// 	int weight;
// public:
// 	void eat() {
// 		cout << "Eating " << endl;
// 	}
// 	int getAge() {
// 		return this->age;
// 	}
// 	void setAge(int age) {
// 		this->age = age;
// 	}
// };
// int main() {

// 	return 0;
// }



// inheritance ->

// super class(parent class)(base class) -> subclass child /derived class
// #include<bits/stdc++.h>
// using namespace std;

// class Animal {
// public :
// 	int age;
// 	int weight;
// // public:
// // 	void eat() {
// // 		cout << "Eating " << endl;
// // 	}
// // 	int getAge() {
// // 		return this->age;
// // 	}
// // 	void setAge(int age) {
// // 		this->age = age;
// // 	}

// };
// class dog : private Animal {
// public:
// 	void print() {
// 		cout << this->age;
// 	}

// };
// int main() {
// 	dog d1;
// 	cout << d1.age;
// 	d1.print();
// 	return 0;
// }

// another syntax to do  the inheritance
// #include<bits/stdc++.h>
// using namespace std;

// class Parent {
// public:
// 	int parentData;

// 	// Parent(int pData) : parentData(pData) {}
// 	Parent (int pData) {
// 		parentData = pData;
// 	}
// };

// class Child : public Parent {
// public:
// 	int childData;

// 	// Child(int pData, int cData) : Parent(pData), childData(cData) {}
// 	Child(int pData, int cData) : Parent (pData) {
// 		childData = cData;
// 	}
// };

// int main() {
// 	Child childObj(10, 20);

// 	// Accessing data members
// 	cout << "Parent Data: " << childObj.parentData << endl;
// 	cout << "Child Data: " << childObj.childData << endl;


// 	return 0;
// }




// another example for the inheritance


// #include<bits/stdc++.h>
// using namespace std;

// class Fruit {
// public:
// 	string name;
// };

// class Mango : public Fruit {
// public:
// 	int weight;

// };

// class Alphanso : public Mango {
// public :
// 	int sugarlevel;
// };
// int main() {
// 	Alphanso a;
// 	cout << a.name << endl;
// 	cout << a.weight << endl;
// 	cout << a.sugarlevel << endl;
// 	return 0;
// }


// alphanso is a mango -> mango is a fruit

// multiple inheritance

/*#include<bits/stdc++.h>
using namespace std;

class A {
public:
	int physics;
};

class B {
public:
	int chemistry;
};

class C : public A , public B {
public:
	int maths;
};
int main() {
	C obj;
	cout << obj.physics << " " << obj.chemistry << endl;
	return 0;
}*/



// diamond problem
// #include<bits/stdc++.h>
// using namespace std;

// class A {
// public:
// 	int chemistry;
// 	A() {
// 		chemistry = 23;
// 	}
// };

// class B {
// public:
// 	int chemistry;
// 	B() {
// 		chemistry = 333;
// 	}
// };

// class C : public A , public B {
// public:
// 	int maths;
// };
// int main() {
// 	C obj;
// 	cout << obj.B::chemistry << " " << obj.A::chemistry;
// 	return 0;
// }



// heirarhical

//  1 parent 2 child (down to up )


// #include<bits/stdc++.h>
// using namespace std;

// class Car {
// public:
// 	string name;
// 	int weight;
// 	int age;


// 	void speedUp() {
// 		cout << "Speeding up ";
// 	}

// 	void breakMaro() {
// 		cout << "break maar di ";
// 	}
// };

// class Scorpio : public Car {
// 	// scorpio is-a car

// };

// class fortuner: public  Car {


// };

// int main() {
// 	Scorpio Aman;
// 	Aman.speedUp();

// 	fortuner f;
// 	f.speedUp();

// 	return 0;
// }



// Polymorphism:

// existing in the multiple form

// 1.compile time
// 2. run time


// 1.compile time -> function overloading , operator overloading


// #include<bits/stdc++.h>
// using namespace std;

// class Maths {
// public :
// // sum function is existing in mutliple forms
// 	int sum(int a, int b) {
// 		return a + b;
// 	}
// 	int sum(int a , int b , int c ) {
// 		return a + b + c;
// 	}
// };
// int main() {

// 	Maths obj;
// 	cout << obj.sum(2, 3) << endl;
// 	cout << obj.sum(2, 3, 4) << endl;
// 	return 0;
// }



// overloading of the operator
/*#include<bits/stdc++.h>
using namespace std;

class P {
public:
	int val;

	void operator+(P&obj2) {
		int value1 = this->val;
		int value2 = obj2.val;
		cout << (value2 - value1) << endl;
	}
};
int main() {
	P obj1, obj2;
	obj1.val = 7;
	obj1.val = 2;

	// this should print the difference betrween them
	// defining the funcation of the +
	obj1 + obj2;
	//obj 1-> current obj
	// obj2 -> input paramenter
	return 0;
}

*/