#include <iostream>
using namespace std;

class Mahasiswa{
public:
    string npm;
    string Nama_Lengkap;
    string Umur;
    string Kelas;
    string Hobi;
    string Cita_cita;
      void printData(){
        cout<<"NPM          \t= "<<npm<<endl;
        cout<<"Nama Lengkap \t= "<<Nama_Lengkap<<endl;
        cout<<"Umur         \t= "<<Umur<<endl;
        cout<<"Kelas        \t= "<<Kelas<<endl;
        cout<<"Hobi         \t= "<<Hobi<<endl;
        cout<<"Cita-cita    \t= "<<Cita_cita<<endl;
        }
};
 
int main(){
  int a = 0;
  cout << "ketik angka 1 untuk melihat biodata mahasiswa\n";
  cin >> a;
  switch (a) {
    case 1:
    Mahasiswa Haikal;
    Haikal.npm="2210631170029";
    Haikal.Nama_Lengkap="Haikal Syauqi Rabbani";
    Haikal.Umur="18 tahun";
    Haikal.Kelas="1D";
    Haikal.Hobi="Bermain game dan mendengarkan musik";
    Haikal.Cita_cita="Kaya raya";
    Haikal.printData();
    break;
  }
	return 0;
}