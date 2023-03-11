#include "Prodi.cpp"

int main()
{
     Course course1("ALGORITMA", "01");
     Course course2("MANAJEMEN", "02");
     Course course3("DasarBOGA", "03");

     Mahasiswa mhs1("00000", "2101114", "anandita", "perempuan", "upi", "fpmipa", "ananupi.edu");

     Mahasiswa mhs2("000001", "2101115", "Do Kyungsoo", "LAKI", "upi", "fpmipa", "Kyungsoo@upi.edu");

     Mahasiswa mhs3("00002", "2101116", "Suho", "LAKI", "upi", "FPEB", "SUHOLKAY@upi.edu");
     Mahasiswa mhs4("00003", "2101117", "Sohun", "LAKI", "upi", "FPTK", "sohunyamin@upi.edu");

     Dosen dsn1("00004", "1234567", "KungFu", "cowok", "UPI", "FPMIPA", "kungfu@upi.edu", "S3", "KODING 100 BAHASA");
     Dosen dsn2("00005", "2345678", "pobi", "cowok", "UPI", "FPEB", "pobi@upi.edu", "S2", "MANAJEMEN PERKANTORAN");
     Dosen dsn3("00008", "256784", "papung", "cowok", "UPI", "FPTK", "papung@upi.edu", "S2", "Pengolahan Makanan");
     Prodi prodi1("ILKOM", "09");
     Prodi prodi2("MABIS", "08");
     Prodi prodi3("TABOG", "06");
     prodi1.list_course.push_back(course1);
     prodi1.list_dosen.push_back(dsn1);
     prodi1.list_mahasiswa.push_back(mhs1);
     prodi1.list_mahasiswa.push_back(mhs2);

     prodi2.list_course.push_back(course2);
     prodi2.list_dosen.push_back(dsn2);
     prodi2.list_mahasiswa.push_back(mhs3);

     prodi3.list_course.push_back(course3);
     prodi3.list_dosen.push_back(dsn3);
     prodi3.list_mahasiswa.push_back(mhs4);
     list<Prodi> list_Prodi;

     list_Prodi.push_back(prodi1);
     list_Prodi.push_back(prodi2);
     list_Prodi.push_back(prodi3);

     for (Prodi i : list_Prodi)
     {
          cout << "==========================================================" << endl;
          cout << "===                 "
                  "list program studi"
               << "                 ==="
               << endl;
          cout << "==========================================================" << endl;
          cout << "===                      " << i.getnama_prodi() << "                         ===" << endl;
          cout << "===                        " << i.getkode_prodi() << "                          ===" << endl;

          for (Course j : i.list_course)
          {
               cout << "==========================================================" << endl;
               cout << "===                 "
                    << "List Mata Kuliah"
                    << "                   ==="
                    << endl;
               cout << "===                    " << j.getnama_matakuliah() << "                       ===" << endl;
               cout << "===                        " << j.getkode_matakuliah() << "                          ===" << endl;
          }
          for (Dosen j : i.list_dosen)
          {
               cout << "==========================================================" << endl;
               cout << "===                      "
                    << "DOSEN"
                    << "                         ==="
                    << endl;
               cout << "==========================================================" << endl;
               cout << "NIK                : " << j.getNIK() << endl;
               cout << "NIP                : " << j.getNIP() << endl;
               cout << "Nama               : " << j.getNama() << endl;
               cout << "Jenis Kelamin      : " << j.getJenis_kelamin() << endl;
               cout << "Asal Universitas   : " << j.getAsal_Universitas() << endl;
               cout << "Fakultas           : " << j.getFakultas() << endl;
               cout << "Email Edu          : " << j.getEmail_edu() << endl;
               cout << "Pendidikan Terakhir: " << j.getpendidikan_terakhir() << endl;
               cout << "Keahlian           : " << j.getkeahlian() << endl;
          }
          for (Mahasiswa j : i.list_mahasiswa)
          {
               cout << "==========================================================" << endl;
               cout << "===                   "
                    << "MAHASISWA"
                    << "                        ==="
                    << endl;
               cout << "==========================================================" << endl;
               cout << " NIK              : " << j.getNIK() << endl;
               cout << " NIM              : " << j.getNIM() << endl;
               cout << " Nama             : " << j.getNama() << endl;
               cout << " Jenis Kelamin    : " << j.getJenis_kelamin() << endl;
               cout << " Asal Universitas : " << j.getAsal_Universitas() << endl;
               cout << " Fakultas         : " << j.getFakultas() << endl;
               cout << " Email Edu        : " << j.getEmail_edu() << endl;
          }
     }
}