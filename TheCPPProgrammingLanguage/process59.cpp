//Matirx template
template<typename T, size_t N>
class Matrix {
public:
  static constexpr size_t order = N;
  using value_type = T;
  using iterator = typename std::vector<T>::iterator;
  using const_iterator = typename std::vector<T>::const_iterator;

  Matrix() = default;
  Matrix(Matrix&&) = default;
  Matrix& operator = (Matrix&&) = default;
  Matrix(Matrix const&) = default;
  Matrix& operator = (Matrix const&) = default;
  ËœMatrix() = default;

  template<typename U>
    Matrix(const Matrix_ref<U,N>&);
  template<typename U>
    Matrix& operator = (const Matrix_ref<U,N>&);
  template<typename... Exts>
    explicit Matrix(Exts... exts);
  Matrix(Matrix_initializer<T,N>);
  Matrix& operator=(Matrix_initializer<T,N>);
  template<typename U>
    Matrix(initializer_list<U>) = delete;
  template<typename U>
  // specify the extents
  // initialize from list // assign from list
  // donÕt use {} except for elements
  Matrix& operator=(initializer_list<U>) = delete;
  static constexpr size_t order() { return N; } 
  size_t extent(size_t n) const { return desc.extents[n]; } 
  size_t size() const { return elems.size(); } 
  const Matrix_slice<N>& descriptor() const { return desc; }
  T* data() { return elems.data(); } 
  const T* data() const { return elems.data(); }

private:
  Matrix_slice<N> desc;
  vector<T> elems;
};
