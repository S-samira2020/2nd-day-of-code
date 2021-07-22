#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   ///2nd day***


   /// working with numbers

   int a = 10;
   int mul= 10*5;
   a++;
   cout << a <<endl;
   cout << mul <<endl;
   float f  = 5.5;
   float mul1 = 5.5 * 1.2;
   cout << mul1 << endl;
   float b = 7.5;
   b++;
   cout << b << endl;
   //____________________
    cout << pow(2,5) << endl;
    cout << fmax(3,10) << endl;
    cout << fmin(3,10) << endl;
    cout << round(4.3) << endl;
    cout << round(4.5) << endl;
    cout << ceil(4.1) << endl;
    cout << floor(4.8) << endl;


/// taking input from user
   int age;
   cout << "enter your age : ";
   cin >> age;
   cout << "I am " << age << " years old" << endl;

   string s;
   cout  << "enter your name : " ;
   getline(cin, s);
   cout << "hello " << s;


/// Building a calculator

   int a, b;
   cout << "please enter num1 : ";
   cin >> a;
   cout << "please enter num2 : ";
   cin >> b;
   cout << a + b << endl;
   cout << a - b << endl;
   cout << a * b << endl;
   cout << a / b << endl;
   cout << a % b << endl;


/// Buiding a mad lips Game

   /*
   cout << "The roses are red" << endl;
   cout << " Phones are blue" << endl;
   cout << "I love you" << endl;

   cout << "The roses are { color }" << endl;
   cout << " { pluralnour} are blue" << endl;
   cout << "I love {celebrity}" << endl;
   */

   string color, pluralNoun, name;
   cout << "enter a color: ";
   getline(cin, color);
   cout << "enter a pluralnoun :";
   getline(cin, pluralNoun);
   cout << "enter a celebrity name : ";
   getline(cin, name);
   cout << "The roses are " << color << endl;
   cout << pluralNoun << " are blue" << endl;
   cout << "I love " << name << endl;



/// Arrays

   int arr[20] = {10, 20, 30, 40, 50};
    arr[10] = 100;
    cout << arr[10];

   return 0;
}
