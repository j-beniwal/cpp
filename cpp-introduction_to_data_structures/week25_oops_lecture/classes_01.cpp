#include <iostream>
#include <string>
using namespace std;

class polygon{
    protected:
        int width, height;
        string *polyName;
    public:
        // constructor with multiple parametsers
        polygon(int newWidth, int newHight):width(newWidth),height(newHight){};
        // allocating the the dynamic memory in constructor
        polygon(const string &str ): polyName(new string(str)) {};
        polygon(const string &str, int newWidth, int newHight); 
        // destructor delete the memory
        ~polygon(){delete polyName;};
        // access congent
        const string& getPolyName() const {return *polyName;}
        // copy constructor
        polygon(polygon &newpoly):polyName(new string(newpoly.getPolyName())),width(newpoly.getWidth()),height(newpoly.getHeight()){};
        polygon(){width=0; height=0;};
        void set_values(int a, int b){
            width = a;
            height = b;
        };
        polygon& operator= (const polygon & rhsObj){
            width = rhsObj.getWidth();
            height = rhsObj.getHeight();
            polyName = new string(rhsObj.getPolyName());
        }
        int getWidth() const {return width;};
        int getHeight() const {return height;};
        int getPerimeter() const;
        
        int area() ;
};

polygon::polygon(const string &str, int newWidth, int newHight){
    width = newWidth;
    height = newHight;
    polyName = new string;
    *polyName = str;
}

int polygon::getPerimeter() const {
    return 2*(width+height);
}
class Rectangle: public polygon{
    public:
        int area()
        {
            return width*height;
        }
};

int main (){
    // Rectangle rect;
    // rect.set_values(15, 12);
    // cout<< rect.area()<<endl;
    // polygon poly;
    // poly.set_values(5,2);
    // cout<<"poly width is : "<<poly.getWidth()<<endl;
    // cout<<"poly perimeter: "<<poly.getPerimeter()<<endl;
    string name = "rectingle";
    polygon poly(name, 2, 3);
    cout<<"name: "<<poly.getPolyName()<<endl;
    polygon newpoly = poly;
    cout<<"copied name is : "<<newpoly.getPolyName()<<endl;
    return 0;
}