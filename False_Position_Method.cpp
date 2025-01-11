#include <iostream>
#include <math.h>
using namespace std;

double solution(double x){
    return x*x*x - x*x -1;
}
void false_position(double a,double b){
    if(solution(a) * solution(b)>=0)
    {
        cout<<"You have not assumed a and b: "<<endl;
        return;
    }
    double c,slna,slnb;
    slna=solution(a);
    slnb=solution(b);
    
    while((b-a)>=0.01)
    {
        c = a - (slna * (b - a)) / (slnb - slna);
        if(solution(c)==0){
            break;
        } else if(slna * solution(c)<0){
            b = c;
        }else{
            a = c;
        }
    }
    cout<<"The Exact Root is : "<<c;
}

int main (){
    double a,b;
    cout<<"Enter the Value a and b : ";
    cin>>a >>b;
    if(b>a){
    false_position(a,b);
    }
    return 0;
    
}