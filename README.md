# CHƯƠNG TRÌNH QUẢN LÝ THÔNG TIN SÁCH BẰNG NGÔN NGỮ C

## 1. Giới thiệu
Trong quá trình học môn **Lập trình C**, việc nắm vững cách sử dụng
`struct` và thao tác với file là rất quan trọng.  
Đề tài này xây dựng một chương trình cho phép **ghi và đọc thông tin sách**
từ file nhị phân, giúp sinh viên hiểu rõ hơn về quản lý dữ liệu trong C.

## 2. Mục tiêu đề tài
- Làm quen với cấu trúc `struct` trong ngôn ngữ C  
- Thực hành đọc/ghi file nhị phân  
- Áp dụng kiến thức đã học vào bài toán quản lý thông tin sách  
- Rèn luyện tư duy lập trình có cấu trúc

## 3. Công nghệ sử dụng
- Ngôn ngữ: **C**
- Trình biên dịch: **GCC**
- Kiểu file: File nhị phân (`.dat`)

## 4. Cấu trúc chương trình
├── write_sach.c // Ghi dữ liệu sách vào file
├── struct_read_sach.c // Đọc dữ liệu sách từ file
├── sach.dat // File dữ liệu (tạo tự động)
└── README.md

## 5. Cấu trúc dữ liệu
Chương trình sử dụng cấu trúc `struct` để lưu thông tin sách:

```c
struct Sach {
  char masach[20];
	char tieude[100];
	char tacgia[50] ;
	int namxuatban;
	char nhaxuatban[100] ;
	int sotrang ;
	char loaisach[50];
	long long giaban;
};
