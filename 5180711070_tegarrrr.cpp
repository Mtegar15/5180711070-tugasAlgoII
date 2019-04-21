
#include <iostream>

using namespace std;
int pangkat(int agka, int nilai ){
 if (nilai==0){
  return (1);
 }
 else{
  return (agka*pangkat (agka, nilai-1));
 }
}
main()
 {
 int angka, pangkatnya, hasil;
 cout<<"Masukkan Angka    : ";
 cin>>angka;
 cout<<"Masukkan Panggkat : ";
 cin>>pangkatnya;
 hasil = pangkat(angka, pangkatnya);
 cout<<"Hasilnya          : "<<hasil;

}
