template<typename N>
struct Node_base {
  N* left_child;
  N* right_child;

  Node_base();

  void add_left(N* p)
  {
    if (left_child == nullptr)
        left_child = p;
  }
};


struct Node_base_double {
  double val;
  Node_base_double* left_child;
  Node_base_double* right_child;
};


template<typename Val>
struct Node : Node_base<Node<Val>> {
  Val v;
  Node(Val vv);
};
