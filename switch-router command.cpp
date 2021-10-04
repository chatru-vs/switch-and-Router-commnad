Switch command
show vlan
show ver
show vlan brief
sh vlan  brief
conf t
do sh int status


configure vlan
enable
conf ter
vlan 30
exit
interface e0/0
switchport trunk encalpsulation dot1q (press tab to complete the command)
switchport mode trunk (press tab to complete the command)
end
show interface trunk
conf t
inteface vlan30
ip address 192.168.20.2 255.255.255.0
no shutdown
end
show ip int brief

configrue switchport mode access method
conf t
inteface e0/3
switchport mode access
swithport access vlan 30
no shutdown
end



router command
end  -> one command back
write -> write the configration
show ip interface brief
enable
conf t
interface fastethernet 0/0
interface ethernet 0/0
ip address 10.0.0.1 255.255.255.0
no shutdown 
end
write

switch command
show ip interface brief
enable
conf ter
IOU1(config)#interfac
IOU1(config)#interface vlan 1
IOU1(config-if)#ip address 10.0.0.2 255.255.255.0
IOU1(config-if)#no shut
IOU1(config-if)#no shutdown
IOU1(config-if)#

fortinet firewall

192.168.116.0
192.168.116.128

FortiGate-VM64-KVM (interface) # config system interface

FortiGate-VM64-KVM (interface) # edit port1


FortiGate-VM64-KVM (port1) # set mode static

FortiGate-VM64-KVM (port1) # set ip 192.168.249.130/24

FortiGate-VM64-KVM (port1) # set allowaccess ping http https telnet ssh

FortiGate-VM64-KVM (port1) # set role wan

FortiGate-VM64-KVM (port1) # set alias wan

FortiGate-VM64-KVM (port1) # end



route add -p 192.168.99.0 mask 255.255.255.240 192.168.183.10


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


