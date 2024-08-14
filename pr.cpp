#include<iostream>
using namespace std;
class Complex{
    private:
    int real;
    int comp;
    public:
    Complex(){
        real=0;
        comp=0;
    }
    Complex(int a,int b){
        real=a;
        comp=b;
    }
    Complex operator+(Complex const &obj){
        Complex ret;
        ret.real=real+obj.real;
        ret.comp=comp+obj.comp;
        return ret;
    }
    Complex operator-(Complex const &obj){
        Complex ret;
        ret.real=real-obj.real;
        ret.comp=comp-obj.comp;
        return ret;
    }
    Complex operator*(Complex const &obj){
        Complex ret;
        ret.real=real*obj.real-comp*obj.comp;
        ret.comp=real*obj.comp+comp*obj.real;
        return ret;
    }
    void display_data(){
        if(comp>=0){
            cout<<real<<"+"<<comp<<"i"<<endl;
        }
        else{
            cout<<real<<"-"<<comp<<"i"<<endl;
        }
    }
};
int main(){
    Complex c1(2,3),c2(6,7),c3,c4,c5;
    c3=c1+c2;
    c4=c1-c2;
    c5=c1*c2;
    c3.display_data();
    c4.display_data();
    c5.display_data();
    return 0;
}