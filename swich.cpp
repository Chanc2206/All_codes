//no return and argument : 
#include<iostream>
using namespace std;
class All{
  public : 
  void swap1(){
      int a,b,c;
      cout<<"Enter a  number";
      cin>>a>>b;
      c=a;
      a=b;
      b=c;
      cout<<a<<b<<endl;
      
  }
  void swap2(){
      int a,b,c;
      cout<<"Enter a  number";
      cin>>a>>b;
      a=a+b;    
	  b=a-b;     
      a=a-b; 
      cout<<a<<b<<endl;
      
  }

   void fibonacci() {
    int a = 0, n,b = 1, term = 0;

    cout << "Enter the length of Fibonacci Series: ";
    cin >> n;
    cout << "Fibonacci Series: " << a << ", " << b << ", ";
    term = a + b;
    while(n!=2) {
        cout << term << ", ";
        a = b;
        b = term;
        term = a + b;
        n--;
    }
    
}
void factorial()
{
    int f=1,i=1,n;
    cout<<"\n Enter The Number:";
    cin>>n;
    while(i<=n)
    {f=f*i;
     i++;}
    cout<<"\n The Factorial of "<<n<<" is "<<f<<endl;
}
void gender(){
    char gender;
    cout<<"Enter gender (M/m or F/f): "<<endl;
    cin>>gender;
    switch(gender)
    {case 'M':
    case 'm':
      cout<<"Male"<<endl;
      break;
    case 'F':
    case 'f':
      cout<<"Female"<<endl;
       break;
    default:
      cout<<"Unspecified Gender"<<endl;
    }}
void check() {
  int n;

  cout << "Enter an integer: ";
  cin >> n;

  if ( n % 2 == 0)
    cout << n << " is even."<<endl;
  else
    cout << n << " is odd."<<endl;}

 void armstrong(){
    int num, originalNum, remainder, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }
    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";
}
};
int main()
{

    All k=All(); 
    k.swap1();
    k.swap2();
    k.check();
    k.fibonacci();
    k.factorial();
    k.gender();
    k.armstrong();
    return 0;
}

