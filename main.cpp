#include <iostream> 
#include <exception> 

using namespace std; 
class my_cin: public exception
{
    virtual const char* what() const throw(){
      return "STUPID!!! Not integer!!";
    }
    
}cinf;

int main () 
{      int x,y;
        double d;
  try {  
            cout<<"Input 2 numbers:";
 	          cin>>x>>y;
              if(cin.fail()) throw cinf;
              d=(double) x/y;
	            cout<< "The result is "<<d<<endl;
              
            } 
     catch (exception& e) {
        cout << e.what() << endl; 
        } 
     return 0; 
} 
