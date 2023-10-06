// import java.io.*;

// public class myjava {
//     public static void main(String[] args) {
//         try {
//             System.setIn(new FileInputStream("input.txt"));
//             System.setOut(new PrintStream(new FileOutputStream("output.txt")));
//         } catch (Exception e) {
//             System.err.println("Error");
//         }
//         try (Scanner sc = new Scanner(System.in)) {
//             int n = sc.nextInt();
//             System.out.println(n);
//         }
//     }
// }
// Importing input output classes
// import java.io.*;
// import java.util.*;
// public class myjava {
//     public static void main(String [] args) throws IOException {
//         Scanner read = new Scanner(System.in);
//         if (System.getProperty("ONLINE_JUDGE") == null) {
//             try {
//                 System.setOut(new PrintStream(
//                                   new FileOutputStream("output.txt")));
//                 read = new Scanner(new File("input.txt"));
//             } catch (Exception e) {
//             }
//         }
//         int a = Integer.parseInt(read.nextLine());//Int
//         String name = read.nextLine();//String


//     }
// }

// import java.io.*;
// import java.util.*;
// import java.io.BufferedReader;
// public class myjava {
//     public static void main(String [] args) throws IOException {
//         Scanner read = new Scanner(System.in);
//         if (System.getProperty("ONLINE_JUDGE") == null) {
//             try {
//                 System.setOut(new PrintStream(
//                                   new FileOutputStream("output.txt")));
//                 read = new Scanner(new File("input.txt"));
//             } catch (Exception e) {
//             }
//         }
//         //int a = Integer.parseInt(read.nextLine());//Int
//         //String name = read.nextLine();//String

//         // System.out.println(a);
//         String name = read.nextLine();
//         System.out.println(name);
//     }
// }


//WRIRING THE CODE WITH THE SWITCH CASE STATEMENT
// import java.io.*;
// import java.util.*;
// public class myjava {
//     public static void main(String [] args) throws IOException {
//         Scanner read = new Scanner(System.in);
//         if (System.getProperty("ONLINE_JUDGE") == null) {
//             try {
//                 System.setOut(new PrintStream(
//                                   new FileOutputStream("output.txt")));
//                 read = new Scanner(new File("input.txt"));
//             } catch (Exception e) {
//             }
//         }
//         //int a = Integer.parseInt(read.nextLine());//Int
//         //String name = read.nextLine();//String

//         int day_of_week = Integer.parseInt(read.nextLine());
//         switch (day_of_week) {
//         case 1: System.out.println("Monday");
//             break;
//         case 2: System.out.println("Tuesday");
//             break;
//         case 3: System.out.println("Wednesday");
//             break;
//         case 4: System.out.println("thrusday");
//             break;
//         case 5: System.out.println("Friday");
//             break;
//         case 6: System.out.println("Saturday");
//             break;
//         case 7: System.out.println("Sunday");
//             break;
//         default: System.out.println("Invalid Day of the week");
//         }
//     }
// }

//RETURN STATEMENT
// import java.io.*;
// import java.util.*;

// public class Demo {
//  //CREATING A METHOD
//  public static int sum(int a, int b, int c) {
//      return a + b + c;
//  }
//  public static int check(int a, int b, int c) {
//      return a > b ? a > c ? a : c : b > c ? b : c;
//  }
//  public static void main(String[] args) {
//      int a = 7, b = 8, c = 10;
//      System.out.println(sum(a, b, c));
//      System.out.println(check(a, b, c));
//  }
// }


// import java.io.*;
// import java.util.*;
// public class myjava {
//     public static void main(String [] args) throws IOException {
//         Scanner read = new Scanner(System.in);
//         if (System.getProperty("ONLINE_JUDGE") == null) {
//             try {
//                 System.setOut(new PrintStream(
//                                   new FileOutputStream("output.txt")));
//                 read = new Scanner(new File("input.txt"));
//             } catch (Exception e) {
//             }
//         }
//         //int a = Integer.parseInt(read.nextLine());//Int
//         //String name = read.nextLine();//String

//         int num[][] = new int [3][];//allocating memory in dynamic way by writing the new keyword
//         for (int i = 0; i < num.length; i++) {
//             num[i] = new int [i + 1];
//         }
//         for (int j = 0; j < num.length; j++) {//j=0,1,2
//             for (int k = 0; k < num[j].length; k++) {//k=0,1,2,3,4
//                 num[j][k] = j * k;
//             }
//         }
//         for (int j = 0; j < num.length; j++) {
//             for (int k = 0; k < num[j].length; k++)
//                 System.out.print(num[j][k] + "\t");
//             System.out.println("\n");
//         }
//     }
// }
// for the =>num[i]=new int [6]
// 0   0   0   0   0   0

// 0   1   2   3   4   5

// 0   2   4   6   8   10

//and for the [i+1]

// 0

// 0   1

// import java.util.*;
// class b {
// 	public static void main(String [] args) throws
// 		IOException {
// 		Scanner read = new Scanner(System.in);
// 		if (System.getProperty("ONLINE_JUDGE") == null) {
// 			try {
// 				System.setOut(new
// 				              PrintStream(new
// 				                          FileOutputStream("output.txt")));
// 				read = new Scanner(new
// 				                   File("input.txt"));
// 			} catch (Exception e) {}
// 		}
// 		//int a = Integer.parseInt(read.nextLine());//Int
// 		// String name = read.nextLine();//String
// 		a b = new a();
// 		// calling the method using the obj
// 		b.fuck();

// 	}
// }

// import java.io.*;
// import java.util.*;
// class b {
// 	public static void main(String [] args) throws IOException {
// 		Scanner read = new Scanner(System.in);
// 		if (System.getProperty("ONLINE_JUDGE") == null) {
// 			try {
// 				System.setOut(new PrintStream(new FileOutputStream("output.txt")));
// 				read = new Scanner(new File("input.txt"));
// 			} catch (Exception e) {}
// 		}
// 		//int a = Integer.parseInt(read.nextLine());//Int
// 		// String name = read.nextLine();//String
// // --------------------------------------------------------------------------
// 		// calling the method
// 		a obj = new a();
// 		a obj2 = new a(10);
// 		obj.fuck();
// 	}
// }
// class a {
// 	// method
// 	void fuck() {
// 		System.out.println("fuck method with class a");
// 	}
// 	a(int t) {
// 		System.out.println("t->" + t);
// 	}
// 	a() {
// 		System.out.println("calling");
// 	}
// }

// class person {
// 	String name;
// 	// constructor
// 	person(String n) {
// 		name = n ;
// 		System.out.println(name);
// 	}
// }
// import java.io.*;
// import java.util.*;
// class b {
// 	// these are the instance variable
// 	int lenght, breath;

// 	// creating a constructor
// 	b(int lenght, int breath) {
// 		this.lenght = lenght;
// 		this.breath = breath;
// 	}

// 	// creating a method to calculate area
// 	int area() {
// 		return lenght * breath;
// 	}

// 	// creating a method to calculate perimeter
// 	int perimeter() {
// 		return 2 * (lenght + breath);
// 	}

// 	//----------------------------------------------------------
// 	public static void main(String [] args) throws IOException {
// 		Scanner read = new Scanner(System.in);
// 		if (System.getProperty("ONLINE_JUDGE") == null) {
// 			try {
// 				System.setOut(new PrintStream(new FileOutputStream("output.txt")));
// 				read = new Scanner(new File("input.txt"));
// 			} catch (Exception e) {}
// 		}
// 		//int a = Integer.parseInt(read.nextLine());//Int
// 		// String name = read.nextLine();//String
// 		//---------------------------------------------------------

// 		// creating a rectangle object
// 		b rectangle = new b(2 , 3);

// 		// calcualte and print the are and perimeter
// 		System.out.println(rectangle.area());
// 		System.out.println(rectangle.perimeter());
// 	}
// }


// there is different parameters in the method overloading
// can have the same or different return types but the method riding has to be the same return type
// compile time loading and runtime ridding

// Overloading allows you to create multiple methods in the same class with the same name but different parameter lists,
// use to provide the multiple method using the same name



// using the setter and getter method

// import java.io.*;
// import java.util.*;
// class b {
// 	int id;
// 	String name;

// 	// setter method
// 	void setterId(int id) {
// 		this.id = id;
// 	}
// 	void setterName(String name) {
// 		this.name = name;
// 	}


// 	// getter method

// 	int getId() {
// 		return id;
// 	}

// 	String getName() {
// 		return name;
// 	}
// 	//----------------------------------------------------------
// 	public static void main(String [] args) throws IOException {
// 		Scanner read = new Scanner(System.in);
// 		if (System.getProperty("ONLINE_JUDGE") == null) {
// 			try {
// 				System.setOut(new PrintStream(new FileOutputStream("output.txt")));
// 				read = new Scanner(new File("input.txt"));
// 			} catch (Exception e) {}
// 		}
// 		//int a = Integer.parseInt(read.nextLine());//Int
// 		// String name = read.nextLine();//String
// 		//---------------------------------------------------------

// 		b student = new b();
// 		int ide = read.nextInt();
// 		String namee = read.nextLine();

// 		student.setterId(ide);
// 		student.setterName(namee);

// 		// printing

// 		System.out.println(student.getId());
// 		System.out.println(student.getName());

// 	}
// }
// import java.io.*;
// import java.util.*;
// class Test {
// 	static void solve(BufferedReader read) throws IOException {
// 		int a = Integer.parseInt(read.readLine());
// 		System.out.println(a);
// 	}
// 	public static void main(String[] args) throws IOException {
// 		BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
// 		if (System.getProperty("ONLINE_JUDGE") == null) {
// 			try {
// 				System.setOut(new PrintStream(new FileOutputStream("output.txt")));
// 				read = new BufferedReader(new FileReader("input.txt"));
// 			} catch (Exception e) {
// 			}
// 		}
// 		int t = Integer.parseInt(read.readLine());
// 		while (t-- > 0) solve(read);
// 	}
// }

/*---------------------------------------------------------------------------------------------------------*/
// import java.io.*;
// import java.util.*;
// class Test {

// 	public static void main(String[] args) throws IOException {
// 		BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
// 		if (System.getProperty("ONLINE_JUDGE") == null) {
// 			try {
// 				System.setOut(new PrintStream(new FileOutputStream("output.txt")));
// 				read = new BufferedReader(new FileReader("input.txt"));
// 			} catch (Exception e) {
// 			}
// 		}
// 		//int a = Integer.parseInt(read.readLine());
// 		//String s = read.readLine();

// 		String a = new String("Java");
// 		String b = new String("Java");
// 		String c = new String("Java");
// 		if ((a == b && b == c) || a == c ) System.out.println("true");
// 		else System.out.println("false");

// 		// false
// 	}
// }

// import java.io.*;
// import java.util.*;
// interface A {
// 	void show();
// }
// class B implements A {
// 	public void show() {
// 		System.out.println("Hello World !!");
// 	}
// }
// class Test {
// 	public static void main(String[] args) throws IOException {
// 		BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
// 		if (System.getProperty("ONLINE_JUDGE") == null) {
// 			try {
// 				System.setOut(new PrintStream(new FileOutputStream("output.txt")));
// 				read = new BufferedReader(new FileReader("input.txt"));
// 			} catch (Exception e) {
// 			}
// 		}
// 		//int a = Integer.parseInt(read.readLine());
// 		//String s = read.readLine();

// 		// String str1 = "Hello";
// 		// String str2 = "World";
// 		// String result = str1 + str2;
// 		// System.out.println(result == "HelloWorld");
// 		// String str1 = new String("Hello");
// 		// String str2 = new String("Hello");
// 		// System.out.println(str1 == str2);
// 		// System.out.println(str1.equals(str2));
// 		// B obj = new B();
// 		A a = new B(); // Hello World !!
// 		a.show();
// 		B b = new A(); // A is abstract can't be instanciated
// 		b.show();

// 	}
// }
/*------------------------------------------------------------------------------------------------------------------*/
