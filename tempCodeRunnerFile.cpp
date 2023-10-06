#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;


const ll mod  = 1e9 + 7;
const ll maxn = 1e5 + 1;
const ll inf  = 5e18 ;
const ll minf = -inf ;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define mid(s,e) (s+(e-s)/2)
#define loop(i,a,b) for(int i=(a);i<(b);i++)
#define looparr(arr,a,b) for(int i=(a);i<(b);i++){ cout<<(arr[i])<<" ";} cout<<endl;
#define check cout<<"Print"<<endl;
#define endl "\n"
#define en cout<<endl;
#define dl cerr<<endl;
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

class Aman { //Aman is the name give to the class
//state or properties
private://for the security purpose we set some members to private
	int weight;
public://all data has been marked public
	int age;//age is the property of Aman
	string name;//same as name is the property of Aman

	//DEFAULT CONSTRUCTOR- it is made for the initilisation of the object
	Aman() {
		this->weight = 10;
		this->age = 10;
		this->name = 10;
		cout << "Constructor called" << endl;

	};
	//NEXT CONSTRUCTOR-(PARAMETERISED CONSTRUCTOR)
	Aman(int age) {
		this->age = age ;
		cout << "Parameterised constructor called" << endl;
	}

	Aman(int age, int weight) {
		this->age = age ;
		cout << "Parameterised constructor 2 called" << endl;

	}
	Aman(int age, int weight, string name) {
		this-> age = age;
		this -> weight = weight;
		this ->name = name;
		cout << "Parameterised constructor 3 called" << endl;
	}

	//behaviour or functions
	void eat() {
		cout << "Eating" << endl;

	}


	void sleep() {
		cout << "Sleeping" << endl;

	}

	//when we need to use the private member we use the function name called **(getter and setter)
	int getWeight() { //this is the function which is use to fetch the weight
		return weight;
	}

	void setWeight(int w/*weight*/) {	//(THIS)-> keyword->uses as pointer to (current object)
		//this is the function which is used to set the weight
		weight = w;
		//this->weight=weight;
		//left weight is pointing the private (int weight)
		//&the right weight is pointing the weight name varible inside the setWeight function

	}
};

int main()
{
	fastio()
#ifndef ONLINE_JUDGE
	freopen("error.txt", "w", stderr);
#endif

// 	// cout<<"size->"<<sizeof(Aman)<<endl; size of empty class is always =1


// 	//object creation


// 	//static based allocations->

// 	Aman raj;//Aman-type and raj-object
// 	//Note- if i want to access the property of any object then
// 	// use the dot(.) operator
// 	raj.age = 20;
// 	raj.name = "fucking";
// 	cout << "age of Aman-" << raj.age << endl;
// 	cout << "name of Aman-" << raj.name << endl;

// //Note->>//cout<< "weight of Aman-" <<raj.weight<<endl;-> since the wright is private modifier it cannot be accesed outside the class;


// 	// age of Aman-20
// 	// name of Aman-fucking
// 	raj.eat();//Eating
// 	raj.sleep();//Sleeping


// 	//now for accesssing the weight //we set the value of weight ->>**By using the function setWeight
// 	raj.setWeight(40);//calling the set weight functions from class
// 	//now for printing the weight of raj we call the funcition getWeight()
// 	cout<<"Weight= "<<raj.getWeight()<<endl;
// 	//output->Weight =40

//DYNAMIC ALLOCATIONS->creating dynamic memory allocations
// 	Aman* priyansh = new Aman;//-> this object created -> iske liye constructor call kiya h
// 	//bina constructor ko call bina wo aa jata h
// 	(*priyansh).age = 140; //actual object k upr age
// 	(*priyansh).name = "Hrithik";


// //the alternate way is to use the arrow to acces the dynamic memory
// 	//arrow(->) operator
// 	priyansh->age = 17;
// 	priyansh->name = "sure";

// 	priyansh->eat();//we cannot use dot operator because it is dynamic allocations
// 	priyansh->sleep();


//Note//*******constructor call hoga dono hi case m ya static way ya dynamic way
	Aman a(10);
	Aman* b = new Aman(100); //-Aman is a data type
	//when we will pass the value of the age in new Aman(100)& same as in static  like this then the parameterised constructor will be called
	//searching any single parameter of int in the parameterised constructor


	Aman* c = new Aman(10, 29);
	//aisa constructor dhundo jisme 2 int pass ho rhe
	Aman* d = new Aman(10, 29,"Babbar");
	//aisa constructor dhundo jisme 2 int and 1 string pass ho rhe







	return 0;
}