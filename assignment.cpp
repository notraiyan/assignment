//assignment
//id:160041037
#include<iostream>
using namespace std;
class base1{
public:
    int b;
    base1(int n){
        b=n;
        cout<<"in base 1"<<endl;
    }
};
class base2{
public:
    int b;
    base2(int n){
        b=n;
        cout<<"in base 2"<<endl;
    }
};
class derived: public base1,public base2{
public:
    int a,c;
    derived(int m,int n):base1(m),base2(n){
        a=m;
        c=n;
    }

};
int main(){
    derived ob(20,10);
}
