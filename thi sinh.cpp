#include <iostream>
#include <string>
using namespace std;

class ThiSinh {
private:
    string maTS, hoTen;
    float diemToan, diemLy, diemHoa;

public:
    ThiSinh() {
        maTS = hoTen = "";
        diemToan = diemLy = diemHoa = 0;
    }
    ThiSinh(string ma, string ten, float toan, float ly, float hoa) {
        maTS = ma;
        hoTen = ten;
        diemToan = toan;
        diemLy = ly;
        diemHoa = hoa;
    }

    void nhapThiSinh() {
        cout << "Nhap ma thi sinh: ";
        getline(cin, maTS);

        cout << "Nhap ho ten: ";
        getline(cin, hoTen);

        cout << "Nhap diem toan: ";
        cin >> diemToan;

        cout << "Nhap diem ly: ";
        cin >> diemLy;

        cout << "Nhap diem hoa: ";
        cin >> diemHoa;

        cin.ignore(); // xóa kí t? '\n' tru?c dó d? getline sau dó không b? trôi
    }

    void xuatThiSinh() {
        cout << "Ma thi sinh: " << maTS << endl;
        cout << "Ho ten: " << hoTen << endl;
        cout << "Diem toan: " << diemToan << endl;
        cout << "Diem ly: " << diemLy << endl;
        cout << "Diem hoa: " << diemHoa << endl;
        cout << "Tong diem: " << tinhTongDiem() << endl;
    }

    float tinhTongDiem() {
        return diemToan + diemLy + diemHoa;
    }

    bool operator<(const ThiSinh& ts) const {
        return hoTen < ts.hoTen;
    }

    bool operator==(const ThiSinh& ts) const {
        return hoTen == ts.hoTen;
    }
};

int main() {
    int n;
    cout << "Nhap so luong thi sinh: ";
    cin >> n;

    ThiSinh* danhSachThiSinh = new ThiSinh[n];

    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin thi sinh thu " << i + 1 << endl;
        danhSachThiSinh[i].nhapThiSinh();
    }

    // Tìm sinh viên có t?ng di?m cao nh?t
    ThiSinh* sinhVienMax = &danhSachThiSinh[0];
    for (int i = 1; i < n; i++) {
        if (danhSachThiSinh[i].tinhTongDiem() > sinhVienMax->tinhTongDiem()) {
            sinhVienMax = &danhSachThiSinh[i];
        }
    }
    cout << "Thong tin thi sinh co tong diem cao nhat:" << endl;
    sinhVienMax->xuatThiSinh();
}
