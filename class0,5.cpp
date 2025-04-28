# include <iostream>
using namespace std;

class persegipanjang{
    private:
    string panjang;
    string lebar;
    int luas;

    public:
    void inputdata()
    {
        cout << "Masukkan panjangnya = ";
        cin >> panjang;
        cout << "Masukkan lebarnya = ";
        cin >> lebar;
    }
    void outputdata()
    {
        cout << "luasnya = " << luas <<endl;
    }
