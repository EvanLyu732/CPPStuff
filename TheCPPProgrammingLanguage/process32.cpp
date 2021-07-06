class Vector {
  public:
    Vector(int s) :elem{new double[s]}, sz{s} {};
    ˜Vector() {delete[] elem;}
  private:
    double* elem; 
    int sz;
}; 
