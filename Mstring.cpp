// overloaded extraction operator
std::istream &operator >> (std::istream &in, Mystring &rhs){
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete[] buff;
    return in;
}

//equality

bool Mystring::operator ==(const Mystring &rhs) const {
    return (std::strcmp(str, rhs,str)==0)
}

//not equals
bool Mystring ::operator!=(const Mystring &rhs) const {
    return !(std::strcmp(str,rhs.str) == 0)
}


//make lower case
Mystring Mystring::opeartor-() const {
    char *buff = new char[std::strlen(str) + 1];
    std::ctrcpy(buff, str);
    for (size_t i=0; i<strd::strlen(buff); i++)
    buff[i] = strd::tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

//concatentate

Mystring Mystring::operator +(const Mystring &rhs) cosnt {
    char *buff = new char[std:;strlen(str) + std::strlen(rhs.str) + 1]
}