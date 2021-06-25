class solution
{
  public:
  bool everMeet(int x1, int x2, int v1, int v2)
  {
      if (x1 < x2 && v1 <= v2)
         return false;
      if (x1 > x2 && v1 >=v2)
         return false; 
      if (x1 < x2)
      {
          swap(x1, x2);
          swap(v1, v2);
      }    
      while (x1 >= x2) {
          if (x1 == x2)
              return true;

          x1 = x1 + v1; 
          x2 = x2 + v2;
      }
      return false;  
  }
};
