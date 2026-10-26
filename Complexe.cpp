#include "Complexe.h"
#include <iostream>
#include <math.h>
using namespace std;
int Complexe::num_Zfollower = 0;
Complexe::Complexe(double re, double img):num_Z(++num_Zfollower), re(re), img(img) {}
Complexe::Complexe(const Complexe& N):num_Z(++num_Zfollower),re(N.re), img(N.img){}
Complexe& Complexe::operator=(const Complexe& Z)
{
    if (this != &Z) {
        this->re = Z.re;
        this->img = Z.img;
    }
    return *this;
}
Complexe Complexe::operator+(Complexe h)
{
   // Complexe* NC = new Complexe(0, 0);
  //  NC->re = this->re + h.re;
  //  NC->img = this->img + h.img;
    return Complexe(this->re + h.re, this->img + h.img);
}

Complexe Complexe::operator+(double a)
{
    //Complexe* NC = new Complexe(0, 0);
    //NC->re = this->re + a;
   // NC->img = this->img;
    return Complexe(this->re + a, this->img);
}

Complexe Complexe::operator-(Complexe h) {
    //Complexe* NC = new Complexe(0, 0);
   // NC->re = this->re - h.re;
   // NC->img = this->img - h.img;
    return Complexe(this->re - h.re, this->img - h.img);
}
Complexe Complexe::operator-(double a)
{
    //Complexe* NC = new Complexe(0, 0);
    //NC->re = this->re - a;
   // NC->img = this->img;
    return Complexe(this->re - a, this->img);
}
Complexe Complexe::operator*(Complexe h) {
    //Complexe* NC = new Complexe(0, 0);
   // NC->re = (this->re * h.re) - (this->img * h.img);
   // NC->img = (this->re * h.img) + (this->img * h.re);
    return Complexe((this->re * h.re) - (this->img * h.img), (this->re * h.img) + (this->img * h.re));

}
Complexe Complexe::operator*(double r)
{
    //Complexe* NC = new Complexe(0, 0);
   // NC->re =this->re*r;
    //NC->img = this->img * r;
    return Complexe(this->re * r, this->img * r);
}
Complexe Complexe::operator/(Complexe h) {
    //Complexe* NC = new Complexe(0, 0);
    //NC->re = ((this->re * h.re) - (this->img * h.img)) / (pow(h.re, 2) + pow(h.img, 2));
    //NC->img = ((this->img * h.re) - (this->re * h.img)) / (pow(h.re, 2) + pow(h.img, 2));
    double d = pow(h.re, 2) + pow(h.img, 2);
    if (h==0)
    {
        cout << "Erreur : division par zero !" << endl;
        return Complexe(0, 0);
    }
    else {
        return Complexe(((this->re * h.re) + (this->img * h.img)) / d, ((this->img * h.re) - (this->re * h.img)) / d);
    }
}
Complexe Complexe::operator/(double r)
{
    if (r==0)
    {
        cout << "Erreur : division par zero !" << endl;
        return Complexe(0,0);
    }
    else {
        //Complexe* NC = new Complexe(0, 0);
       // NC->re = this->re / r;
        //NC->img = this->img / r;

        return Complexe(this->re / r, this->img / r);
    }
    
}
bool Complexe::operator==(Complexe Z)
{
       return this->re == Z.re && this->img == Z.img;
}


bool Complexe::operator!=(Complexe Z)
{
    return this->re != Z.re || this->img != Z.img;;
}

bool Complexe::operator>(Complexe Z)
{
    double m1 = sqrt(pow(this->re,2)+ pow(this->img, 2));
    double m2 = sqrt(pow(Z.re, 2) + pow(Z.img, 2));
    
        return m1 > m2;
}

bool Complexe::operator>=(Complexe Z)
{
    double m1 = sqrt(pow(this->re, 2) + pow(this->img, 2));
    double m2 = sqrt(pow(Z.re, 2) + pow(Z.img, 2));
    
        return m1 >= m2;
}
bool Complexe::operator<(Complexe Z)
{
    double m1 = sqrt(pow(this->re, 2) + pow(this->img, 2));
    double m2 = sqrt(pow(Z.re, 2) + pow(Z.img, 2));
    
        return m1 < m2;
}

bool Complexe::operator<=(Complexe Z)
{
    double m1 = sqrt(pow(this->re, 2) + pow(this->img, 2));
    double m2 = sqrt(pow(Z.re, 2) + pow(Z.img, 2));
    
       return  m1 <= m2;
}

bool Complexe::operator==(double r)
{
    return img == 0 && this->re == r;
}

bool Complexe::operator!=(double r)
{
        return img != 0 || this->re != r;
}

bool Complexe::operator>(double r)
{
    if (r < 0){
        r = -r;
    }
   
    double m1 = sqrt(pow(this->re, 2) + pow(this->img, 2));

        return m1 > r;

}

bool Complexe::operator>=(double r)
{
    if (r < 0){
        r = -r;
     }
   
        double m1 = sqrt(pow(this->re, 2) + pow(this->img, 2));
        return m1 >= r;
}

bool Complexe::operator<(double r)
{
    if (r < 0){
        r = -r;
    }
   
        double m1 = sqrt(pow(this->re, 2) + pow(this->img, 2));

        return m1 < r;
}

bool Complexe::operator<=(double r)
{
    if (r < 0){
        r = -r;
    }
   
        double m1 = sqrt(pow(this->re, 2) + pow(this->img, 2));

        return m1 <= r;
}

// utilisation des opérateurs == , != , < ,<= , > , >= dans la méthode Comparaison entre deux complexes

void Complexe::Comparaison(Complexe U)
{
    if (*this == U)
        cout << "C" << this->num_Z << " = C" << U.num_Z << endl;
    else
        cout << "C" << this->num_Z << " != C" << U.num_Z;

    if (*this > U)
        cout << " avec C" << this->num_Z << " > C" << U.num_Z << endl;
    else if (*this < U)
        cout << " avec C" << this->num_Z << " < C" << U.num_Z << endl;
}

// utilisation des opérateurs == , != , < ,<= , > , >= dans la méthode Comparaison entre un complexe et un réel

void Complexe::Comparaison(double k)
{   
    if (*this == k)
        cout << "C" << this->num_Z << " = " << k << endl;
    else
        cout << "C" << this->num_Z << " != " << k;

    if (*this > k)
        cout << " avec C" << this->num_Z << " > " << k << endl;
    else if (*this < k)
        cout << " avec C" << this->num_Z << " < " << k << endl;
}

void Complexe::afficher() const {
    if (this->re == 0 && this->img == 0) {
        cout << "C" << this->num_Z << " est un nombre complexe nul C = 0 + 0i" << endl;
    }
    if (this->re != 0 && this->img != 0) {
        if (this->img < 0)
            cout << "C" << this->num_Z << " = " << re << img << "i" << endl;
        else cout << "C" << this->num_Z << " = " << re << "+" << img << "i" << endl;
    }

    if (this->re != 0 && this->img == 0) {
            cout << "C"<< this->num_Z << " = " << re << endl;
    }
    if (this->img != 0 && this->re == 0) {
        cout << "C" << this->num_Z << " = " << img << "i" << endl;
    }       
    
}

Complexe::~Complexe()
{
}