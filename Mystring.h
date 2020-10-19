

class Mystring{
Mystring(const char *s);    //overloaded constructor
Mystring(const Mystring &source); // copy constructor
Mystring(Mystring &&source); // Move contructor
~Mystring();                 //destructor

Mystring &operator = (const Mystring &rhs); //copy assignment
Mystring &operator = (Mystring &&rhs); //move assignment

void display() const;

int get_length() const; // getters
const char *get_str() const;


// Overloaded operator member methods

Mystring operator-() const; //make lowercase
Mystring operator+(const Mystring &rhs) const; //concatenate
bool operator == (const Mystring &rhs) const; //equals
bool operator != (const MYstring &rhs) const; // not equals
bool operator < (const Mystring &rhs) const;  //less than
bool operator > (const Mystring &rhs) const; //greater than
Mystring &operator += (const Mystring &rhs); //s1 +=s2; concat and assign
Mystring operator*(int n) const; //s1 = s2* 3; repeat s2 n times
Mystring &operator *=(int n); //s1 *= 3; s1 = s1 *3 
Mystring &operator ++(); //pre-increment ++s1
Mystring operator++(int); //post-increment s1++;
}
