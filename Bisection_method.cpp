#include <iostream>
using namespace std;
//Question formula 
double solution(double x){
    return x*x*x-x*x-1;
}
//Print bisection exact root 
void bisection(double a,double b){
    if (solution (a)* solution(b)>=0)
    {
        cout<<"You have not assumed right a and b"<<endl;
        return;
    }
    double c;
    while((b-a)>=0.01)
    {
        c=(a+b)/2;
        if(solution(c)==0.0)
        {
            break;
        }else if(solution (a)* solution (c)<0)
        {
            b=c;
        }else
        {
            a=c;
        }

    }
    cout<<"The Exact root is:  "<<c;
}
int main(){
 double a,b;
 cout<<"Enter the value of a and b: "<<endl;
 cin >>a >>b; 
 if(b>a){
 bisection (a,b);
 }
return 0;
}