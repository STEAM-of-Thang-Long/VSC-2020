
# B1.	Kết nối với Pi3 thông qua wifi
Windows
•	Kết nối tới wifi 

SSID: `raspi-webgui`

Password : `ChangeMe`

![](https://imgur.com/tnVoUZY.png)

Sau khi kết nối tới wifi của Pi3 phát ra thì đang nhập vào trang web quản trị để thiết lập lại 1 số cài đặt.
Mở trình duyệt web truy cập vào địa chỉ `10.3.141.1`

•	Username: `admin`

•	Password: `secret`

### Giao diện hiển thị của trang web quản trị thể hiện như hình sau:
![](https://i.imgur.com/fwekyGE.gif)

Nên vào mục ```Configure hotspot``` để cài đặt lại tên Wifi và mật khẩu.

![](https://i.imgur.com/EiIpdOS.gif)


# B2: cài đặt phần mềm VNC Viewer

Mặc định trên Pi3 đã được cài sẵn phần mềm VNC Server, bây giờ chúng ta cần cài đặt thêm phần mềm VNC server trên máy host (PC hoặc laptop) để có thể truy cập vào giao diện của PI3. Truy cập vào link sau: [VNC Viewer](https://www.realvnc.com/en/connect/download/viewer/)

Lựa chọn phiên bản 32 hoặc 64 bit phù hợp với hệ điều hành đang sử dụng. Cài đặt xong và khởi động ta có giao diện phần mềm như sau:

![](https://imgur.com/FoiGA1s.png)

Nhập địa chỉ IP của PI3 vào ô trống rồi ấn kết nối (lấy luôn IP mặc định trong bước 1 là 10.3.141.1 để kết nối)
Trong hộp thoại nổi lên sử dụng user sau để đăng nhập:

* user name: `pi`

* password : `1`
   
Sau khi đang nhập thanh công ta có giao diện hiển thị của PI3 như sau:

![](https://imgur.com/mxyKJs9.png)

Bây giờ chúng ta đã sử dụng Pi3 mà không cần cắm trực tiếp màn hình và bàn phím nữa.