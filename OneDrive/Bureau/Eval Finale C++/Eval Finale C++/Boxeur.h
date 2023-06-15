#pragma once
#include <string>
using namespace std;

class Boxeur {
private:
    string name;
    double weight;

public:
    Boxeur(const string& name, double weight);

    const string& getName() const;
    double getWeight() const;
    void setWeight(double newWeight);
};

