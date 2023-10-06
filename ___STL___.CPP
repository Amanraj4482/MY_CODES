#include<bits/stdc++.h>
using namespace std;

int main() {
//===========================================VECTOR=================================================
	// taking input of 1d vector

	vector<int> v;
	for (int t; cin >> t;) { v.push_back(t); }


	// taking input of the 2d vector
	int n, m;
	cin >> n >> m;
	vector<vector<int>> v(n, vector<int>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> v[i][j];
		}
	}


	vector<int> v;

	// 1. Insertion Functions
	v.push_back(10);         // Add element at the end
	v.emplace_back(20);      // Construct element at the end
	v.insert(v.begin() + 1, 30); // Insert element at a specific position

	// 2. Erase Functions
	v.pop_back();           // Remove last element
	v.erase(v.begin() + 1);    // Remove element at a specific position
	v.erase(v.begin(), v.end()); // Remove a range of elements

	// 3. Size and Capacity
	cout << "Size: " << v.size() << endl;          // Number of elements in the vector
	cout << "Capacity: " << v.capacity() << endl;  // Current memory allocated for the vector
	cout << "Is Empty? " << (v.empty() ? "Yes" : "No") << endl; // Check if vector is empty

	// 4. Element Access
	v.push_back(40);
	cout << "Front: " << v.front() << endl; // Access the first element
	cout << "Back: " << v.back() << endl;   // Access the last element
	cout << "At index 1: " << v.at(1) << endl; // Access element at a specific index

	// 5. Resizing and Clearing
	v.resize(5);           // Resize the vector to a specific size
	v.resize(8, 50);       // Resize the vector and fill with a specific value
	v.clear();             // Remove all elements, size becomes 0

	// 6. Capacity Management
	v.reserve(100);        // Allocate memory for at least 100 elements
	v.shrink_to_fit();     // Reduce the capacity to fit the number of elements

	// 7. Iterators
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	cout << "Vector elements: ";
	for (auto it = v.begin(); it != v.end(); ++it) {
		cout << *it << " "; // Output: 10 20 30
	}
	cout << endl;

	// 8. Swap
	vector<int> anotherVector = {100, 200};
	v.swap(anotherVector); // Swap contents of two vectors
	void swap (t & x, t & y)
	{
		t temp = x;
		x = y;
		y = temp;
		return;
	}

	// assuming your vector is called v
	iter_swap(v.begin() + position, v.begin() + next_position);
	// position, next_position are the indices of the elements you want to swap

	// 9. Comparison
	vector<int> vec1 = {1, 2, 3};
	vector<int> vec2 = {1, 2, 3};
	vector<int> vec3 = {3, 2, 1};
	cout << "vec1 == vec2: " << (vec1 == vec2 ? "true" : "false") << endl; // Output: true
	cout << "vec1 == vec3: " << (vec1 == vec3 ? "true" : "false") << endl; // Output: false


	// Sorting
	sort(v.begin(), v.end());  // Ascending order
	sort(v.rbegin(), v.rend()); // Descending order

	// Finding Elements
	auto it = find(v.begin(), v.end(), 5);
	if (it != v.end()) {
		cout << "Found at index: " << distance(v.begin(), it) << endl;
	}

	// Sum and Average
	int sum = accumulate(v.begin(), v.end(), 0);
	double average = static_cast<double>(sum) / v.size();

	// Removing Duplicates
	v.erase(unique(v.begin(), v.end()), v.end());

	//find and erase the element from the vector
	v.erase(remove(v.begin(), v.end(), 0), v.end());

	// Reversing
	reverse(v.begin(), v.end());

	// Filtering
	vector<int> evenNumbers;
	copy_if(v.begin(), v.end(), back_inserter(evenNumbers), [](int num) {
		return num % 2 == 0;
	});

	// Joining Elements
	string joinedNums = accumulate(next(v.begin()), v.end(),
	to_string(v[0]), [](const string & a, int b) {
		return a + ", " + to_string(b);
	});


	// Min and Max
	int minValue = *min_element(v.begin(), v.end());
	int maxValue = *max_element(v.begin(), v.end());


	// Shuffling
	random_shuffle(v.begin(), v.end());

	// Binary Search
	bool found = binary_search(v.begin(), v.end(), 3);


	// Removing Elements by Value
	int valueToRemove = 42;
	v.erase(/*remove(v.begin(), v.end(), valueToRemove)*/, v.end());






// ========================================STRING==============================================================


	// Declaration and Initialization
	string str = "Hello";

	// Accessing and Modifying Elements
	char ch = str[0];
	str[0] = 'H';

	// Concatenation
	str += " World";
	str.append(" World");

	// Length and Capacity
	int length = str.length();
	int capacity = str.capacity();

	// Substring
	string substr = str.substr(0, 5);

	// Find and Replace
	size_t pos = str.find("Hello");
	str.replace(pos, 5, "Hi");

	// Comparisons
	bool isEqual = (str == "Hello World");
	bool isLess = ("Apple" < "Banana");

	// Conversion to C-style String
	const char* cStr = str.c_str();

	// Input and Output
	cout << "Enter a string: ";
	cin >> str;
	cout << "You entered: " << str << endl;

	// String Streams
	stringstream ss;
	ss << "Hello " << 42;
	string result = ss.str();

	// Erasing and Clearing
	str.erase(0, 5);
	str.clear();

	// Iterating Through Characters
	for (char ch : str) {
		// Iterate through each character in the string
	}

	// Removing Duplicates
	sort(s.begin(), s.end());
	s.erase(unique(s.begin(), s.end()), s.end());


	// Removing Whitespace
	string input;
	getline(cin, input);             // Read a line including spaces
	input.erase(remove(input.begin(), input.end(), ' '), input.end()); // Remove spaces

	// Transforming Case
	string lowercaseStr = "hello world";
	transform(lowercaseStr.begin(), lowercaseStr.end(), lowercaseStr.begin(), ::toupper); // Uppercase conversion

	// Reversing a String
	string original = "abcdef";
	string reversed = original;
	reverse(reversed.begin(), reversed.end());

	// Checking for Prefix or Suffix
	string text = "Hello, World!";
	bool hasPrefix = text.rfind("Hello", 0) == 0; // Check if "Hello" is at the beginning
	bool hasSuffix = text.find("World", text.size() - 5) != string::npos; // Check if "World" is at the end

	// Splitting a String
	string sentence = "This is a sample sentence.";
	istringstream iss(sentence);
	vector<string> words{istream_iterator<string>{iss}, istream_iterator<string>{}};

	// Joining Strings
	vector<string> parts = {"Hello", "there", "world!"};
	string joined = accumulate(parts.begin(), parts.end(), string(""),
	[](const string & a, const string & b) {
		return a.empty() ? b : a + ' ' + b;
	});


	// Repeating a String
	string repeated = string(3, '-'); // Produces "---"


	// Padding
	string padded = "Hello";
	padded.insert(0, 5 - padded.size(), ' '); // Pads the string with spaces to have a length of 5

	// Case-Insensitive Comparison
	string lowercaseStr = "hello";
	string uppercaseStr = "HELLO";
	bool isEqualIgnoreCase = equal(lowercaseStr.begin(), lowercaseStr.end(),
	uppercaseStr.begin(), [](char a, char b) {
		return tolower(a) == tolower(b);
	});


	// Converting to Lowercase or Uppercase
	string mixedCase = "MixEd CaSe";
	transform(mixedCase.begin(), mixedCase.end(), mixedCase.begin(), ::tolower); // Convert to lowercase
	transform(mixedCase.begin(), mixedCase.end(), mixedCase.begin(), ::toupper); // Convert to uppercase




//===========================================PAIR=================================================

	// 1. Creating a pair
	pair<int, double> myPair(10, 3.14);
	pair<string, int> anotherPair = make_pair("Alice", 25);

	// 2. Accessing elements
	cout << "First element of myPair: " << myPair.first << endl;   // Output: 10
	cout << "Second element of myPair: " << myPair.second << endl; // Output: 3.14

	// 3. Comparing pairs
	pair<int, int> pair1(1, 2);
	pair<int, int> pair2(1, 3);
	cout << "pair1 == pair2: " << (pair1 == pair2 ? "true" : "false") << endl; // Output: false

	// 4. Swapping pairs
	pair<int, int> pair3 = pair1;
	pair1.swap(pair2);
	cout << "pair1: " << pair1.first << ", " << pair1.second << endl; // Output: 1, 3
	cout << "pair3: " << pair3.first << ", " << pair3.second << endl; // Output: 1, 2

	// 5. Make a pair from two elements
	int x = 5;
	double y = 3.5;
	auto myPair2 = make_pair(x, y);
	cout << "myPair2: " << myPair2.first << ", " << myPair2.second << endl; // Output: 5, 3.5

	// 6. Accessing elements using tie
	pair<int, string> person = make_pair(30, "John");
	int age;
	string name;
	tie(age, name) = person;
	cout << "Age: " << age << ", Name: " << name << endl; // Output: Age: 30, Name: John

	// 7. Initializing pair elements with default values
	pair<int, double> pairWithDefaultValues = pair<int, double>();

	// 8. Swapping pair elements with another pair
	pairWithDefaultValues.swap(myPair2);






//===========================================MAP=================================================
	map<string, int> myMap;
// 1. Insertion Functions
	myMap.insert(make_pair("one", 1)); // Insert key-value pair
	myMap.emplace("two", 2); // Construct in-place and insert
	myMap["three"] = 3; // Using the subscript operator

	// 2. Erase Functions
	myMap.erase("two"); // Remove element with the specified key
	myMap.erase(myMap.begin()); // Remove element pointed by iterator
	myMap.erase(myMap.begin(), myMap.find("three")); // Remove elements in a range

	// 3. Size and Capacity
	cout << "Size: " << myMap.size() << endl; // Number of elements in the map
	cout << "Is Empty? " << (myMap.empty() ? "Yes" : "No") << endl; // Check if map is empty

	// 4. Element Access
	cout << "Value for key 'one': " << myMap["one"] << endl; // Access value using key
	auto it = myMap.find("two"); // Find element and get iterator to it
	if (it != myMap.end()) {
		cout << "Element found: " << it->second << endl;
	} else {
		cout << "Element not found." << endl;
	}

	// 5. Clear and Swap
	myMap.clear(); // Remove all elements, size becomes 0
	myMap.swap(anotherMap); // Swap contents of two maps

	// 6. Iterators
	map<string, int> myMap = {{"one", 1}, {"two", 2}, {"three", 3}};
	cout << "Map elements: ";
	for (auto it = myMap.begin(); it != myMap.end(); ++it) {
		cout << "(" << it->first << ", " << it->second << ") ";
	}
	cout << endl;

	// 7. Count and Find
	cout << "Count of key 'one': " << myMap.count("one") << endl; // Output: 1
	auto findIt = myMap.find("two");
	if (findIt != myMap.end()) {
		cout << "Element with key 'two' found in the map." << endl;
	} else {
		cout << "Element with key 'two' not found in the map." << endl;
	}

	// 8. Lower Bound and Upper Bound
	auto lb = myMap.lower_bound("one"); // Iterator to the first element not less than "one"
	auto ub = myMap.upper_bound("three"); // Iterator to the first element greater than "three"

	// 9. Swap and Comparison
	map<string, int> anotherMap = {{"four", 4}, {"five", 5}};
	myMap.swap(anotherMap); // Swap contents of two maps

	map<int, string> map1 = {{1, "one"}, {2, "two"}, {3, "three"}};
	map<int, string> map2 = {{2, "two"}, {3, "three"}, {4, "four"}};
	cout << "map1 == map2: " << (map1 == map2 ? "true" : "false") << endl; // Output: false
	cout << "map1 < map2: " << (map1 < map2 ? "true" : "false") << endl;   // Output: true








//===========================================SET=================================================

	set<int> mySet;

	// 1. Insertion Functions
	mySet.insert(10); // Insert an element into the set
	mySet.emplace(20); // Construct an element in-place and insert
	mySet.insert({30, 40, 50}); // Insert multiple elements

	// 2. Erase Functions
	mySet.erase(30); // Remove the element with the specified value
	mySet.erase(mySet.begin()); // Remove element pointed by iterator
	mySet.erase(mySet.begin(), mySet.find(40)); // Remove elements in a range

	// 3. Size and Capacity
	cout << "Size: " << mySet.size() << endl; // Number of elements in the set
	cout << "Is Empty? " << (mySet.empty() ? "Yes" : "No") << endl; // Check if set is empty

	// 4. Element Access
	auto it = mySet.find(40); // Find element and get iterator to it
	if (it != mySet.end()) {
		cout << "Element found: " << *it << endl;
	} else {
		cout << "Element not found." << endl;
	}

	// 5. Clear and Swap
	mySet.clear(); // Remove all elements, size becomes 0
	mySet.swap(anotherSet); // Swap contents of two sets

	// 6. Iterators
	set<int> mySet = {30, 10, 50, 20, 40};
	cout << "Set elements: ";
	for (auto it = mySet.begin(); it != mySet.end(); ++it) {
		cout << *it << " "; // Output: 10 20 30 40 50 (elements are automatically sorted)
	}
	cout << endl;

	// 7. Count and Find
	cout << "Count of 40: " << mySet.count(40) << endl; // Output: 1
	auto findIt = mySet.find(30);
	if (findIt != mySet.end()) {
		cout << "Element 30 found in the set." << endl;
	} else {
		cout << "Element 30 not found in the set." << endl;
	}

	// 8. Lower Bound and Upper Bound
	auto lb = mySet.lower_bound(30); // Iterator to the first element not less than 30
	auto ub = mySet.upper_bound(40); // Iterator to the first element greater than 40

	// 9. Swap and Comparison
	set<int> anotherSet = {100, 200};
	mySet.swap(anotherSet); // Swap contents of two sets

	set<int> set1 = {1, 2, 3};
	set<int> set2 = {2, 3, 4};
	cout << "set1 == set2: " << (set1 == set2 ? "true" : "false") << endl; // Output: false
	cout << "set1 < set2: " << (set1 < set2 ? "true" : "false") << endl;   // Output: true



	//==========================================ARRAY=================================================

// 1. Creating an array
	std::array<int, 5> myArray = {1, 2, 3, 4, 5};

	// 2. Accessing elements
	cout << "Element at index 2: " << myArray[2] << endl; // Output: 3
	cout << "Element at index 4: " << myArray.at(4) << endl; // Output: 5

	// 3. Size of the array
	cout << "Array size: " << myArray.size() << endl; // Output: 5

	// 4. Front and back elements
	cout << "Front element: " << myArray.front() << endl; // Output: 1
	cout << "Back element: " << myArray.back() << endl; // Output: 5

	// 5. Iterating through the array
	cout << "Array elements: ";
	for (int num : myArray) {
		cout << num << " "; // Output: 1 2 3 4 5
	}
	cout << endl;

	// 6. Swapping arrays
	std::array<int, 5> anotherArray = {10, 20, 30, 40, 50};
	myArray.swap(anotherArray);

	// 7. Empty and fill the array
	cout << "Is the array empty? " << (myArray.empty() ? "Yes" : "No") << endl; // Output: No
	myArray.fill(0); // Fill the array with 0

	// 8. 2D Array (array of arrays)
	std::array<std::array<int, 3>, 2> my2DArray = {{1, 2, 3}, {4, 5, 6}};
	cout << "Element at row 1, column 2: " << my2DArray[1][2] << endl; // Output: 6

	// 9. Accessing rows and columns
	auto firstRow = my2DArray[0];
	auto secondColumn = my2DArray.at(1);

	// 10. Size of the 2D array
	cout << "Number of rows: " << my2DArray.size() << endl; // Output: 2
	cout << "Number of columns in row 0: " << my2DArray[0].size() << endl; // Output: 3

	// 11. Iterating through the 2D array
	cout << "2D Array elements: ";
	for (const auto& row : my2DArray) {
		for (int num : row) {
			cout << num << " "; // Output: 1 2 3 4 5 6
		}
	}
	cout << endl;




	//===========================================SHORTCUTS=================================================
// 0. digit extractor
	while (number > 0)
	{
		int digit = number % 10;
		number /= 10;
		//print digit
	}
//1.Initializing Arrays:
	int arr[5] = {0};
	// Initialize an array with zeros.


//2.Pair Shortcut
	pair<int, int> p = make_pair(1, 2);
	//Use make_pair() to create a pair quickly.


//3.Sorting
	int arr[5] = {3, 1, 4, 2, 5};
	sort(arr, arr + 5);
	// Sort an array using the sort() function.


//4.Power Function:
	int fastPow(int base, int exp) {
		int res = 1;
		while (exp > 0) {
			if (exp & 1) {
				res *= base;
			}
			base *= base;
			exp >>= 1;
		}
		return res;
	}
//This is a faster version of the power function using bitwise operators.


//5.Prefix sum:
	int arr[5] = {1, 2, 3, 4, 5};
	int prefixSum[5];
	prefixSum[0] = arr[0];
	for (int i = 1; i < 5; i++) {
		prefixSum[i] = prefixSum[i - 1] + arr[i];
	}



//6.Binary Search:
	int arr[5] = {1, 2, 3, 4, 5};
	int key = 3;
	int index = lower_bound(arr, arr + 5, key) - arr;

//6.1 Full Binary Search Implementation :
	int binarySearch(vector<int>& arr, int target) {
		int lo = 0, hi = arr.size() - 1;
		while (lo <= hi) {
			int mid = lo + (hi - lo) / 2;
			if (arr[mid] == target) {
				return mid;
			} else if (arr[mid] < target) {
				lo = mid + 1;
			} else {
				hi = mid - 1;
			}
		}
		return -1; // Element not found
	}


//7.Finding GCD and LCM:
	int gcd(int a, int b) {
		return b == 0 ? a : gcd(b, a % b);
	}

	int lcm(int a, int b) {
		return a / gcd(a, b) * b;
	}

//8.Matrix muliplication:
#include <iostream>
#include <vector>
	using namespace std;

	vector<vector<int>> multiplyMatrix(const vector<vector<int>>& A, const vector<vector<int>>& B) {
		int n = A.size();
		int m = A[0].size();
		int p = B[0].size();
		vector<vector<int>> C(n, vector<int>(p, 0));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < p; j++) {
				for (int k = 0; k < m; k++) {
					C[i][j] += A[i][k] * B[k][j];
				}
			}
		}
		return C;
	}
//Use this function to perform matrix multiplication.


//9.Using the Lambda functions:
	auto add = [](int a, int b) { return a + b; };
	int sum = add(2, 3); // Output: 5
// Lambda functions allow you to define small functions inline, saving you from writing full function definitions.


//10.Using Ternary Operator:
	int x = 10, y = 20;
	int minNum = (x < y) ? x : y;


//11.Precomputing Factorials:
	const int MAX_N = 1000000;
	int factorial[MAX_N + 1];
	void computeFactorials() {
		factorial[0] = 1;
		for (int i = 1; i <= MAX_N; i++) {
			factorial[i] = mul(factorial[i - 1], i);
		}
	}


//12.Using Bitset for Sieve of Eratosthenes:
	const int MAX_N = 1000000;
	bitset < MAX_N + 1 > isPrime;
	void sieve() {
		isPrime.set();
		isPrime[0] = isPrime[1] = 0;
		for (int i = 2; i * i <= MAX_N; i++) {
			if (isPrime[i]) {
				for (int j = i * i; j <= MAX_N; j += i) {
					isPrime[j] = 0;
				}
			}
		}
	}
	// Use a bitset for the Sieve of Eratosthenes to save memory

//13.Counting Digits in an integer:
	int num = 12345;
	int countDigits = log10(num) + 1; // Output: 5


//14.Factorial
	int factorial(int n) {
		if (n == 0 || n == 1) {
			return 1;
		}
		return n * factorial(n - 1);
	}

//15.Prime check
	bool isPrime(int num) {
		if (num < 2) {
			return false;
		}
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				return false;
			}
		}
		return true;
	}


//16. Permutation function:
	vector<int> v = {1, 2, 3};
	// Sort the vector in ascending order (required for next_permutation)
	sort(v.begin(), v.end());
	// Find all permutations and print them using a while loop
	while (next_permutation(v.begin(), v.end())) {
		for (int num : v) {
			cout << num << endl;
		}
	}
	return 0;
}

// 17 check palindrome string :

bool ispalindrome(string s)
{
	string s1 = s;
	reverse(s.begin(), s.end());
	if (s == s1) return true;
	return false;

}
// for the int check
bool isPalindrome(int n ) {
	int a = n;
	int b = 0;
	while (n != 0) {
		int rem = n % 10;
		b = b * 10 + rem;
		a /= 10;
	}
	return a == b;
}


// 18 checking the odd and even by the bitwise operator
if (v[i] & 1) {
	// odd check
	returns 1 ;
}

// 19 parity checker
bool getParity(unsigned int n)
{
	bool parity = 0;
	while (n)
	{
		parity = !parity;
		n     = n & (n - 1);
	}
	return parity;
}
//_____________built in _______________
bool getParity(unsigned int n)
{
	return __builtin_parity(n);
}

// returns 1 if n has odd parity


//---------------------------------------------
// 20. maping
vector<string> v { "apple", "banana", "apple", "cherry", "cherry" };
map<string, int> m;

for (int i = 0; i < v.size(); ++i) {
	string element = v[i];
	if (m.count(element)) {
		m[element]++;
	} else {
		m[element] = 1;
	}
}

for (auto& entry : m) {
	cout << entry.first << " - " << entry.second << endl;
}

for (auto it = m.begin(); it != m.end(); ++it) {
	cout << it->first << " - " << it->second << endl;
}
//---------------------------------------------------------
vector<int> v { 1, 2, 1, 3, 3, 2, 4, 4, 4 };
unordered_map<int, int> freq;

for (int element : v) {
	freq[element]++;
}

for (auto it = freq.begin(); it != freq.end(); ++it) {
	int key = it->first;
	int frequency = it->second;

	cout << "Element: " << key << ", Frequency: " << frequency << endl;

	// Compare the key with the elements in the vector v
	for (int i = 0; i < v.size(); ++i) {
		if (v[i] == key) {
			cout << "Found at index " << i << endl;
		}
	}



// check by the binary for the even and odd
	int a = 2;
	int b = 3;
	if (a & 1) {
		cout << "odd" << endl;
	}
	else {
		cout << "even" << endl;
	}  if (b & 1) {
		cout << "odd" << endl;
	}
	else {
		cout << "even" << endl;
	}



// set of consecutive no formula
	int totalSum = (n + 1) * (nums[0] + nums[n - 1]) / 2;


// total bits
	int total_bits(int n)
	{
		int p = (int)log2(n) + 1;
		return p;
	}

// check set bits
	int countSetBits(int n)
	{
		int count = 0;
		while (n != 0)
		{
			count += n & 1;
			n >>= 1;
		}
		return count;
	}


// if given the string the how to make the freq of the no in the string
	string s; cin >> s;
	vector<int> cnt(10);
	for (auto i : s) ++cnt[i - '0'];
	int maxi = *max_element(cnt.begin(), cnt.end()); // finding the max



	bool checkAlternateBinary(vector<int>&v) {
		int n = (int)v.size();
		for (int i = 0; i < n; ++i)
		{
			if (n == 1 && (v[i] == 0 || v[i]) == 1) {
				return 1;
			}
			else if ((v[i] == 0 && v[i + 1] == 1) or (v[i] == 1 && v[i + 1] == 0)) {
				if (!(n & 1)) {
					if (v[n - 1] != v[0]) return 1;
					else return 0;
				}
				else {
					if (v[n - 1] == v[0]) return 1;
					else return 0;
				}
			}
			else {
				return 0;
			}
		}
		return 0;
	}


	/*----------------------------------------------\*/
	// best way to keep the count
	int n ; cin >> n;
	string s ; cin >> s;
	map<char, int>mp;
	for (char c : s) mp[c]++;
	for (const auto &e : mp) cout << e.ff << " " << e.ss << endl;

	/*------------------------------------------------------------------------------------------------------------------*/
	use of compare function in the stl


	int n ; cin >> n;
	string s ; cin >> s;
	string b = "ABC";
	int f = -1;
	for (int i = 0; i < n - 2; ++i)
	{
		if (s.substr(i, 3).compare(b) == 0) {
			f = i;
			break;
		}
	}
	if (f != -1)
		cout << f + 1 << endl;
	else cout << -1 << endl;

	else if (t.substr(0, n).compare(s) == 0 && t.substr(m - n, n).compare(s) == 0) {
		cout << "0" << endl;
	}