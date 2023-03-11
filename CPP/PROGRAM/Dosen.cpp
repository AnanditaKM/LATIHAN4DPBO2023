#include "Mahasiswa.cpp"
class Dosen : public SivitasAkademik
{
private: // private atribut
    string NIP;
    string prodi;
    string fakultas;
    string pendidikan_terakhir;
    string keahlian;

public:
    Dosen(string NIK, string NIP, string nama, string jenis_kelamin, string asal_universitas, string fakultas,
          string email_edu, string pendidikan_terakhir, string keahlian) // CONSTRUCTOR
    {
        // set atribut dari Human
        setNIK(NIK);
        setNama(nama);
        setJenis_kelamin(jenis_kelamin);

        // set atribut dari SivitasAkademik
        setAsal_Universitas(asal_universitas);
        setEmail_edu(email_edu);

        // set atribut dari Mahasiswa
        this->NIP = NIP;
        this->fakultas = fakultas;
        this->pendidikan_terakhir = pendidikan_terakhir;
        this->keahlian = keahlian;
    }

    void setNIP(string b) // SET NIP
    {
        NIP = b;
    }

    void setFakultas(string d) // SET FAKULTAS
    {
        fakultas = d;
    }
    void setpendidikan_terakhir(string e) // SET FAKULTAS
    {
        pendidikan_terakhir = e;
    }
    void setkeahlian(string f) // SET FAKULTAS
    {
        keahlian = f;
    }

    string getkeahlian() // GET NIP
    {
        return keahlian;
    }
    string getpendidikan_terakhir() // GET NIP
    {
        return pendidikan_terakhir;
    }

    string getNIP() // GET NIP
    {
        return NIP;
    }

    string getFakultas() // GET FAKULTAS
    {
        return fakultas;
    }
    ~Dosen() // DESTRUCTOR
    {
    }
};