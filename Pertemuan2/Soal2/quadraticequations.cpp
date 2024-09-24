#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    float a, b, c;
    cout<<"Standard form: ax^2+bx+c=0"<<endl;
    cout<<"Insert value a = ";
    cin>>a;
    cout<<"Insert value b = ";
    cin>>b;
    cout<<"Insert value c = ";
    cin>>c;
    
    float D;
    D = (b*b)-(4*a*c);
    cout<<"-------------------"<<endl;
    cout<<"The value of D is = "<<D<<endl;
    
    if (D>0){
        float x1, x2;
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);
        cout<<"Result is x1= "<<x1<<" and x2= "<<x2<<endl;
    }
    
    else if (D==0){
        float x;
        x = -b / (2*a);
        cout<<"Result is x= "<<x<<endl;
    }
    
    else {
        cout<<"Result: There are no real roots"<<endl;
    }

return 0;
}
