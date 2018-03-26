using namespace std;
class Carboat
{

  public:
  static string howmuch(int m, int n)
  {
    string s="[";
    int small, big;
    if(m<=n)
    {
      small=m;
      big=n;
    }
    else
    {
      small=n;
      big=m;
    }
    for(long int i=small;i<=big;i++)
    {
      if((i-2)%7==0&&(i-1)%9==0)
      {
        long int b=(i-2)/7;
        long int c=(i-1)/9;
        s=s+"[M: "+to_string(i)+" B: "+to_string(b)+" C: "+to_string(c)+"]";
      }
    }
    s+="]";
    return s;
  }
};
