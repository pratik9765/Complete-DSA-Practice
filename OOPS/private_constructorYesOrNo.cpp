#include <iostream>
using namespace std;

class Box{
    int width;

    public:
    Box(int _w):width(_w){}
    int getWidth()const{
        return width;
    }

    void setWidth(int _val){
        width = _val;
    }

    friend class BoxFactory;
};

class BoxFactory{
    int count;
    public:
    Box getABox(int _w){
        ++count;
        return Box(_w   );
    }
};
int main(){
    BoxFactory bfact;
    Box b = bfact.getABox(15);
    cout<<b.getWidth()<<endl;
    return 0;
}