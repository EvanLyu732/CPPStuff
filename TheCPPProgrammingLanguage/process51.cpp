double add_all(double* array, int n)
{
  double s {0};
  for (int i = 0; i < n; ++i)
     s = s + array[i];
  return s;
}

struct Node {
  Node* next;
  int data;
};

int sum_elements(Node* first, Node* last)
{
  int s = 0;
  while (first != last) {
    s += first->data;
    first = first->next;
  }
  return s;
}

//function template version
template<typename Iter, typename Val>
Val sum(Iter first, Iter last)
{
  Val s = 0;
  while (first != last) {
    s = s+ *first;
    ++first;
  }
  return s;
}
