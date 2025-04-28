# include <iostream>
using namespace std;

class Mobil{
    public:
        string nama_mobil;
        string tipe_mobil;

    private:
    int harga_mobil;

    public:
    void inputData()
    {
        cout << "Masukkan nama mobil: ";
        cin >> nama_mobil;
        cout << "Masukkan tipe mobil: ";
        cin >> tipe_mobil;
        cout << "Masukkan harga mobil: ";
        cin >> harga_mobil;
    }
    void outputData(){
        cout << "Harga mobil = " << harga_mobil << endl;
    }
};
int main()
{
    Mobil nazar;
    nazar.inputData();
    cout << "nama mobil = " << nazar.nama_mobil << endl;
    cout << "tipe mobil = " << nazar.tipe_mobil << endl;
    nazar.inputData();
    
}
