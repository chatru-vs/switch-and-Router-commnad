Cisco Switch Configration 
<<make et 0/0 is a tunk port>>
interfac ethernet 0/0
switchport trunk encalpsulation dot1q
switchport mode trunk
no shutdown
exit

<<create VLan ID 16 and 17>>
vlan 16
exit
vlan 17
exit

interface e0/1
switchport mode access vlan16
exit

interface e0/2
switchport mode access vlan17
exit


interface vlan 16
ip address 192.168.16.2 255.255.255.0
no shutdown
exit

interface vlan 17
ip address 192.168.17.2 255.255.255.0
no shutdown
exit
write

ip interface brief 
Switch command
show vlan
show ver
show vlan brief
sh vlan  brief
conf t
do sh int status



router command
end  -> one command back
write -> write the configration
show ip interface brief
enable
conf t
interface fastethernet 0/0
interface ethernet 0/0
ip address 10.0.0.1 255.255.255.0
ip address dhcp => if get the ip address form the DHCP and DHCP configured
Router(config)#ip route 0.0.0.0 0.0.0.0 192.168.99.2
fortinet firewall static route 192.168.12.0/24 gateway 192.168.99.2

show ip route 
no shutdown 255
end
write
no ip routing
=======>configure the default gateway, telnet and http server on router
ip defult-gateway 192.168.183.2
username admin privilege 15 password 123
line vty 0 4
login local
transprot input telnet
exit
ip http server
ip http authentication local
end
telnet
192.168.11.3

<<fortinet firewall configration>>
FortiGate-VM64-KVM (interface) # config system interface
FortiGate-VM64-KVM (interface) # edit port1
FortiGate-VM64-KVM (port1) # set mode static
FortiGate-VM64-KVM (port1) # set ip 192.168.249.130/24
FortiGate-VM64-KVM (port1) # set allowaccess ping http https telnet ssh
FortiGate-VM64-KVM (port1) # set role wan
FortiGate-VM64-KVM (port1) # set alias wan
FortiGate-VM64-KVM (port1) # end
show system interface
conifg system interface
edit port1
set mode static
set ip 192.168.183.152/24
end
get router info routing-table all
conifig router static
edit 1
set dst 0.0.0.0/0
set gateway 192.168.183.2
set device port1
end
execute ping 8.8.8.8



route add -p 192.168.99.0 mask 255.255.255.240 192.168.183.10

VPCS> ip  192.168.12.2/24 192.168.12.1
Checking for duplicate address...
PC1 : 192.168.10.2 255.255.255.0 gateway 192.168.99.2
ip dns 8.8.8.8
ip dhcp
show ip

NAT is not requrire private ip to private ip. It reuires when private ip to public ip
sAMAccountName
Distinguished Name
CN=chpr,OU=RiseUser,DC=rise,DC=com
CN=admin,CN=Users,DC=rise,DC=com
CN=Administrator,CN=Users,DC=rise,DC=com

=========>IPsec Tunnel Configration in Cisco Router
<<Ipsec Config:>>
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


Routers Features

FastEthernet0/0 is up, line protocol is up
  Internet address is 192.168.183.15/24
  Broadcast address is 255.255.255.255
  Address determined by non-volatile memory
  MTU is 1500 bytes
  Helper address is not set
  Directed broadcast forwarding is disabled
  Outgoing access list is not set
  Inbound  access list is not set
  Proxy ARP is enabled
  Local Proxy ARP is disabled
  Security level is default
  Split horizon is enabled
  ICMP redirects are always sent
  ICMP unreachables are always sent
  ICMP mask replies are never sent
  IP fast switching is enabled
  IP fast switching on the same interface is disabled
  IP Flow switching is disabled
  IP CEF switching is enabled
  IP CEF Fast switching turbo vector
  IP multicast fast switching is enabled
  IP multicast distributed fast switching is disabled
  IP route-cache flags are Fast, CEF
  Router Discovery is disabled
  IP output packet accounting is disabled
  IP access violation accounting is disabled
  TCP/IP header compression is disabled
  RTP/IP header compression is disabled
  Policy routing is disabled
  Network address translation is disabled
  BGP Policy Mapping is disabled
  WCCP Redirect outbound is disabled
  WCCP Redirect inbound is disabled
  WCCP Redirect exclude is disabled


Router feature

Router>show ip interface
Ethernet0/0 is up, line protocol is up
  Internet address is 192.168.183.133/24
  Broadcast address is 255.255.255.255
  Address determined by DHCP from host 192.168.183.254
  MTU is 1500 bytes
  Helper address is not set
  Directed broadcast forwarding is disabled
  Multicast reserved groups joined: 224.0.0.251
  Outgoing access list is not set
  Inbound  access list is not set
  Proxy ARP is enabled
  Local Proxy ARP is disabled
  Security level is default
  Split horizon is enabled
  ICMP redirects are always sent
  ICMP unreachables are always sent
  ICMP mask replies are never sent
  IP fast switching is enabled
  IP fast switching on the same interface is disabled
  IP Flow switching is disabled
  IP CEF switching is enabled
  IP CEF switching turbo vector
  IP multicast fast switching is enabled
  IP multicast distributed fast switching is disabled
  IP route-cache flags are Fast, CEF
  Router Discovery is disabled
  IP output packet accounting is disabled
  IP access violation accounting is disabled
  TCP/IP header compression is disabled
  RTP/IP header compression is disabled
  Policy routing is disabled
  Network address translation is disabled
  BGP Policy Mapping is disabled
  Input features: MCI Check, DHCPC Reply
  IPv4 WCCP Redirect outbound is disabled
  IPv4 WCCP Redirect inbound is disabled
  IPv4 WCCP Redirect exclude is disabled


