class Expr {
  public:
    Expr();
    Expr(const Expr&);
    virtual Expr* new_expr() = 0;
    virtual Expr* clone() = 0;
};

class Cond : public Expr {
  public:
    Cond();
    Cond(const Cond&);
    Cond* new_expr() override {return new Cond();}
    Cond* clone() override {return new Cond(*this);}
};

void user(Expr* p)
{
  Expr* p2 = p->new_expr();
}

/* void user2(Cond* pc) */

void user3(Cond* pc, Expr* pe)
{
  Cond* p1 = pc->clone();
  Cond* p2 = pe->clone();
}

class Shape {
public:
  virtual void rotate(int) = 0;
  virtual void draw() const=0;
  virtual bool is_closed() const=0;

  virtual ˜Shape();
};

class Point { };

class Circle : public Shape {
public:
  void rotate(int) override {}
  void draw() const override;
  bool is_closed() const override {return true;}

  Circle(Point p, int r);
private:
  Point center;
  int radius;
};

class Polygon : public Shape {
public:
  bool is_closed() const override {return true;}
};

class Character_device {
public:
  virtual int open(int opt)=0;
  virtual int close(int opt)=0;
  virtual int read(char* p,int n)=0;
  virtual int write(const char* p, int n)=0;
  virtual int ioctl(int ...) = 0;

  virtual ˜Character_device() {}
};
