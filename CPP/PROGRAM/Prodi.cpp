#include "Course.cpp"
#include "Dosen.cpp"
class Prodi
{
private: // private atribut
    string nama_prodi;
    string kode_prodi;

public:
    list<Course> list_course;
    list<Mahasiswa> list_mahasiswa;
    list<Dosen> list_dosen;

    Prodi() // CONSTRUCTOR
    {
    }
    Prodi(string nama_prodi, string kode_prodi) // CONSTRUCTOR
    {
        this->nama_prodi = nama_prodi;
        this->kode_prodi = kode_prodi;
    }
    void setnama_prodi(string b) // SET nama_prodi
    {
        nama_prodi = b;
    }
    void setkode_prodi(string c) // SET kode_prodi
    {
        kode_prodi = c;
    }

    string getnama_prodi() // GET nama_prodi
    {
        return nama_prodi;
    }
    string getkode_prodi() // GET kode_prodi
    {

        return kode_prodi;
    }

    ~Prodi() // DESTRUCTOR
    {
    }
};