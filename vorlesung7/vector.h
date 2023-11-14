


class Vector{

  private :
  int size ;
  double *feld;
  bool isOkey(int index);

  public :
  Vector(int size);
  Vector(const Vector &orig);
  ~Vector();
  void set(int index, double val);
  double get(int index);
};