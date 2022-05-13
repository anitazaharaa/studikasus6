#include <iostream>
using namespace std;

class array {
	public :
	void input();
	void proses();
	void output();

	private:
	string matkul[5], mahasiswa[10];
	int nilai[50]; //array 1 dimensi
	int n_tgs[5], n_uts, n_uas;
  int n;
  double n_akhir[50], rata[50], rata_tgs[50], rata_uts[50], rata_uas[50], rata_akhir[50];
};

void array::input(){
	cout<<"======================================="<<endl;
	cout<<"STUDI KASUS 6 "<<endl;
	cout<<"======================================="<<endl;
  cout<<"Masukkan Nama Mahasiswa = ";cin>>mahasiswa;
	cout<<"Masukkan Nama Mata Kuliah = ";cin>>matkul;
	cout<<"Masukkan nilai tugas = ";cin>>n_tgs;
	cout<<"Masukkan nilai uts = ";cin>>n_uts;
	cout<<"Masukkan nilai uas = ";cin>>n_uas;
	cout<<"======================================="<<endl;
}

void array::proses() {

  for (int i=0; i<n; i++) {
	  rata[i] = (n_tgs + n_uts + n_uas)/3;
    n_akhir[i] = (n_tgs*0.20)+(n_uts*0.35)+(n_uas*0.45);
    rata_tgs += n_tgs;
    rata_uts += n_uts;
    rata_uas += n_uas;
    rata_akhir += n_akhir;
    }
void array::output(){
  
	cout<<"\n====================="<<endl;
	cout<<"Nama Mahasiswa = "<<mahasiswa<<endl;
	cout<<"Matkul     = "<<matkul<<endl;
	cout<<"---------------------"<<endl;
	cout<<" Nilai "<<endl;
	cout<<"---------------------"<<endl;
}
	for(int i=0; i<n; i++){
	cout<<"  "<<nilai[i]<<endl;
	}
  {
	cout<<"---------------------"<<endl;
	cout<<"Nilai rata-rata = "<<rata<<endl;
	cout<<"====================="<<endl;
}
  
int main() {
	array a;
	a.input();
	a.proses();
	a.output();
};
