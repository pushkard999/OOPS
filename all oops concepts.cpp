#include <iostream>
using namespace std;

class encapsulation
{
    private:
        int temp=5;   //private member
        
    public:
    void data_change()
    {
        cout<< endl<<"encap: "<< ++temp;  //private member accessed by the member function
    }
};
class function_overloading  //polymorphism compiletime
{   
    public:
    string c= "hi";
    string d= "bye";
    
    public:
    // if we execute the code with only 1 function 
    //then also it will work but float values gets converted into int ot viceversa
        void addition(int a, int b)     //function overloading
        {
            cout << a+b << endl;
        }
        void addition(double a, double b)    //function overloading
        {
            cout << a+b<< endl;
        }
        void string_concatenate()
        
        {
            cout <<"string_concatenate: " <<c+d;    //operator overloading //polymorphism compiletime
        }
};

class function_overridding : public function_overloading //run time polymorphism
{
    public:
     void string_concatenate()
        
        {
            cout << endl<<"string_concatenate in function_overridding: " << c+d;    //function_overridding
        }
    
};

class abstraction
{
    private:
        int a=5, b=10;  // this data is hide from the user
    public:
        void input(int x, int y)
        {
            a = x*a;
            b = y*b;
        }
        void display()
        {
            cout << endl << "abstraction: " << a << " " << b;   //user is directly shown the output
        }
};

int main()
{
    function_overloading x;
    encapsulation en;
    
    x.addition(1.0,2.0);
    x.addition(5.5, 6.5);
    x.string_concatenate();
    function_overridding fo;
    fo.string_concatenate();
    
    abstraction ab;
    ab.input(10,20);
    ab.display();
    
    en.data_change();
}

/*
o/p
3
12
string_concatenate: hibye
string_concatenate in function_overridding: hibye
abstraction: 50 200
encap: 6
*/
