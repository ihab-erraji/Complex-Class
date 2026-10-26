#pragma once

class Complexe
{
public:
    Complexe(double, double);
    Complexe(const Complexe&);
    Complexe& operator=(const Complexe&);
    Complexe operator+(const Complexe&);
    Complexe operator+(double);
    Complexe operator-(const Complexe&);
    Complexe operator-(double);
    Complexe operator*(const Complexe&);
    Complexe operator*(double);
    Complexe operator/(const Complexe&);
    Complexe operator/(double);
    bool operator==(const Complexe&);
    bool operator!=(const Complexe&);   
    bool operator>(const Complexe&); 
    bool operator>=(const Complexe&);
    bool operator<(const Complexe&);
    bool operator<=(const Complexe&);
    bool operator==(double);
    bool operator!=(double);
    bool operator>(double);
    bool operator>=(double);
    bool operator<(double);
    bool operator<=(double);
    void Comparaison(const Complexe&);
    void Comparaison(double);
    void afficher() const;
    friend Complexe operator/(double, const Complexe&);
    ~Complexe();

private:
    const int num_Z;
    static int num_Zfollower;
    double re;
    double img;
};

Complexe operator/(double, const Complexe&);
