#include <iostream>
using namespace std;
/*int main(){
int numerator,denominator,result; 
cout<<"enter the numerator:";
cin>>numerator;
cout<<"enter the denominator:";
cin>>denominator;

 try{
   if (denominator==0){
    throw denominator;}
 result = numerator/denominator;
 }
catch(int ex){ 
    cout <<"it is due to denominator can't be zero"<<endl;
    }

cout<<"The division of two numbers is:"<<result<<endl;
return 0;
}*/
/*int main(){
try{
    int age;
    cout<<"enter the age :";
    cin>>age;
    if(age>=18){
        cout<<"u r eligible for vote"<<endl;
    }
    else
      throw(age);
}
catch(int ex){
    cout<<"u must be equal to 18 or more for vote"<<endl;
}
return 0;
}*/
// if u don't know the try error we can use numbers in throw
/*int main(){
try{
    int age;
    cout<<"enter the age :";
    cin>>age;
    if(age>=18){
        cout<<"u r eligible for vote"<<endl;
    }
    else
      throw 500;
}
catch(int num){
    cout<<"u must be equal to 18 or more for vote"<<endl;
    cout<<"error number :"<<num;
}
return 0;
}*/
/*int main(){
try{
    int age;
    cout<<"enter the age :";
    cin>>age;
    if(age>=18){
        cout<<"u r eligible for vote"<<endl;
    }
    else
      throw(age);
}
catch(...){
    cout<<"Accesed denied:u must be equal to 18 or more for vote"<<endl;
}
return 0;
}*/
float division(int x, int y) {  
   if( y == 0 ) {  
      throw "Attempted to divide by zero!";  
   }  
   return (x/y);  
}  
int main () {  
   int i = 25;  
   int j = 0;  
   float k = 0;  
   try {  
      k = division(i, j);  
      cout << k << endl;  
   }catch (const char* e) {  
      cerr << e << endl;  
   }  
   return 0;  
}  