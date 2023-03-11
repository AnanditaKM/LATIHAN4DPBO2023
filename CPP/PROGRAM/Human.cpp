#include <bits/stdc++.h>

using namespace std;

class Human
{
private: // private atribut
    string NIK;
    string nama;
    string jenis_kelamin;

public:
    Human() // CONSTRUCTOR
    {
    }

    void setNIK(string b) // SET NIK
    {
        NIK = b;
    }
    void setNama(string c) // SET nama
    {
        nama = c;
    }
    void setJenis_kelamin(string d) // SET jenis_kelamin
    {
        jenis_kelamin = d;
    }

    string getNIK() // GET NIK
    {
        return NIK;
    }
    string getNama() // GET nama
    {

        return nama;
    }
    string getJenis_kelamin() // GET jenis_kelamin
    {
        return jenis_kelamin;
    }
    ~Human() // DESTRUCTOR
    {
    }
};