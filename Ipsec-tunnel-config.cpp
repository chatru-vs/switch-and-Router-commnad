Ipsec tunnel configuration in cisco router.txt
Who has access
A
System properties
Type
Text
Size
935 bytes
Storage used
935 bytes
Owner
Abdullah Masud
Modified
May 6, 2020 by Abdullah Masud
Opened
10:21 PM by me
Created
May 6, 2020
No description
Viewers can download
Basic Router Config:
Interface ethernet0/0
 ip address 192.168.99.3 255.255.255.0
 no shut
 ip nat outside
 exit
!
Interface ethernet0/1
 ip address 192.168.12.1 255.255.255.0
 ip nat inside
 no shut
 exit
!
ip route 0.0.0.0 0.0.0.0 192.168.99.1
access-list 1 permit any
ip nat inside source list 1 interface ethernet 0/0 overload



Ipsec Config:
crypto isakmp policy 10
 encr des
 hash md5
 authentication pre-share
 group 5
 lifetime 86400
 exit
!
crypto isakmp key Fortinet123 address 192.168.99.2
crypto ipsec transform-set TR_SET esp-des esp-md5-hmac
 mode tunnel
 exit
crypto ipsec profile TEST_PRO
 set transform-set TR_SET
 set pfs group5
 exit
!
interface tunnel 1
 ip unnumbered GigabitEthernet0/0
 tunnel source 192.168.99.3
 tunnel destination 192.168.99.2
 tunnel mode ipsec ipv4
 tunnel protection ipsec profile TEST_PRO
 exit
!
ip route 192.168.10.0 255.255.255.0 tunnel 1
