#wap to declare class outside the function.
include<iostream>
using namespace std;
class bca{
    public:
    int a=5;
    void display(){
        cout<<"BCA"<<endl;
    }
};
int main(){
    bca obj;
    obj.a;
    obj.display();
}