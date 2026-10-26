#pragma once

class Complexe
{
public:
    Complexe(double, double);
    Complexe(const Complexe&);
    Complexe& operator=(const Complexe&);
    Complexe operator+(Complexe);
    Complexe operator+(double);
    Complexe operator-(Complexe);
    Complexe operator-(double);
    Complexe operator*(Complexe);
    Complexe operator*(double);
    Complexe operator/(Complexe);
    Complexe operator/(double);
    bool operator==(Complexe);
    bool operator!=(Complexe);   
    bool operator>(Complexe); 
    bool operator>=(Complexe);
    bool operator<(Complexe);
    bool operator<=(Complexe);
    bool operator==(double);
    bool operator!=(double);
    bool operator>(double);
    bool operator>=(double);
    bool operator<(double);
    bool operator<=(double);
    void Comparaison(Complexe);
    void Comparaison(double);
    void afficher() const;
    ~Complexe();

private:
    const int num_Z;
    static int num_Zfollower;
    double re;
    double img;
};

