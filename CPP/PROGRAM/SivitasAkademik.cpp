#include "Human.cpp"
class SivitasAkademik : public Human
{
private: // private atribut
    string Asal_Universitas;
    string Email_edu;

public:
    SivitasAkademik() // CONSTRUCTOR
    {
    }

    void setAsal_Universitas(string b) // SET Asal_Universitas
    {
        Asal_Universitas = b;
    }
    void setEmail_edu(string c) // SET Email_edu
    {
        Email_edu = c;
    }

    string getAsal_Universitas() // GET Asal_Universitas
    {
        return Asal_Universitas;
    }
    string getEmail_edu() // GET Email_edu
    {

        return Email_edu;
    }

    ~SivitasAkademik() // DESTRUCTOR
    {
    }
};