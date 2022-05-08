#ifndef __PERSEGIPANJANG_HPP__
#define __PERSEGIPANJANG_HPP__

#include <iostream>

class PersegiPanjang {
    private:
        double xmin,xmax,ymin,ymax;
	

public:
    void print();
    PersegiPanjang();
    PersegiPanjang(double tikteng_x, double tikteng_y, double panjang, double lebar);
    PersegiPanjang operator+ (PersegiPanjang const );
    PersegiPanjang operator- (PersegiPanjang const ); 
    void operator ++ ();
    void operator -- ();
    void operator -- (int);
    void operator ++ (int);
    float operator[](int a);
    bool operator== (PersegiPanjang const );
	
};


#endif
