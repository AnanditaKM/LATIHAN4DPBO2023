#include <bits/stdc++.h>
using namespace std;

class Course
{
private: // private atribut
    string nama_matakuliah;
    string kode_matakuliah;

public:
    Course() // CONSTRUCTOR
    {
    }
    Course(string nama_matakuliah, string kode_matakuliah) // CONSTRUCTOR
    {
        this->nama_matakuliah = nama_matakuliah;
        this->kode_matakuliah = kode_matakuliah;
    }

    void setnama_matakuliah(string b) // SET Asal_Universitas
    {
        nama_matakuliah = b;
    }

    string getnama_matakuliah() // GET Asal_Universitas
    {
        return nama_matakuliah;
    }
    void setkode_matakuliah(string c) // SET Asal_Universitas
    {
        kode_matakuliah = c;
    }

    string getkode_matakuliah() // GET Asal_Universitas
    {
        return kode_matakuliah;
    }

    ~Course() // DESTRUCTOR
    {
    }
};