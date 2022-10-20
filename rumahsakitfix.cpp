// Nama Anggota :
// 1. Muhammad Aziz Almuhadi (2217051108)
// 2. Ivan Aditya (2217051147)
// 3. Firman Bintang Partogi Situmorang (2217051080)


#include<iostream>
using namespace std;
int biaya[10]{350000,550000,25000,50000,400000,300000,105000,750000,900000,200000};
int umur,telp,pl,jk,pp;
string nama,alamat;
//header
void header(){
    cout<<"-------------------------------------------------"<<endl;
    cout<<"                  Rumah Sakit                    "<<endl;
    cout<<"-------------------------------------------------"<<endl;
}
//footer
void footer(){
    cout<<"-------------------------------------------------"<<endl;
    cout<<"   Terima Kasih Sudah Menggunakan Jasa Kami      "<<endl;
    cout<<"-------------------------------------------------"<<endl;
}

//input  data pasien
 void pasien(){
     cout<<"Masukan Nama Pasien \t:";getline(cin,nama);
     cout<<"Masukan Umur Pasien \t:";cin>>umur;cin.ignore();
     cout<<"Masukan Alamat Pasien\t:";getline(cin,alamat);
     cout<<"Masukan No Telp Aktif\t:";cin>>telp;cin.ignore();


 }




//void penyakit
//1 diabetes
void diabetes(){
    system("cls");
    cout<<"diabetes\n";
    cout<<"Biaya Pengobatan : Rp. 350.000\n";
}
//2 kanker
void kanker(){
    system("cls");
    cout<<"kanker\n";
    cout<<"Biaya Pengobatan : Rp. 550.000\n";
}
// 3 flu
void flu(){
    system("cls");
    cout<<"flu\n";
    cout<<"Biaya Pengobatan : Rp. 25.000\n";
}
//4 demam
void demam(){
    system("cls");
    cout<<"demam\n";
    cout<<"Biaya Pengobatan : Rp. 50.000 \n ";

}
//5 kolestrol
void kolestrol(){
    system("cls");
    cout<<"kolestrol\n";
    cout<<"Biaya PEngobatan : Rp. 400.000\n";
}
//void dokter
//1 d umum
void d_umum(){
    system("cls");
    cout<<"dokter umum\n";
    cout<<"Biaya Konsultasi : Rp. 300.000\n";
}
//2 d anak
void d_anak(){
    system("cls");
    cout<<"Dokter anak\n";
    cout<<"Biaya Konsultasi : Rp. 105.000\n";
}
//3 d penyakit dalam
void d_penyakit_dalam(){
    system("cls");
    cout<<"Dokter penyakit dalam\n";
    cout<<"Biaya Konsultasi : Rp. 750.000\n";
}
//4 d bedah
void d_bedah(){
    system("cls");
    cout<<"Dokter bedah\n";
    cout<<"Biaya Konsultasi : Rp. 900.000\n";
}
//5 d THT
void d_THT(){
    system("cls");
    cout<<"Dokter THT\n";
    cout<<"Biaya Pendaftaran : Rp. 200.000\n";
}
//pengobatan
void konsultasi_dokter(){
  

    cout<<"Pilih Jenis Konsultasi\n";
    cout<<"1.Dokter Umum\n";
    cout<<"2.Dokter Anak\n";
    cout<<"3.Dokter Penyakit Dalam\n";
    cout<<"4.Dokter Bedah\n";
    cout<<"5.Dokter THT\n";

    cout<<"Pilih Jenis Konsultasi: ";cin>>jk;

    if(jk==1){
        d_umum();
    }else if(jk==2){
        d_anak();
    }else if(jk==3){
        d_penyakit_dalam();
    }else if(jk==4){
        d_bedah();
    }else if(jk==5){
        d_THT();
    }
}
//konsultasi
void pengobatan(){

   

    cout<<"Pilih Jenis Penyakit\n";
    cout<<"1.Diabetes\n";
    cout<<"2.Kanker\n";
    cout<<"3.Flu\n";
    cout<<"4.Demam\n";
    cout<<"5.Kolestrol\n";

    cout<<"Pilih Jenis Pengobatan: ";cin>>pp;
    if(pp==1){
        diabetes();
    }else if(pp==2){
        kanker();
    }else if(pp==3){
        flu();
    }else if(pp==4){
        demam();
    }else if(pp==5){
        kolestrol();
    }

}
//Struk Rumah Sakit
void struk(){

cout<<"-------------------------------------------------"<<endl;
cout<<"			STRUK         				"<<endl;
cout<<"-------------------------------------------------"<<endl;
cout<<"Nama Pasien \t: "<<nama<<endl;
cout<<"Umur Pasien \t: "<<umur<<endl;
cout<<"Alamat Pasien \t: "<<alamat<<endl;
cout<<"No Telp Aktif \t: "<<telp<<endl;
if(pl==1){
        cout<<"Bayar \t\t: "<<biaya[jk+4]<<endl;

    }else if(pl==2){
        cout<<"Bayar \t\t: "<<biaya[pp-1]<<endl;
    }


}

//program
void program_layanan(){
    char ulang;

    do{
    system("cls");
    header();

    pasien();
    system("cls");
    header();

    

    cout<<"Pilih layanan\n";
    cout<<"1.Konsultasi Dokter\n";
    cout<<"2.Pengobatan\n";
    cout<<"Pilihan: ";cin>>pl;

    if(pl==1){
        system("cls");
        konsultasi_dokter();

    }else if(pl==2){
        system("cls");
        pengobatan();
    }

	struk();
    cout<<"Kembali Ke menu utama?(Y/T)";cin>>ulang;cin.ignore();
    }while(ulang == 'y' || ulang == 'Y');
    //cout<<endl;
    system("cls");
    footer ();
}

int main(){

    program_layanan();

    return 0;
}
