#include<iostream>
using namespace std;
class medicine 
{
    private :
    string name ,generic_name;
    double discount_percent , unit_price ,price;
    public :
    void assign_name( string s, string s1)
    {
         name = s;
         generic_name = s1;

    }
    void assign_price (double p=0.00)
    {
        unit_price = p;
    }
    void set_discount_percent (double r = 5.00)
    {
        if(r>=0.00 && r<=45.00)  discount_percent = r;
    }
    double get_sellingprice ()
    {
         price = unit_price-((unit_price)*(discount_percent/100));
        return price;
        
    }
    void display ()
    {
        cout <<name <<"("<<generic_name<<") has unit price " <<unit_price <<". Current discount is "<<discount_percent<<"%"<< endl;
    }

};
int main()
{
    medicine m1;
    string s1,s2;
    double p,r;
     cin >> s1 >> s2 >> p >> r;
     m1.assign_name(s1,s2);
     m1.assign_price(p);
     m1.set_discount_percent(r);
     m1.get_sellingprice();
     m1.display();
     return 0;

}