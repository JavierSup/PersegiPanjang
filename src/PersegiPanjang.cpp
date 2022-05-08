#include <iostream>
#include"include/PersegiPanjang.hpp"

using namespace std;

void PersegiPanjang::print()
{
    float panjang, lebar, tikteng_x, tikteng_y, area;

    panjang = this->xmax - this->xmin;
    lebar = this->ymax - this->ymin;

    tikteng_x = panjang + this->xmin;
    tikteng_y = lebar + this->ymin;

    area = panjang*lebar;

    cout << "titik tengah (x) : "  << tikteng_x << endl;
    cout << "titik tengah (y) : "  << tikteng_y << endl;
    cout << "panjang : " << panjang << endl;
    cout << "lebar : "  << lebar << endl;
    cout << "Nilai xmin : " << this->xmin << endl;
    cout << "Nilai xmax : " << this->xmax << endl;
    cout << "Nilai ymin : " << this->ymin << endl;
    cout << "Nilai ymax : " << this->ymax << endl;
    cout << "Luasan persegi panjang : " << area << endl << endl;
}

PersegiPanjang::PersegiPanjang(){

}

PersegiPanjang::PersegiPanjang(double tikteng_x, double tikteng_y, double panjang, double lebar){
    this->xmin=tikteng_x-panjang/2;
    this->xmax=tikteng_x+panjang/2;
    this->ymin=tikteng_y-lebar/2;
    this->ymax=tikteng_y+lebar/2;
}
bool PersegiPanjang::operator==(PersegiPanjang const a){
    if(this->xmin<a.xmax&&a.xmin<this->xmax&&this->ymin<a.ymax&&a.ymin<this->ymax){
        return true;

    }
    return false;

}
PersegiPanjang PersegiPanjang:: operator+ (PersegiPanjang const a){
    if(*this==a){
        PersegiPanjang sem(0,0,0,0);
        sem.xmax=max(a.xmax,this->xmax);
        sem.xmin=min(a.xmin,this->xmin);
        sem.ymax=max(a.ymax,this->ymax);
        sem.ymin=min(a.ymin,this->ymin);
        
        return sem;
        

    }
}

PersegiPanjang PersegiPanjang:: operator- (PersegiPanjang const a){
    if(*this==a){
        PersegiPanjang sem(0,0,0,0);
        sem.xmax=min(a.xmax,this->xmax);
        sem.xmin=max(a.xmin,this->xmin);
        sem.ymax=min(a.ymax,this->ymax);
        sem.ymin=max(a.ymin,this->ymin);
        
        return sem;
        

    }
}

void PersegiPanjang:: operator ++ ()
{   double panjang;
    double lebar;
    double tikteng_x;
    double tikteng_y;
    panjang=this->xmax-this->xmin;
    lebar=this->ymax-this->ymin;
    tikteng_x=this->xmax-panjang/2;
    tikteng_y=this->ymax-lebar/2;


    panjang*=2;
    lebar*=2;

    this->xmin=tikteng_x-panjang/2;
    this->xmax=tikteng_x+panjang/2;
    this->ymin=tikteng_y-lebar/2;
    this->ymax=tikteng_y+lebar/2;


}

void PersegiPanjang:: operator ++ (int)
{   double panjang;
    double lebar;
    double tikteng_x;
    double tikteng_y;
    panjang=this->xmax-this->xmin;
    lebar=this->ymax-this->ymin;
    tikteng_x=this->xmax-panjang/2;
    tikteng_y=this->ymax-lebar/2;


    panjang*=2;
    lebar*=2;

    this->xmin=tikteng_x-panjang/2;
    this->xmax=tikteng_x+panjang/2;
    this->ymin=tikteng_y-lebar/2;
    this->ymax=tikteng_y+lebar/2;


}

void PersegiPanjang:: operator-- ()
{   double panjang;
    double lebar;
    double tikteng_x;
    double tikteng_y;
    panjang=this->xmax-this->xmin;
    lebar=this->ymax-this->ymin;
    tikteng_x=this->xmax-panjang/2;
    tikteng_y=this->ymax-lebar/2;


    panjang/=2;
    lebar/=2;

    this->xmin=tikteng_x-panjang/2;
    this->xmax=tikteng_x+panjang/2;
    this->ymin=tikteng_y-lebar/2;
    this->ymax=tikteng_y+lebar/2;


}

void PersegiPanjang:: operator -- (int)
{   double panjang;
    double lebar;
    double tikteng_x;
    double tikteng_y;
    panjang=this->xmax-this->xmin;
    lebar=this->ymax-this->ymin;
    tikteng_x=this->xmax-panjang/2;
    tikteng_y=this->ymax-lebar/2;


    panjang/=2;
    lebar/=2;

    this->xmin=tikteng_x-panjang/2;
    this->xmax=tikteng_x+panjang/2;
    this->ymin=tikteng_y-lebar/2;
    this->ymax=tikteng_y+lebar/2;


}

float PersegiPanjang::operator[](int a){
    switch(a){
        case 0:
        return this->xmin;
        break;

        case 1:
        return this->xmax;
        break;

        case 2:
        return this->ymin;
        break;

        case 3:
        return this->ymax;
        break;
    }
}

