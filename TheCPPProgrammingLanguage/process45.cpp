class Buffer {
public:
  char& opeartor[](int i);
protected:
  char& access(int i);
};

class Circular_buffer : public Buffer {
public:
  void reallocate(char* p, int s); //char location and size
};

/* void Circular_buffer::reallocate(char* p, int s) */
/* { */
/*   int old_sz = 10; */
/*   for (int i=0; i!=old_sz; ++i) */
/*     p[i] = access(i); */
/* } */

/* void f(Buffer& b) */
/* { */
/*   b[3]='b'; */
/*   b.access(3)='c'; */
/* } */

class Buffer2 {
protected:
  char a[128];
};


class Linked_buffer2 : public Buffer2 {
};

class Circular_buffer2 : public Buffer {
  void f(Linked_buffer2* p)
  {
    a[0]=0;
    p->a[0]=0;
  }
};
