#include "SivitasAkademik.cpp"
class Mahasiswa : public SivitasAkademik
{
private: // private atribut
    string NIM;
    string prodi;
    string fakultas;

public:
    Mahasiswa(string NIK, string NIM, string nama, string jenis_kelamin, string asal_universitas, string fakultas, string email_edu) // CONSTRUCTOR
    {
        // set atribut dari Human
        setNIK(NIK);
        setNama(nama);
        setJenis_kelamin(jenis_kelamin);

        // set atribut dari SivitasAkademik
        setAsal_Universitas(asal_universitas);
        setEmail_edu(email_edu);

        // set atribut dari Mahasiswa
        this->NIM = NIM;
        this->fakultas = fakultas;
    }

    void setNIM(string b) // SET NIM
    {
        NIM = b;
    }

    void setFakultas(string d) // SET FAKULTAS
    {
        fakultas = d;
    }

    string getNIM() // GET NIM
    {
        return NIM;
    }

    string getFakultas() // GET FAKULTAS
    {
        return fakultas;
    }
    ~Mahasiswa() // DESTRUCTOR
    {
    }
};