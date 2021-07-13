class Ival_box {
  protected:
    int val;
    int low, high;
    bool changed (false);
  public:
    Ival_box(int II, int hh) :val{II}, low{II}, high{hh} {}

    virtual int get_value() {changed = false; return val;} //for application
    virtual void set_value(int i) {changed = true; val = i;} //for user
    virtual void reset_value(int i) {changed = false; val = i;} //for application
    virtual void prompt() {}
    virtual bool was_changed() const {return changed;}

    virtual ˜Ival_box() {};
};

void interact(Ival_box* pb)
{
  pb->prompt();
  int i = pb->get_value();
  if (pb->was_changed()) {
  }
  else {
  }
}

void some_fct()
{
  unique_ptr<Ival_box> p1 {new Ival_slider{0,5}};
  interact{p1.get()};

  unique_ptr<Ival_box> p2 {new Ival_slider{1,12}};
  interact{p2.get()};
}


class Ival_slider : public Ival_box {
  private:
  
  public:
    Ival_slider(int, int);
    int get_value() override;
    void prompt() override;
};
