class Vector{
private:
    double* elem;
    int sz;
public:
    Vector(int s); //constructor
    ˜Vector() {delete[] elem;} //destructor

    Vector(const Vector& a); //copy constructor
    Vector& operator=(const Vector& a); //copy assignment

    double& operator[](int i);
    const double& opeartor[](int i) const;

    int size() const;
};


