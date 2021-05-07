#include <iostream> 
#include <exception> 

using namespace std; 
class my_cin: public exception
{
    virtual const char* what() const throw(){
      return "STUPID!!! Not integer!!";
    }
    
}cinf;
class zero: public exception
{
    virtual const char* what() const throw(){
      return "STUPID!!! can't y is 0!!";
    }
    
}zerof;
int main () 
{      int x,y;
        double d;
  try {  
            cout<<"Input 2 numbers:";
 	          cin>>x>>y;
              if(cin.fail()) throw cinf;
              if(y==0)
              {
                throw zerof;
              }
              d=(double) x/y;
              
	            cout<< "The result is "<<d<<endl;
              
            } 
     catch (exception& e) {
        cout << e.what() << endl; 
        } 
     return 0; 
} 
