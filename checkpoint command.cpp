user admin
password admin123
cpwd_admin list
cpstat os
show interfaces
show interface eth0
show route all
lock database override
set staic route default next hop gateway address 192.168.99.1 priority 1 on

=================================================================================================================================================================


SeaBIOS (version rel-1.11.1-0-g0551a4be2c-prebuilt.qemu-project.org)
Machine UUID b95dd37e-cee5-4dbf-b9ea-6ea920c26b91


iPXE (http://ipxe.org) 00:03.0 C980 PCI2.10 PnP PMM+BFF91540+BFEF1540 C980

iPXE (http://ipxe.org) 00:04.0 CA80 PCI2.10 PnP PMM BFF91540 BFEF1540 CA80

iPXE (http://ipxe.org) 00:05.0 CB80 PCI2.10 PnP PMM BFF91540 BFEF1540 CB80

iPXE (http://ipxe.org) 00:06.0 CC80 PCI2.10 PnP PMM BFF91540 BFEF1540 CC80


Booting from Hard Disk...
Loading the system
Starting the system

PCI: PIIX3: Enabling Passive Release on 0000:00:01.0
 Reading all physical volumes.  This may take a while...
  Found volume group "vg_splat" using metadata type lvm2
  2 logical volume(s) in volume group "vg_splat" now active
Setting clock  (utc): Sun Sep 26 09:15:06 IST 2021 [  OK  ]
Starting udev: [  OK  ]
Setting hostname gw-firewall:  [  OK  ]
Setting up Logical Volume Management:   2 logical volume(s) in volume group "vge
[  OK  ]
Checking filesystems
Checking all file systems.
[/sbin/fsck.ext3 (1) -- /] fsck.ext3 -a /dev/mapper/vg_splat-lv_current
/dev/mapper/vg_splat-lv_current: clean, 64356/3932160 files, 1630746/3932160 bls
[/sbin/fsck.ext3 (1) -- /boot] fsck.ext3 -a /dev/hda1
/boot: recovering journal
/boot: clean, 51/76304 files, 33576/305200 blocks
[/sbin/fsck.ext3 (1) -- /var/log] fsck.ext3 -a /dev/mapper/vg_splat-lv_log
/dev/mapper/vg_splat-lv_log: recovering journal
/dev/mapper/vg_splat-lv_log: clean, 1935/3932160 files, 247020/3932160 blocks
[  OK  ]
Remounting root filesystem in read-write mode:  [  OK  ]
Mounting local filesystems:  [  OK  ]
vm.max_map_count = 524288
Enabling /etc/fstab swaps:  [  OK  ]
INIT: Entering runlevel: 3
Applying Intel CPU microcode update: [  OK  ]
Starting sysstat:  Calling the system activity data collector (sadc):
[  OK  ]
Running UP accel driver check.
IP series driver not present
Starting background readahead: [  OK  ]
Checking for hardware changes [  OK  ]
Configuring ipv6 kernel support:  ipv6_xlate[1529]: ipv6_xlate: FW ipv6 state OFF
[  OK  ]
Starting kdump:[  OK  ]
Inserting ipsctl_kern_64: [  OK  ]
CKP: Loading SecureXL:  [  OK  ]
no ixgbe interfaces on the machine
no igb interfaces on the machine
no mlx5_core interfaces on the machine
no i40e interfaces on the machine
CKP: Loading FW-1 IPv4 Instance 0:  [  OK  ]
CKP: Loading FW-1 IPv4 Instance 1:  [  OK  ]
CKP: Loading FW-1 IPv4 Instance 2:  [  OK  ]
FW1: Starting cpWatchDog
Starting wrp:
[  OK  ]
Starting auditd: [  OK  ]
Starting system logger: [  OK  ]
Starting kernel logger: [  OK  ]
Fulcrum switch not installed
Update Interfaces in Database:  interfaces in loop:
eth3
eth2
eth1
eth0
in fucntion chk_vlans:
0 bindings were imported
[  OK  ]
Generating vrfs:  [  OK  ]
Configuring NetAccess:  [  OK  ]
Generating NTP configuration:  [  OK  ]
Generating Time Zone configuration:  [  OK  ]
Generating domain name configuration:  [  OK  ]
Generating keyboard mapping configuration:  Loading /lib/kbd/keymaps/i386/qwerty/us.map.gz
[  OK  ]
Generating hostname configuration:  [  OK  ]
Configuring Interfaces:  [  OK  ]
Generating /etc/monitor_mode:  [  OK  ]
Generating /etc/fonic_pairs:  [  OK  ]
Configuring NDP:  [  OK  ]
Generating hosts.conf:  [  OK  ]
Generating resolv.conf:  [  OK  ]
Generating dhclient.conf:  [  OK  ]
Generating pwcontrol.conf [  OK  ]
Generating passwd + shadow [  OK  ]
Generating group + gshadow [  OK  ]
Generating routed.conf [  OK  ]
Generating routed0.conf [  OK  ]
Generating extended commands:  [  OK  ]
Generating MOTD:  [  OK  ]
Generating banner message:  [  OK  ]
Generating /etc/raddb/server:  [  OK  ]
Generating TACACS+ configuration:  [  OK  ]
Generating /etc/msmtp.conf:  [  OK  ]
Generating /etc/pam.d/system-auth:  [  OK  ]
Generating /etc/sysconfig/external.if:  [  OK  ]
Generating /etc/lldpd.conf:  [  OK  ]
Generating DHCP server configuration:  Write DSTATE called
ServerConfigured = 1
DdnsConfigured = 0
[  OK  ]
Generating /etc/adjust_radius:  [  OK  ]
Running /bin/arp_xlate:  [  OK  ]
Generating SNMP configuration:  [  OK  ]
Generating SNMP Monitor configuration:  [  OK  ]
Generating Job Scheduler configuration:  [  OK  ]
Updating general configuraion file:  [  OK  ]
Updating syslogd configuration:  Reloading syslogd...[  OK  ]
Reloading klogd...[  OK  ]
[  OK  ]
Updating httpd2 configuration:  [  OK  ]
 Updating httpd-ssl configuration:  [  OK  ]
Applying NetFlow configuration [  OK  ]
Applying NetFlow v6 configuration [  OK  ]
Applying pbrroute configuration [  OK  ]
Configuring PPPoE:  [  OK  ]
Set interface names:  [  OK  ]
Configuring hostaccess:  [  OK  ]
CPshell initialization:  [  OK  ]
Initializing CP Process Manager..
Starting cp_pm_rl2:  [  OK  ]
Starting cp_pm_rl3:  [  OK  ]
Starting cp_pm_rl4:  [  OK  ]
Starting acpi daemon: [  OK  ]
Starting sshd: [  OK  ]
Starting arp: <not configured>
Starting xinetd: [  OK  ]
Starting bp_init:  [  OK  ]
Starting bypass_off:  [  OK  ]
Starting crond: [  OK  ]
Starting cpri_d:  cpridstart: Starting cprid
[1] 4238
[  OK  ]
Starting cpboot:  cpstart: Power-Up self tests passed successfully

cpstart: Starting product - SVN Foundation

SVN Foundation: cpWatchDog already running
Starting cpviewd
starting the history daemon
cpwd_admin:
Process HISTORYD started successfully (pid=4318)
Starting Critical Alerts Sensor...
SVN Foundation: Starting cpd
Multiportal daemon: starting mpdaemon
SVN Foundation started

cpstart: Starting product - VPN-1

FireWall-1: Starting fwd
FireWall-1: Starting cpm. Please wait...
[1] 4468
FireWall-1: Finished starting cpm successfully
FireWall-1: Starting fwm (SmartCenter Server)

SecureXL disabled, cannot use affinity commands
SecureXL will be started after a policy is loaded.
FireWall-1: Fetching policy
pg_ctl: another server might be running; trying to start server anyway

pg_ctl: this data directory appears to be running a pre-existing postmaster
pg_ctl: could not start server
Examine the log output.

Installing Security Policy Standard on all.all@gw-firewall
Fetching Security Policy from localhost succeeded
FireWall-1: enabling bridge forwarding
FireWall-1 started

cpstart: Starting product - FloodGate-1

FloodGate-1 is disabled. If you wish to start the service, please run 'etmstart enable'.

cpstart: Starting product - SmartView Monitor

SmartView Monitor: Not active

cpstart: Starting product - Eventia Suite

Start Search Infrastructure...
java.net.ConnectException: Connection refused (Connection refused)
        at java.net.PlainSocketImpl.socketConnect(Native Method)
        at java.net.AbstractPlainSocketImpl.doConnect(AbstractPlainSocketImpl.java:380)
        at java.net.AbstractPlainSocketImpl.connectToAddress(AbstractPlainSocketImpl.java:236)
        at java.net.AbstractPlainSocketImpl.connect(AbstractPlainSocketImpl.java:218)
        at java.net.SocksSocketImpl.connect(SocksSocketImpl.java:403)
        at java.net.Socket.connect(Socket.java:666)
        at java.net.Socket.connect(Socket.java:606)
        at java.net.Socket.<init>(Socket.java:469)
        at java.net.Socket.<init>(Socket.java:272)
        at org.eclipse.jetty.start.Main.stop(Main.java:1061)
        at org.eclipse.jetty.start.Main.processCommandLine(Main.java:189)
        at org.eclipse.jetty.start.Main.main(Main.java:94)

Usage: java -jar start.jar [options] [properties] [configs]
       java -jar start.jar --help  # for more information
java.net.ConnectException: Connection refused (Connection refused)
        at java.net.PlainSocketImpl.socketConnect(Native Method)
        at java.net.AbstractPlainSocketImpl.doConnect(AbstractPlainSocketImpl.java:380)
        at java.net.AbstractPlainSocketImpl.connectToAddress(AbstractPlainSocketImpl.java:236)
        at java.net.AbstractPlainSocketImpl.connect(AbstractPlainSocketImpl.java:218)
        at java.net.SocksSocketImpl.connect(SocksSocketImpl.java:403)
        at java.net.Socket.connect(Socket.java:666)
        at java.net.Socket.connect(Socket.java:606)
        at java.net.Socket.<init>(Socket.java:469)
        at java.net.Socket.<init>(Socket.java:272)
        at org.eclipse.jetty.start.Main.stop(Main.java:1061)
        at org.eclipse.jetty.start.Main.processCommandLine(Main.java:189)
        at org.eclipse.jetty.start.Main.main(Main.java:94)

Usage: java -jar start.jar [options] [properties] [configs]
       java -jar start.jar --help  # for more information
Starting RFL ...
cpwd_admin:
Process RFL started successfully (pid=8955)
Starting SmartView ...
cpwd_admin:
Process SMARTVIEW started successfully (pid=8970)
Start Log Indexer...
cpwd_admin:
Process INDEXER started successfully (pid=9001)
Start SmartLog Server...
cpwd_admin:
Process SMARTLOG_SERVER started successfully (pid=9062)


cpstart: Starting product - Management Portal

Management Portal: Starting CPWMD
Management Portal: CPWMD failed to start
Management Portal: Starting CPHTTPD
Management Portal: CPHTTPD failed to start

cpstart: Starting product - UEPM

UEPM: Endpoint Security Management isn't activated and will not be started

cpstart: Starting product - Mobile Access

Mobile Access service is disabled.
If you wish to start Mobile Access, please enable Mobile Access blade configure its policy.

cpstart: Starting product - Deployment Agent

cpwd_admin:
Process DASERVICE started successfully (pid=9191)
[  OK  ]
Starting cpboot_refetch:  [  OK  ]
kernel.printk = 0 1 0 1
Inserting vrrp_lkm_kern_64: [  OK  ]
This system is for authorized use only.
login: admin
Password:
Login incorrect

login: admin
Password:
Last login: Fri Sep 24 11:27:32 on ttyS0
gw-firewall> help
<TAB> key can be used to complete / fetch the keyword.
<ESC><ESC> key can be used to see possible command completions.
'?' key can be used to get help on feature / keyword.
UP/DOWN arrow keys can be used to browse thru command history.
LEFT/RIGHT arrow keys can be used to edit command.
'!!','!nn','!-nn' etc. are valid form of executing history cmd.

At more prompt, following keys can be used-
SPACE key to see the next page.
ENTER key to see the next line.
Q/q key to exit to the cli prompt.

Useful commands:
show interface <TAB>
set interface <TAB>
add user <TAB>
save config
show commands
show commands feature <TAB>
show configuration
expert

gw-firewall> show commands
add aaa radius-servers priority VALUE host VALUE [ port VALUE ] prompt-secret timeout VALUE
add aaa radius-servers priority VALUE host VALUE [ port VALUE ] secret VALUE timeout VALUE
add aaa tacacs-servers priority VALUE server VALUE key VALUE timeout VALUE
add allowed-client host any-host
add allowed-client host ipv4-address VALUE
add allowed-client host ipv6-address VALUE
add allowed-client network ipv4-address VALUE mask-length VALUE
add allowed-client network ipv6-address VALUE mask-length VALUE
add arp proxy ipv4-address VALUE interface VALUE real-ipv4-address VALUE
add arp proxy ipv4-address VALUE macaddress VALUE real-ipv4-address VALUE
add arp static ipv4-address VALUE macaddress VALUE
add backup ftp ip VALUE path VALUE username VALUE [ password VALUE interactive ]
add backup local [ interactive ]
add backup scp ip VALUE path VALUE username VALUE [ password VALUE interactive ]
add backup tftp ip VALUE [ interactive ]
add backup-scheduled name VALUE ftp ip VALUE path VALUE username VALUE [ password VALUE ]
add backup-scheduled name VALUE local
add backup-scheduled name VALUE scp ip VALUE path VALUE username VALUE [ password VALUE ]
add backup-scheduled name VALUE tftp ip VALUE
add bonding group VALUE interface VALUE
add bridging group VALUE fail-open-interfaces VALUE
add bridging group VALUE interface VALUE
add cloning-group shared-feature VALUE
add command VALUE path VALUE description VALUE
add cron job VALUE command VALUE recurrence daily time VALUE
add cron job VALUE command VALUE recurrence monthly month VALUE days VALUE time VALUE
add cron job VALUE command VALUE recurrence system-startup
add cron job VALUE command VALUE recurrence weekly days VALUE time VALUE
add dhcp client interface VALUE
add dhcp server subnet VALUE exclude-ip-pool start VALUE end VALUE
add dhcp server subnet VALUE include-ip-pool start VALUE end VALUE
add dhcp server subnet VALUE netmask VALUE
add group VALUE gid VALUE
add group VALUE member VALUE
add host name VALUE ipv4-address VALUE
add host name VALUE ipv6-address VALUE
add instance VALUE
add interface VALUE 6in4 VALUE remote VALUE ttl VALUE
add interface VALUE alias VALUE
add interface VALUE loopback VALUE
add interface VALUE vlan VALUE
add mcvr vrid VALUE backup-address VALUE vmac-mode default-vmac
add mcvr vrid VALUE backup-address VALUE vmac-mode extended-vmac
add mcvr vrid VALUE backup-address VALUE vmac-mode interface-vmac
add mcvr vrid VALUE backup-address VALUE vmac-mode static-vmac [ static-mac VALUE ]
add mcvr vrid VALUE priority VALUE priority-delta VALUE authtype none
add mcvr vrid VALUE priority VALUE priority-delta VALUE authtype simple password VALUE
add mcvr vrid VALUE priority VALUE priority-delta VALUE hello-interval VALUE authtype none
add mcvr vrid VALUE priority VALUE priority-delta VALUE hello-interval VALUE authtype simple passwordE
add neighbor-entry ipv6-address VALUE macaddress VALUE interface VALUE
add netflow collector ip VALUE port VALUE [ srcaddr VALUE export-format VALUE enable VALUE ]
add pppoe client id VALUE interface VALUE user-name VALUE password VALUE use-peer-dns VALUE use-peer-E
add pppoe client id VALUE interface VALUE user-name VALUE password_hash VALUE use-peer-dns VALUE use-E
add rba role VALUE domain-type VALUE { all-features }
add rba role VALUE domain-type VALUE { readonly-features VALUE readwrite-features VALUE }
add rba role VALUE virtual-system-access VALUE
add rba user VALUE access-mechanisms VALUE
add rba user VALUE roles VALUE
add snapshot VALUE desc VALUE
add snmp custom-trap VALUE oid VALUE operator VALUE threshold VALUE frequency VALUE message VALUE
add snmp interface VALUE
add snmp traps receiver VALUE version v1 community VALUE
add snmp traps receiver VALUE version v2 community VALUE
add snmp traps receiver VALUE version v3
add snmp usm user VALUE security-level authNoPriv auth-pass-phrase VALUE authentication-protocol VALUE
add snmp usm user VALUE security-level authNoPriv auth-pass-phrase VALUE authentication-protocol VALUE
add snmp usm user VALUE security-level authNoPriv auth-pass-phrase-hashed VALUE
add snmp usm user VALUE security-level authPriv auth-pass-phrase VALUE privacy-pass-phrase VALUE privE
add snmp usm user VALUE security-level authPriv auth-pass-phrase VALUE privacy-pass-phrase-hashed VALE
add snmp usm user VALUE security-level authPriv auth-pass-phrase-hashed VALUE privacy-pass-phrase VALE
add snmp usm user VALUE security-level authPriv auth-pass-phrase-hashed VALUE privacy-pass-phrase-hasE
add snmp usm user VALUE security-level authPriv privacy-pass-phrase VALUE
add syslog log-remote-address VALUE [ level VALUE ]
add upgrade VALUE package file VALUE
add user VALUE uid VALUE homedir VALUE
add virtual-system VALUE
add vpn tunnel VALUE type numbered local VALUE remote VALUE peer VALUE
add vpn tunnel VALUE type unnumbered peer VALUE dev VALUE
backup ftp ip VALUE path VALUE username VALUE [ password VALUE interactive ]
backup local [ interactive ]
backup scp ip VALUE path VALUE username VALUE [ password VALUE interactive ]
backup tftp ip VALUE [ interactive ]
clear
commit
delete aaa radius-servers NAS-IP
delete aaa radius-servers priority VALUE
delete aaa tacacs-servers priority VALUE
delete allowed-client host any-host
delete allowed-client host ipv4-address VALUE
delete allowed-client host ipv6-address VALUE
delete allowed-client network ipv4-address VALUE
delete allowed-client network ipv6-address VALUE
delete arp dynamic all
delete arp proxy ipv4-address VALUE
delete arp static ipv4-address VALUE
delete backup VALUE
delete backup-scheduled VALUE
delete bonding group VALUE force-ignore-routes
delete bonding group VALUE interface VALUE
delete bridging group VALUE fail-open-interfaces VALUE
delete bridging group VALUE force
delete bridging group VALUE interface VALUE
delete cloning-group disconnected-member VALUE
delete cloning-group shared-feature VALUE
delete command VALUE
delete cron all
delete cron job VALUE
delete cron mailto
delete dhcp client interface VALUE
delete dhcp server subnet VALUE exclude-ip-pool VALUE
delete dhcp server subnet VALUE include-ip-pool VALUE
delete dns primary
delete dns secondary
delete dns suffix
delete dns tertiary
delete domainname
delete group VALUE member VALUE
delete host name VALUE ipv4
delete host name VALUE ipv6
delete installer mail-notifications VALUE
delete instance VALUE
delete interface VALUE 6in4 VALUE force
delete interface VALUE alias VALUE
delete interface VALUE ipv4-address
delete interface VALUE ipv6-address
delete interface VALUE loopback VALUE force
delete interface VALUE vlan VALUE force
delete mcvr old-mc-config
delete mcvr vrid VALUE backup-address VALUE
delete neighbor-entry ipv6-address VALUE interface VALUE
delete netflow collector for-ip VALUE for-port VALUE
delete ntp server VALUE
delete pppoe client id VALUE
delete proxy address
delete proxy all
delete proxy port
delete rba role VALUE virtual-system-access VALUE
delete rba role VALUE { readonly-features VALUE readwrite-features VALUE }
delete rba user VALUE access-mechanisms VALUE
delete rba user VALUE roles VALUE
delete snapshot VALUE
delete snmp clear-trap
delete snmp community VALUE
delete snmp contact
delete snmp custom-trap VALUE
delete snmp interface VALUE
delete snmp location
delete snmp traps coldStart-threshold
delete snmp traps polling-frequency
delete snmp traps receiver VALUE
delete snmp traps trap-user
delete snmp usm user VALUE
delete syslog log-remote-address VALUE [ level VALUE ]
delete upgrade VALUE
delete user VALUE
delete virtual-system VALUE
delete vpn tunnel VALUE
exit
expert
generate web ssl-certificate key-bits VALUE signature-algorithm VALUE
halt
help
history
installer agent disable
installer agent enable
installer agent install VALUE not-interactive
installer agent start
installer agent stop
installer agent update not-interactive
installer check-for-updates not-interactive
installer clean-install VALUE not-interactive
installer delete VALUE not-interactive
installer download VALUE not-interactive
installer download VALUE pause
installer download VALUE resume not-interactive
installer download-and-install VALUE not-interactive
installer import cloud VALUE [ not-interactive ]
installer import ftp VALUE path VALUE username VALUE [ not-interactive ]
installer import ftp VALUE path VALUE username VALUE password VALUE [ not-interactive ]
installer import local VALUE [ not-interactive ]
installer install VALUE not-interactive
installer reinstall VALUE not-interactive
installer uninstall VALUE not-interactive
installer upgrade VALUE not-interactive
installer verify VALUE not-interactive
join cloning-group remote-ip VALUE
leave cloning-group
load configuration VALUE
lock database override
mgmt login [ user VALUE password VALUE ip-address VALUE domain VALUE ]
mgmt logout
quit
re-synch cloning-group
reboot
restore backup ftp ip VALUE path VALUE file VALUE username VALUE [ password VALUE interactive ]
restore backup local VALUE [ interactive ]
restore backup scp ip VALUE path VALUE file VALUE username VALUE [ password VALUE interactive ]
restore backup tftp ip VALUE file VALUE [ interactive ]
rollback
save clienv
save config
save configuration VALUE
set aaa radius-servers NAS-IP VALUE
set aaa radius-servers default-shell VALUE
set aaa radius-servers priority VALUE host VALUE
set aaa radius-servers priority VALUE new-priority VALUE
set aaa radius-servers priority VALUE port VALUE
set aaa radius-servers priority VALUE prompt-secret
set aaa radius-servers priority VALUE secret VALUE
set aaa radius-servers priority VALUE timeout VALUE
set aaa radius-servers super-user-uid VALUE
set aaa tacacs-servers priority VALUE key VALUE
set aaa tacacs-servers priority VALUE new-priority VALUE
set aaa tacacs-servers priority VALUE server VALUE
set aaa tacacs-servers priority VALUE timeout VALUE
set aaa tacacs-servers state VALUE
set aaa tacacs-servers user-uid VALUE
set aggregate VALUE aspath-truncate VALUE
set aggregate VALUE contributing-protocol VALUE contributing-route VALUE exact on
set aggregate VALUE contributing-protocol VALUE contributing-route VALUE off
set aggregate VALUE contributing-protocol VALUE contributing-route VALUE on
set aggregate VALUE contributing-protocol VALUE contributing-route VALUE refines on
set aggregate VALUE contributing-protocol VALUE off
set aggregate VALUE off
set aggregate VALUE rank VALUE
set aggregate VALUE weight VALUE
set arp announce VALUE
set arp table cache-size VALUE
set arp table validity-timeout VALUE
set as VALUE
set backup restore ftp ip VALUE path VALUE file VALUE username VALUE [ password VALUE interactive ]
set backup restore local VALUE [ interactive ]
set backup restore scp ip VALUE path VALUE file VALUE username VALUE [ password VALUE interactive ]
set backup restore tftp ip VALUE file VALUE [ interactive ]
set backup-scheduled name VALUE recurrence daily time VALUE
set backup-scheduled name VALUE recurrence monthly month VALUE days VALUE time VALUE
set backup-scheduled name VALUE recurrence weekly days VALUE time VALUE
set bgp cluster-id VALUE
set bgp communities VALUE
set bgp confederation aspath-loops-permitted VALUE
set bgp confederation identifier VALUE
set bgp confederation member-as VALUE description VALUE
set bgp confederation member-as VALUE interface VALUE off
set bgp confederation member-as VALUE interface VALUE on
set bgp confederation member-as VALUE med VALUE
set bgp confederation member-as VALUE nexthop-self VALUE
set bgp confederation member-as VALUE off
set bgp confederation member-as VALUE on
set bgp confederation member-as VALUE outdelay VALUE
set bgp confederation member-as VALUE peer VALUE [ comment VALUE ]
set bgp confederation member-as VALUE peer VALUE [ peer-type VALUE ] on
set bgp confederation member-as VALUE peer VALUE accept-routes VALUE
set bgp confederation member-as VALUE peer VALUE authtype md5 secret VALUE
set bgp confederation member-as VALUE peer VALUE authtype none
set bgp confederation member-as VALUE peer VALUE capability default
set bgp confederation member-as VALUE peer VALUE capability ipv4-unicast VALUE
set bgp confederation member-as VALUE peer VALUE capability ipv6-unicast VALUE
set bgp confederation member-as VALUE peer VALUE graceful-restart off
set bgp confederation member-as VALUE peer VALUE graceful-restart on
set bgp confederation member-as VALUE peer VALUE graceful-restart-stalepath-time VALUE default
set bgp confederation member-as VALUE peer VALUE holdtime VALUE
set bgp confederation member-as VALUE peer VALUE ignore-first-ashop VALUE
set bgp confederation member-as VALUE peer VALUE keepalive VALUE
set bgp confederation member-as VALUE peer VALUE log-state-transitions VALUE
set bgp confederation member-as VALUE peer VALUE log-warnings VALUE
set bgp confederation member-as VALUE peer VALUE no-aggregator-id VALUE
set bgp confederation member-as VALUE peer VALUE off
set bgp confederation member-as VALUE peer VALUE on
set bgp confederation member-as VALUE peer VALUE outgoing-interface VALUE [ peer-type VALUE ] on
set bgp confederation member-as VALUE peer VALUE passive-tcp VALUE
set bgp confederation member-as VALUE peer VALUE ping VALUE
set bgp confederation member-as VALUE peer VALUE route-refresh off
set bgp confederation member-as VALUE peer VALUE route-refresh on
set bgp confederation member-as VALUE peer VALUE send-keepalives VALUE
set bgp confederation member-as VALUE peer VALUE send-route-refresh request all unicast
set bgp confederation member-as VALUE peer VALUE send-route-refresh request ipv4 unicast
set bgp confederation member-as VALUE peer VALUE send-route-refresh request ipv6 unicast
set bgp confederation member-as VALUE peer VALUE send-route-refresh route-update all unicast
set bgp confederation member-as VALUE peer VALUE send-route-refresh route-update ipv4 unicast
set bgp confederation member-as VALUE peer VALUE send-route-refresh route-update ipv6 unicast
set bgp confederation member-as VALUE peer VALUE throttle-count VALUE
set bgp confederation member-as VALUE peer VALUE trace VALUE off
set bgp confederation member-as VALUE peer VALUE trace VALUE on
set bgp confederation member-as VALUE peer VALUE weight VALUE
set bgp confederation member-as VALUE protocol VALUE off
set bgp confederation member-as VALUE protocol VALUE on
set bgp dampening keep-history VALUE
set bgp dampening max-flap VALUE
set bgp dampening off
set bgp dampening on
set bgp dampening reachable-decay VALUE
set bgp dampening reuse-below VALUE
set bgp dampening suppress-above VALUE
set bgp dampening unreachable-decay VALUE
set bgp default-med VALUE
set bgp default-route-gateway VALUE
set bgp ecmp VALUE
set bgp external remote-as VALUE description VALUE
set bgp external remote-as VALUE export-routemap VALUE off
set bgp external remote-as VALUE export-routemap VALUE preference VALUE [ family VALUE ] on
set bgp external remote-as VALUE import-routemap VALUE off
set bgp external remote-as VALUE import-routemap VALUE preference VALUE [ family VALUE ] on
set bgp external remote-as VALUE off
set bgp external remote-as VALUE on
set bgp external remote-as VALUE outdelay VALUE
set bgp external remote-as VALUE peer VALUE [ comment VALUE ]
set bgp external remote-as VALUE peer VALUE accept-med VALUE
set bgp external remote-as VALUE peer VALUE accept-routes VALUE
set bgp external remote-as VALUE peer VALUE as-override VALUE
set bgp external remote-as VALUE peer VALUE aspath-prepend-count VALUE
set bgp external remote-as VALUE peer VALUE authtype md5 secret VALUE
set bgp external remote-as VALUE peer VALUE authtype none
set bgp external remote-as VALUE peer VALUE capability default
set bgp external remote-as VALUE peer VALUE capability ipv4-unicast VALUE
set bgp external remote-as VALUE peer VALUE capability ipv6-unicast VALUE
set bgp external remote-as VALUE peer VALUE export-routemap VALUE off
set bgp external remote-as VALUE peer VALUE export-routemap VALUE preference VALUE [ family VALUE ] on
set bgp external remote-as VALUE peer VALUE graceful-restart off
set bgp external remote-as VALUE peer VALUE graceful-restart on
set bgp external remote-as VALUE peer VALUE graceful-restart-stalepath-time VALUE default
set bgp external remote-as VALUE peer VALUE holdtime VALUE
set bgp external remote-as VALUE peer VALUE ignore-first-ashop VALUE
set bgp external remote-as VALUE peer VALUE import-routemap VALUE off
set bgp external remote-as VALUE peer VALUE import-routemap VALUE preference VALUE [ family VALUE ] on
set bgp external remote-as VALUE peer VALUE keepalive VALUE
set bgp external remote-as VALUE peer VALUE log-state-transitions VALUE
set bgp external remote-as VALUE peer VALUE log-warnings VALUE
set bgp external remote-as VALUE peer VALUE med-out VALUE
set bgp external remote-as VALUE peer VALUE multihop VALUE
set bgp external remote-as VALUE peer VALUE no-aggregator-id VALUE
set bgp external remote-as VALUE peer VALUE off
set bgp external remote-as VALUE peer VALUE on
set bgp external remote-as VALUE peer VALUE outgoing-interface VALUE on
set bgp external remote-as VALUE peer VALUE passive-tcp VALUE
set bgp external remote-as VALUE peer VALUE peer-local-as as VALUE on
set bgp external remote-as VALUE peer VALUE peer-local-as dual-peering VALUE
set bgp external remote-as VALUE peer VALUE peer-local-as inbound-peer-local VALUE
set bgp external remote-as VALUE peer VALUE peer-local-as off
set bgp external remote-as VALUE peer VALUE peer-local-as outbound-local VALUE
set bgp external remote-as VALUE peer VALUE ping VALUE
set bgp external remote-as VALUE peer VALUE removeprivateas VALUE
set bgp external remote-as VALUE peer VALUE route-refresh off
set bgp external remote-as VALUE peer VALUE route-refresh on
set bgp external remote-as VALUE peer VALUE send-keepalives VALUE
set bgp external remote-as VALUE peer VALUE send-route-refresh request all unicast
set bgp external remote-as VALUE peer VALUE send-route-refresh request ipv4 unicast
set bgp external remote-as VALUE peer VALUE send-route-refresh request ipv6 unicast
set bgp external remote-as VALUE peer VALUE send-route-refresh route-update all unicast
set bgp external remote-as VALUE peer VALUE send-route-refresh route-update ipv4 unicast
set bgp external remote-as VALUE peer VALUE send-route-refresh route-update ipv6 unicast
set bgp external remote-as VALUE peer VALUE suppress-default-originate VALUE
set bgp external remote-as VALUE peer VALUE throttle-count VALUE
set bgp external remote-as VALUE peer VALUE trace VALUE off
set bgp external remote-as VALUE peer VALUE trace VALUE on
set bgp external remote-as VALUE peer VALUE ttl VALUE
set bgp graceful-restart restart-time VALUE default
set bgp graceful-restart selection-deferral-time VALUE default
set bgp internal description VALUE
set bgp internal export-routemap VALUE off
set bgp internal export-routemap VALUE preference VALUE [ family VALUE ] on
set bgp internal import-routemap VALUE off
set bgp internal import-routemap VALUE preference VALUE [ family VALUE ] on
set bgp internal interface VALUE off
set bgp internal interface VALUE on
set bgp internal med VALUE
set bgp internal nexthop-self VALUE
set bgp internal off
set bgp internal on
set bgp internal outdelay VALUE
set bgp internal peer VALUE [ comment VALUE ]
set bgp internal peer VALUE [ peer-type VALUE ] on
set bgp internal peer VALUE accept-routes VALUE
set bgp internal peer VALUE authtype md5 secret VALUE
set bgp internal peer VALUE authtype none
set bgp internal peer VALUE capability default
set bgp internal peer VALUE capability ipv4-unicast VALUE
set bgp internal peer VALUE capability ipv6-unicast VALUE
set bgp internal peer VALUE graceful-restart off
set bgp internal peer VALUE graceful-restart on
set bgp internal peer VALUE graceful-restart-stalepath-time VALUE default
set bgp internal peer VALUE holdtime VALUE
set bgp internal peer VALUE ignore-first-ashop VALUE
set bgp internal peer VALUE import-routemap VALUE off
set bgp internal peer VALUE import-routemap VALUE preference VALUE [ family VALUE ] on
set bgp internal peer VALUE keepalive VALUE
set bgp internal peer VALUE log-state-transitions VALUE
set bgp internal peer VALUE log-warnings VALUE
set bgp internal peer VALUE no-aggregator-id VALUE
set bgp internal peer VALUE off
set bgp internal peer VALUE outgoing-interface VALUE [ peer-type VALUE ] on
set bgp internal peer VALUE passive-tcp VALUE
set bgp internal peer VALUE ping VALUE
set bgp internal peer VALUE route-refresh off
set bgp internal peer VALUE route-refresh on
set bgp internal peer VALUE send-keepalives VALUE
set bgp internal peer VALUE send-route-refresh request all unicast
set bgp internal peer VALUE send-route-refresh request ipv4 unicast
set bgp internal peer VALUE send-route-refresh request ipv6 unicast
set bgp internal peer VALUE send-route-refresh route-update all unicast
set bgp internal peer VALUE send-route-refresh route-update ipv4 unicast
set bgp internal peer VALUE send-route-refresh route-update ipv6 unicast
set bgp internal peer VALUE suppress-default-originate VALUE
set bgp internal peer VALUE throttle-count VALUE
set bgp internal peer VALUE trace VALUE off
set bgp internal peer VALUE trace VALUE on
set bgp internal peer VALUE weight VALUE
set bgp internal protocol VALUE off
set bgp internal protocol VALUE on
set bgp ping count VALUE
set bgp ping interval VALUE
set bgp routing-domain aspath-loops-permitted VALUE
set bgp routing-domain identifier VALUE
set bgp synchronization VALUE
set bonding group VALUE { primary VALUE mii-interval VALUE up-delay VALUE down-delay VALUE mode VALUE}
set bonding group VALUE { primary VALUE mii-interval VALUE up-delay VALUE down-delay VALUE mode VALUE}
set bootp interface VALUE maxhopcount VALUE
set bootp interface VALUE off
set bootp interface VALUE on
set bootp interface VALUE primary VALUE wait-time VALUE on
set bootp interface VALUE relay-to VALUE off
set bootp interface VALUE relay-to VALUE on
set clienv config-lock VALUE
set clienv debug VALUE
set clienv echo-cmd VALUE
set clienv on-failure VALUE
set clienv output VALUE
set clienv prompt VALUE
set clienv rows VALUE
set clienv syntax-check VALUE
set cloning-group local-ip VALUE
set cloning-group mode VALUE
set cloning-group name VALUE
set cloning-group password
set cloning-group state VALUE
set cloning-group-management VALUE
set config-lock off
set config-lock on [ timeout VALUE override ]
set core-dump disable
set core-dump enable
set core-dump per_process VALUE
set core-dump total VALUE
set cron job VALUE command VALUE
set cron job VALUE recurrence daily time VALUE
set cron job VALUE recurrence monthly month VALUE days VALUE time VALUE
set cron job VALUE recurrence system-startup
set cron job VALUE recurrence weekly days VALUE time VALUE
set cron mailto VALUE
set date VALUE
set dhcp client hostname VALUE
set dhcp client interface VALUE leasetime VALUE
set dhcp client interface VALUE reboot VALUE
set dhcp client interface VALUE retry VALUE
set dhcp client interface VALUE timeout VALUE
set dhcp server disable
set dhcp server enable
set dhcp server subnet VALUE default-gateway VALUE
set dhcp server subnet VALUE default-lease VALUE
set dhcp server subnet VALUE disable
set dhcp server subnet VALUE dns VALUE
set dhcp server subnet VALUE domain VALUE
set dhcp server subnet VALUE enable
set dhcp server subnet VALUE exclude-ip-pool VALUE disable
set dhcp server subnet VALUE exclude-ip-pool VALUE enable
set dhcp server subnet VALUE include-ip-pool VALUE disable
set dhcp server subnet VALUE include-ip-pool VALUE enable
set dhcp server subnet VALUE max-lease VALUE
set dns primary VALUE
set dns secondary VALUE
set dns suffix VALUE
set dns tertiary VALUE
set domainname VALUE
set edition VALUE
set expert-password
set expert-password-hash VALUE
set fcd revert VALUE
set format date dd-mmm-yyyy
set format date dd/mm/yyyy
set format date mm/dd/yyyy
set format date yyyy/mm/dd
set format netmask dotted
set format netmask length
set format time 12-hour
set format time 24-hour
set group VALUE gid VALUE
set host name VALUE ipv4-address VALUE
set host name VALUE ipv6-address VALUE
set hostname VALUE
set igmp interface VALUE default
set igmp interface VALUE last-member-query-interval VALUE
set igmp interface VALUE local-group VALUE off
set igmp interface VALUE local-group VALUE on
set igmp interface VALUE loss-robustness VALUE
set igmp interface VALUE query-interval VALUE
set igmp interface VALUE query-response-interval VALUE
set igmp interface VALUE router-alert VALUE
set igmp interface VALUE static-group VALUE off
set igmp interface VALUE static-group VALUE on
set igmp interface VALUE version VALUE
set inactivity-timeout VALUE
set inbound-route-filter bgp-policy VALUE accept-all-ipv4
set inbound-route-filter bgp-policy VALUE accept-all-ipv6
set inbound-route-filter bgp-policy VALUE based-on-as as VALUE on
set inbound-route-filter bgp-policy VALUE based-on-aspath aspath-regex VALUE origin VALUE on
set inbound-route-filter bgp-policy VALUE community-match VALUE as VALUE off
set inbound-route-filter bgp-policy VALUE community-match VALUE as VALUE on
set inbound-route-filter bgp-policy VALUE default-localpref VALUE
set inbound-route-filter bgp-policy VALUE default-weight VALUE
set inbound-route-filter bgp-policy VALUE off
set inbound-route-filter bgp-policy VALUE restrict-all-ipv4
set inbound-route-filter bgp-policy VALUE restrict-all-ipv6
set inbound-route-filter bgp-policy VALUE route VALUE accept
set inbound-route-filter bgp-policy VALUE route VALUE between VALUE and VALUE on
set inbound-route-filter bgp-policy VALUE route VALUE between VALUE and VALUE restrict on
set inbound-route-filter bgp-policy VALUE route VALUE exact on
set inbound-route-filter bgp-policy VALUE route VALUE exact restrict on
set inbound-route-filter bgp-policy VALUE route VALUE localpref VALUE
set inbound-route-filter bgp-policy VALUE route VALUE normal on
set inbound-route-filter bgp-policy VALUE route VALUE normal restrict on
set inbound-route-filter bgp-policy VALUE route VALUE off
set inbound-route-filter bgp-policy VALUE route VALUE refines on
set inbound-route-filter bgp-policy VALUE route VALUE refines restrict on
set inbound-route-filter bgp-policy VALUE route VALUE weight VALUE
set inbound-route-filter ospf2 accept-all-ipv4
set inbound-route-filter ospf2 rank VALUE
set inbound-route-filter ospf2 restrict-all-ipv4
set inbound-route-filter ospf2 route VALUE accept
set inbound-route-filter ospf2 route VALUE between VALUE and VALUE on
set inbound-route-filter ospf2 route VALUE between VALUE and VALUE restrict on
set inbound-route-filter ospf2 route VALUE exact on
set inbound-route-filter ospf2 route VALUE exact restrict on
set inbound-route-filter ospf2 route VALUE normal on
set inbound-route-filter ospf2 route VALUE normal restrict on
set inbound-route-filter ospf2 route VALUE off
set inbound-route-filter ospf2 route VALUE rank VALUE
set inbound-route-filter ospf2 route VALUE refines on
set inbound-route-filter ospf2 route VALUE refines restrict on
set inbound-route-filter rip accept-all-ipv4
set inbound-route-filter rip rank VALUE
set inbound-route-filter rip restrict-all-ipv4
set inbound-route-filter rip route VALUE accept
set inbound-route-filter rip route VALUE between VALUE and VALUE on
set inbound-route-filter rip route VALUE between VALUE and VALUE restrict on
set inbound-route-filter rip route VALUE exact on
set inbound-route-filter rip route VALUE exact restrict on
set inbound-route-filter rip route VALUE normal on
set inbound-route-filter rip route VALUE normal restrict on
set inbound-route-filter rip route VALUE off
set inbound-route-filter rip route VALUE rank VALUE
set inbound-route-filter rip route VALUE refines on
set inbound-route-filter rip route VALUE refines restrict on
set installer mail-notifications VALUE download-status VALUE
set installer mail-notifications VALUE install-status VALUE
set installer mail-notifications VALUE new-available-packages VALUE
set installer policy auto-compress-snapshot VALUE
set installer policy check-for-updates-period VALUE
set installer policy downloads automatic
set installer policy downloads manual
set installer policy downloads scheduled daily VALUE
set installer policy downloads scheduled monthly VALUE at VALUE
set installer policy downloads scheduled once VALUE at VALUE
set installer policy downloads scheduled weekly VALUE at VALUE
set installer policy periodically-self-update VALUE
set installer policy self-test install-policy VALUE
set installer policy self-test network-link-up VALUE
set installer policy self-test start-processes VALUE
set installer policy send-cpuse-data VALUE
set instance VALUE aggregate VALUE aspath-truncate VALUE
set instance VALUE aggregate VALUE contributing-protocol VALUE contributing-route VALUE exact on
set instance VALUE aggregate VALUE contributing-protocol VALUE contributing-route VALUE off
set instance VALUE aggregate VALUE contributing-protocol VALUE contributing-route VALUE on
set instance VALUE aggregate VALUE contributing-protocol VALUE contributing-route VALUE refines on
set instance VALUE aggregate VALUE contributing-protocol VALUE off
set instance VALUE aggregate VALUE off
set instance VALUE aggregate VALUE rank VALUE
set instance VALUE aggregate VALUE weight VALUE
set instance VALUE ipv6 dhcp6relay interface VALUE interface-id off
set instance VALUE ipv6 dhcp6relay interface VALUE interface-id on
set instance VALUE ipv6 dhcp6relay interface VALUE off
set instance VALUE ipv6 dhcp6relay interface VALUE on
set instance VALUE ipv6 dhcp6relay interface VALUE relay-to VALUE off
set instance VALUE ipv6 dhcp6relay interface VALUE relay-to VALUE on
set instance VALUE ipv6 dhcp6relay interface VALUE wait-time VALUE
set instance VALUE ipv6 ospf3 area VALUE off
set instance VALUE ipv6 ospf3 area VALUE on
set instance VALUE ipv6 ospf3 area VALUE range VALUE off
set instance VALUE ipv6 ospf3 area VALUE range VALUE on
set instance VALUE ipv6 ospf3 area VALUE range VALUE restrict VALUE
set instance VALUE ipv6 ospf3 area VALUE stub default-cost VALUE
set instance VALUE ipv6 ospf3 area VALUE stub off
set instance VALUE ipv6 ospf3 area VALUE stub on
set instance VALUE ipv6 ospf3 area VALUE stub summary off
set instance VALUE ipv6 ospf3 area VALUE stub summary on
set instance VALUE ipv6 ospf3 area VALUE stub-network VALUE off
set instance VALUE ipv6 ospf3 area VALUE stub-network VALUE on
set instance VALUE ipv6 ospf3 area VALUE stub-network VALUE stub-network-cost VALUE
set instance VALUE ipv6 ospf3 default-ase-cost VALUE
set instance VALUE ipv6 ospf3 default-ase-type VALUE
set instance VALUE ipv6 ospf3 export-routemap VALUE off
set instance VALUE ipv6 ospf3 export-routemap VALUE preference VALUE on
set instance VALUE ipv6 ospf3 import-routemap VALUE off
set instance VALUE ipv6 ospf3 import-routemap VALUE preference VALUE on
set instance VALUE ipv6 ospf3 interface VALUE area VALUE off
set instance VALUE ipv6 ospf3 interface VALUE area VALUE on
set instance VALUE ipv6 ospf3 interface VALUE cost VALUE
set instance VALUE ipv6 ospf3 interface VALUE dead-interval VALUE
set instance VALUE ipv6 ospf3 interface VALUE hello-interval VALUE
set instance VALUE ipv6 ospf3 interface VALUE passive off
set instance VALUE ipv6 ospf3 interface VALUE passive on
set instance VALUE ipv6 ospf3 interface VALUE priority VALUE
set instance VALUE ipv6 ospf3 interface VALUE retransmit-interval VALUE
set instance VALUE ipv6 ospf3 spf-delay VALUE
set instance VALUE ipv6 ospf3 spf-holdtime VALUE
set instance VALUE ipv6 rdisc6 interface VALUE address VALUE autonomous VALUE
set instance VALUE ipv6 rdisc6 interface VALUE address VALUE default
set instance VALUE ipv6 rdisc6 interface VALUE address VALUE on-link VALUE
set instance VALUE ipv6 rdisc6 interface VALUE address VALUE prefix-pref-lifetime VALUE
set instance VALUE ipv6 rdisc6 interface VALUE address VALUE prefix-valid-lifetime VALUE
set instance VALUE ipv6 rdisc6 interface VALUE dnshost VALUE dnshost-lifetime VALUE
set instance VALUE ipv6 rdisc6 interface VALUE dnshost VALUE off
set instance VALUE ipv6 rdisc6 interface VALUE dnshost VALUE on
set instance VALUE ipv6 rdisc6 interface VALUE dnsserver VALUE dnsserver-lifetime VALUE
set instance VALUE ipv6 rdisc6 interface VALUE dnsserver VALUE off
set instance VALUE ipv6 rdisc6 interface VALUE dnsserver VALUE on
set instance VALUE ipv6 rdisc6 interface VALUE hop-limit VALUE
set instance VALUE ipv6 rdisc6 interface VALUE managed-config VALUE
set instance VALUE ipv6 rdisc6 interface VALUE max-adv-interval VALUE
set instance VALUE ipv6 rdisc6 interface VALUE min-adv-interval VALUE
set instance VALUE ipv6 rdisc6 interface VALUE off
set instance VALUE ipv6 rdisc6 interface VALUE on
set instance VALUE ipv6 rdisc6 interface VALUE reachable-time VALUE
set instance VALUE ipv6 rdisc6 interface VALUE retransmit-timer VALUE
set instance VALUE ipv6 rdisc6 interface VALUE router-lifetime VALUE
set instance VALUE ipv6 rdisc6 interface VALUE send-mtu VALUE
set instance VALUE ipv6 rdisc6 the given interface other-config VALUE
set instance VALUE ipv6 static-route VALUE comment VALUE
set instance VALUE ipv6 static-route VALUE nexthop blackhole
set instance VALUE ipv6 static-route VALUE nexthop gateway VALUE [ priority VALUE ] off
set instance VALUE ipv6 static-route VALUE nexthop gateway VALUE [ priority VALUE ] on
set instance VALUE ipv6 static-route VALUE nexthop gateway VALUE interface VALUE [ priority VALUE ] of
set instance VALUE ipv6 static-route VALUE nexthop gateway VALUE interface VALUE [ priority VALUE ] on
set instance VALUE ipv6 static-route VALUE nexthop reject
set instance VALUE ipv6 static-route VALUE off
set instance VALUE ipv6 static-route VALUE ping6 off
set instance VALUE ipv6 static-route VALUE ping6 on
set instance VALUE kernel-routes off
set instance VALUE kernel-routes on
set instance VALUE max-path-splits VALUE
set instance VALUE ospf area VALUE nssa default-cost VALUE
set instance VALUE ospf area VALUE nssa default-metric-type VALUE
set instance VALUE ospf area VALUE nssa import-summary-routes off
set instance VALUE ospf area VALUE nssa import-summary-routes on
set instance VALUE ospf area VALUE nssa off
set instance VALUE ospf area VALUE nssa on
set instance VALUE ospf area VALUE nssa range VALUE off
set instance VALUE ospf area VALUE nssa range VALUE on
set instance VALUE ospf area VALUE nssa range VALUE restrict off
set instance VALUE ospf area VALUE nssa range VALUE restrict on
set instance VALUE ospf area VALUE nssa redistribution off
set instance VALUE ospf area VALUE nssa redistribution on
set instance VALUE ospf area VALUE nssa translator-role always
set instance VALUE ospf area VALUE nssa translator-role candidate
set instance VALUE ospf area VALUE nssa translator-stability-interval VALUE
set instance VALUE ospf area VALUE off
set instance VALUE ospf area VALUE on
set instance VALUE ospf area VALUE range VALUE off
set instance VALUE ospf area VALUE range VALUE on
set instance VALUE ospf area VALUE range VALUE restrict off
set instance VALUE ospf area VALUE range VALUE restrict on
set instance VALUE ospf area VALUE stub default-cost VALUE
set instance VALUE ospf area VALUE stub off
set instance VALUE ospf area VALUE stub on
set instance VALUE ospf area VALUE stub summary off
set instance VALUE ospf area VALUE stub summary on
set instance VALUE ospf area VALUE stub-network VALUE off
set instance VALUE ospf area VALUE stub-network VALUE on
set instance VALUE ospf area VALUE stub-network VALUE stub-network-cost VALUE
set instance VALUE ospf area VALUE virtual-link VALUE transit-area VALUE authtype md5 key VALUE off
set instance VALUE ospf area VALUE virtual-link VALUE transit-area VALUE authtype md5 key VALUE secreE
set instance VALUE ospf area VALUE virtual-link VALUE transit-area VALUE authtype none
set instance VALUE ospf area VALUE virtual-link VALUE transit-area VALUE authtype simple VALUE
set instance VALUE ospf area VALUE virtual-link VALUE transit-area VALUE dead-interval VALUE
set instance VALUE ospf area VALUE virtual-link VALUE transit-area VALUE hello-interval VALUE
set instance VALUE ospf area VALUE virtual-link VALUE transit-area VALUE off
set instance VALUE ospf area VALUE virtual-link VALUE transit-area VALUE on
set instance VALUE ospf area VALUE virtual-link VALUE transit-area VALUE retransmit-interval VALUE
set instance VALUE ospf default-ase-cost VALUE
set instance VALUE ospf default-ase-type VALUE
set instance VALUE ospf export-routemap VALUE off
set instance VALUE ospf export-routemap VALUE preference VALUE on
set instance VALUE ospf force-hellos off
set instance VALUE ospf force-hellos on
set instance VALUE ospf force-hellos timer VALUE
set instance VALUE ospf graceful-restart grace-period VALUE
set instance VALUE ospf graceful-restart off
set instance VALUE ospf graceful-restart on
set instance VALUE ospf graceful-restart-helper off
set instance VALUE ospf graceful-restart-helper on
set instance VALUE ospf import-routemap VALUE off
set instance VALUE ospf import-routemap VALUE preference VALUE on
set instance VALUE ospf interface VALUE area VALUE off
set instance VALUE ospf interface VALUE area VALUE on
set instance VALUE ospf interface VALUE authtype md5 key VALUE off
set instance VALUE ospf interface VALUE authtype md5 key VALUE secret VALUE
set instance VALUE ospf interface VALUE authtype none
set instance VALUE ospf interface VALUE authtype simple VALUE
set instance VALUE ospf interface VALUE cost VALUE
set instance VALUE ospf interface VALUE dead-interval VALUE
set instance VALUE ospf interface VALUE hello-interval VALUE
set instance VALUE ospf interface VALUE passive off
set instance VALUE ospf interface VALUE passive on
set instance VALUE ospf interface VALUE priority VALUE
set instance VALUE ospf interface VALUE retransmit-interval VALUE
set instance VALUE ospf interface VALUE subtract-authlen VALUE
set instance VALUE ospf interface VALUE virtual-address off
set instance VALUE ospf interface VALUE virtual-address on
set instance VALUE ospf rfc1583-compatibility off
set instance VALUE ospf rfc1583-compatibility on
set instance VALUE ospf spf-delay VALUE
set instance VALUE ospf spf-holdtime VALUE
set instance VALUE protocol-rank protocol bgp ipv4-routes rank VALUE
set instance VALUE protocol-rank protocol bgp ipv6-routes rank VALUE
set instance VALUE protocol-rank protocol ospf rank VALUE
set instance VALUE protocol-rank protocol ospf3 rank VALUE
set instance VALUE protocol-rank protocol ospf3ase rank VALUE
set instance VALUE protocol-rank protocol ospfase rank VALUE
set instance VALUE protocol-rank protocol rip rank VALUE
set instance VALUE protocol-rank protocol ripng rank VALUE
set instance VALUE routemap VALUE id VALUE action aspath-prepend-count VALUE
set instance VALUE routemap VALUE id VALUE action community VALUE as VALUE off
set instance VALUE routemap VALUE id VALUE action community VALUE as VALUE on
set instance VALUE routemap VALUE id VALUE action community VALUE off
set instance VALUE routemap VALUE id VALUE action community VALUE on
set instance VALUE routemap VALUE id VALUE action localpref VALUE
set instance VALUE routemap VALUE id VALUE action metric add VALUE
set instance VALUE routemap VALUE id VALUE action metric igp add VALUE
set instance VALUE routemap VALUE id VALUE action metric igp subtract VALUE
set instance VALUE routemap VALUE id VALUE action metric subtract VALUE
set instance VALUE routemap VALUE id VALUE action metric value VALUE
set instance VALUE routemap VALUE id VALUE action nexthop ip VALUE
set instance VALUE routemap VALUE id VALUE action nexthop ipv6 VALUE
set instance VALUE routemap VALUE id VALUE action ospfautomatictag VALUE
set instance VALUE routemap VALUE id VALUE action ospfmanualtag VALUE
set instance VALUE routemap VALUE id VALUE action precedence VALUE
set instance VALUE routemap VALUE id VALUE action preference VALUE
set instance VALUE routemap VALUE id VALUE action remove aspath-prepend-count
set instance VALUE routemap VALUE id VALUE action remove community
set instance VALUE routemap VALUE id VALUE action remove localpref
set instance VALUE routemap VALUE id VALUE action remove metric
set instance VALUE routemap VALUE id VALUE action remove nexthop ip
set instance VALUE routemap VALUE id VALUE action remove nexthop ipv6
set instance VALUE routemap VALUE id VALUE action remove ospfautomatictag
set instance VALUE routemap VALUE id VALUE action remove ospfmanualtag
set instance VALUE routemap VALUE id VALUE action remove precedence
set instance VALUE routemap VALUE id VALUE action remove preference
set instance VALUE routemap VALUE id VALUE action remove riptag
set instance VALUE routemap VALUE id VALUE action remove route-type
set instance VALUE routemap VALUE id VALUE action riptag VALUE
set instance VALUE routemap VALUE id VALUE action route-type VALUE
set instance VALUE routemap VALUE id VALUE allow
set instance VALUE routemap VALUE id VALUE inactive
set instance VALUE routemap VALUE id VALUE match as VALUE off
set instance VALUE routemap VALUE id VALUE match as VALUE on
set instance VALUE routemap VALUE id VALUE match aspath-regex VALUE origin VALUE
set instance VALUE routemap VALUE id VALUE match community VALUE as VALUE off
set instance VALUE routemap VALUE id VALUE match community VALUE as VALUE on
set instance VALUE routemap VALUE id VALUE match community VALUE off
set instance VALUE routemap VALUE id VALUE match community VALUE on
set instance VALUE routemap VALUE id VALUE match community-regex VALUE
set instance VALUE routemap VALUE id VALUE match ifaddress VALUE off
set instance VALUE routemap VALUE id VALUE match ifaddress VALUE on
set instance VALUE routemap VALUE id VALUE match interface VALUE off
set instance VALUE routemap VALUE id VALUE match interface VALUE on
set instance VALUE routemap VALUE id VALUE match metric value VALUE
set instance VALUE routemap VALUE id VALUE match neighbor VALUE off
set instance VALUE routemap VALUE id VALUE match neighbor VALUE on
set instance VALUE routemap VALUE id VALUE match network VALUE all [ restrict VALUE ]
set instance VALUE routemap VALUE id VALUE match network VALUE between VALUE and VALUE [ restrict VAL]
set instance VALUE routemap VALUE id VALUE match network VALUE exact [ restrict VALUE ]
set instance VALUE routemap VALUE id VALUE match network VALUE off
set instance VALUE routemap VALUE id VALUE match network VALUE refines [ restrict VALUE ]
set instance VALUE routemap VALUE id VALUE match nexthop VALUE off
set instance VALUE routemap VALUE id VALUE match nexthop VALUE on
set instance VALUE routemap VALUE id VALUE match protocol VALUE
set instance VALUE routemap VALUE id VALUE match remove as
set instance VALUE routemap VALUE id VALUE match remove aspath-regex
set instance VALUE routemap VALUE id VALUE match remove community
set instance VALUE routemap VALUE id VALUE match remove community-regex
set instance VALUE routemap VALUE id VALUE match remove ifaddress
set instance VALUE routemap VALUE id VALUE match remove interface
set instance VALUE routemap VALUE id VALUE match remove metric
set instance VALUE routemap VALUE id VALUE match remove neighbor
set instance VALUE routemap VALUE id VALUE match remove network
set instance VALUE routemap VALUE id VALUE match remove nexthop
set instance VALUE routemap VALUE id VALUE match remove protocol
set instance VALUE routemap VALUE id VALUE match remove route-type
set instance VALUE routemap VALUE id VALUE match remove tag
set instance VALUE routemap VALUE id VALUE match route-type VALUE off
set instance VALUE routemap VALUE id VALUE match route-type VALUE on
set instance VALUE routemap VALUE id VALUE match tag VALUE off
set instance VALUE routemap VALUE id VALUE match tag VALUE on
set instance VALUE routemap VALUE id VALUE off
set instance VALUE routemap VALUE id VALUE on
set instance VALUE routemap VALUE id VALUE restrict
set instance VALUE router-id VALUE
set instance VALUE static-route VALUE comment VALUE
set instance VALUE static-route VALUE nexthop blackhole
set instance VALUE static-route VALUE nexthop gateway address VALUE [ priority VALUE ] on
set instance VALUE static-route VALUE nexthop gateway address VALUE off
set instance VALUE static-route VALUE nexthop gateway logical VALUE [ priority VALUE ] on
set instance VALUE static-route VALUE nexthop gateway logical VALUE off
set instance VALUE static-route VALUE nexthop reject
set instance VALUE static-route VALUE off
set instance VALUE static-route VALUE ping off
set instance VALUE static-route VALUE ping on
set instance VALUE static-route VALUE rank VALUE
set instance VALUE static-route VALUE scopelocal off
set instance VALUE static-route VALUE scopelocal on
set instance VALUE trace bootp VALUE off
set instance VALUE trace bootp VALUE on
set instance VALUE trace dhcp6relay VALUE off
set instance VALUE trace dhcp6relay VALUE on
set instance VALUE trace ospf VALUE off
set instance VALUE trace ospf VALUE on
set instance VALUE trace ospf3 VALUE off
set instance VALUE trace ripng VALUE off
set instance VALUE trace vrrp6 VALUE off
set instance VALUE trace vrrp6 VALUE on
set instance VALUE tracefile maxnum VALUE
set instance VALUE tracefile size VALUE
set interface VALUE ipv4-address VALUE mask-length VALUE
set interface VALUE ipv4-address VALUE subnet-mask VALUE
set interface VALUE ipv6-address VALUE mask-length VALUE
set interface VALUE monitor-mode VALUE
set interface VALUE rx-ringsize VALUE
set interface VALUE tx-ringsize VALUE
set interface VALUE { comments VALUE mac-addr VALUE mtu VALUE state VALUE link-speed VALUE auto-negot}
set interface VALUE { ipv6-autoconfig VALUE }
set interface-name by-bus-id VALUE to VALUE
set interface-name by-name VALUE to VALUE
set iphelper forward-nonlocal off
set iphelper forward-nonlocal on
set iphelper interface VALUE off
set iphelper interface VALUE udp-port VALUE off
set iphelper interface VALUE udp-port VALUE relay-to VALUE off
set iphelper interface VALUE udp-port VALUE relay-to VALUE on
set ipv6-state off
set ipv6-state on
set kernel-routes off
set kernel-routes on
set mail-notification server VALUE
set mail-notification username VALUE
set management interface VALUE
set max-path-splits VALUE
set mcvr vrid VALUE authtype none
set mcvr vrid VALUE authtype simple password VALUE
set mcvr vrid VALUE auto-deactivation off
set mcvr vrid VALUE auto-deactivation on
set mcvr vrid VALUE backup-address VALUE vmac-mode default-vmac
set mcvr vrid VALUE backup-address VALUE vmac-mode extended-vmac
set mcvr vrid VALUE backup-address VALUE vmac-mode interface-vmac
set mcvr vrid VALUE backup-address VALUE vmac-mode static-vmac [ static-mac VALUE ]
set mcvr vrid VALUE hello-interval VALUE
set mcvr vrid VALUE preempt-mode off
set mcvr vrid VALUE preempt-mode on
set mcvr vrid VALUE priority VALUE
set mcvr vrid VALUE priority-delta VALUE
set message banner VALUE [ line msgvalue VALUE ]
set message banner VALUE [ msgvalue VALUE ]
set message caption VALUE
set message motd VALUE [ line msgvalue VALUE ]
set message motd VALUE [ msgvalue VALUE ]
set neighbor duplicate-detection retry VALUE
set neighbor duplicate-detection state VALUE
set neighbor multicast-limit VALUE
set neighbor queue-limit VALUE
set neighbor unicast-limit VALUE
set net-access telnet VALUE
set netflow collector for-ip VALUE for-port VALUE { ip VALUE port VALUE export-format VALUE srcaddr V}
set netflow collector for-ip VALUE { ip VALUE port VALUE export-format VALUE srcaddr VALUE enable VAL}
set netflow collector { ip VALUE port VALUE export-format VALUE srcaddr VALUE enable VALUE }
set ntp active VALUE
set ntp server primary VALUE version VALUE
set ntp server secondary VALUE version VALUE
set ospf area VALUE nssa default-cost VALUE
set ospf area VALUE nssa default-metric-type VALUE
set ospf area VALUE nssa import-summary-routes off
set ospf area VALUE nssa import-summary-routes on
set ospf area VALUE nssa off
set ospf area VALUE nssa on
set ospf area VALUE nssa range VALUE off
set ospf area VALUE nssa range VALUE on
set ospf area VALUE nssa range VALUE restrict off
set ospf area VALUE nssa range VALUE restrict on
set ospf area VALUE nssa redistribution off
set ospf area VALUE nssa redistribution on
set ospf area VALUE nssa translator-role always
set ospf area VALUE nssa translator-role candidate
set ospf area VALUE nssa translator-stability-interval VALUE
set ospf area VALUE off
set ospf area VALUE on
set ospf area VALUE range VALUE off
set ospf area VALUE range VALUE on
set ospf area VALUE range VALUE restrict off
set ospf area VALUE range VALUE restrict on
set ospf area VALUE stub default-cost VALUE
set ospf area VALUE stub off
set ospf area VALUE stub on
set ospf area VALUE stub summary off
set ospf area VALUE stub summary on
set ospf area VALUE stub-network VALUE off
set ospf area VALUE stub-network VALUE on
set ospf area VALUE stub-network VALUE stub-network-cost VALUE
set ospf area VALUE virtual-link VALUE transit-area VALUE authtype md5 key VALUE off
set ospf area VALUE virtual-link VALUE transit-area VALUE authtype md5 key VALUE secret VALUE
set ospf area VALUE virtual-link VALUE transit-area VALUE authtype none
set ospf area VALUE virtual-link VALUE transit-area VALUE authtype simple VALUE
set ospf area VALUE virtual-link VALUE transit-area VALUE dead-interval VALUE
set ospf area VALUE virtual-link VALUE transit-area VALUE hello-interval VALUE
set ospf area VALUE virtual-link VALUE transit-area VALUE off
set ospf area VALUE virtual-link VALUE transit-area VALUE on
set ospf area VALUE virtual-link VALUE transit-area VALUE retransmit-interval VALUE
set ospf default-ase-cost VALUE
set ospf default-ase-type VALUE
set ospf export-routemap VALUE off
set ospf export-routemap VALUE preference VALUE on
set ospf force-hellos off
set ospf force-hellos on
set ospf force-hellos timer VALUE
set ospf graceful-restart grace-period VALUE
set ospf graceful-restart off
set ospf graceful-restart on
set ospf graceful-restart-helper off
set ospf graceful-restart-helper on
set ospf import-routemap VALUE off
set ospf import-routemap VALUE preference VALUE on
set ospf interface VALUE area VALUE off
set ospf interface VALUE area VALUE on
set ospf interface VALUE authtype md5 key VALUE off
set ospf interface VALUE authtype md5 key VALUE secret VALUE
set ospf interface VALUE authtype none
set ospf interface VALUE authtype simple VALUE
set ospf interface VALUE cost VALUE
set ospf interface VALUE dead-interval VALUE
set ospf interface VALUE hello-interval VALUE
set ospf interface VALUE passive off
set ospf interface VALUE passive on
set ospf interface VALUE priority VALUE
set ospf interface VALUE retransmit-interval VALUE
set ospf interface VALUE subtract-authlen VALUE
set ospf interface VALUE virtual-address off
set ospf interface VALUE virtual-address on
set ospf rfc1583-compatibility off
set ospf rfc1583-compatibility on
set ospf spf-delay VALUE
set ospf spf-holdtime VALUE
set password-controls complexity VALUE
set password-controls deny-on-fail allow-after VALUE
set password-controls deny-on-fail block-admin VALUE
set password-controls deny-on-fail enable VALUE
set password-controls deny-on-fail failures-allowed VALUE
set password-controls deny-on-nonuse allowed-days VALUE
set password-controls deny-on-nonuse enable VALUE
set password-controls expiration-lockout-days VALUE
set password-controls expiration-warning-days VALUE
set password-controls force-change-when VALUE
set password-controls history-checking VALUE
set password-controls history-length VALUE
set password-controls min-password-length VALUE
set password-controls palindrome-check VALUE
set password-controls password-expiration VALUE
set pbr rule priority VALUE action main-table
set pbr rule priority VALUE action prohibit
set pbr rule priority VALUE action table VALUE
set pbr rule priority VALUE action unreachable
set pbr rule priority VALUE match { from VALUE to VALUE interface VALUE }
set pbr rule priority VALUE match { port VALUE }
set pbr rule priority VALUE match { protocol VALUE }
set pbr rule priority VALUE off
set pbr table VALUE off
set pbr table VALUE static-route VALUE nexthop blackhole
set pbr table VALUE static-route VALUE nexthop gateway address VALUE off
set pbr table VALUE static-route VALUE nexthop gateway address VALUE on
set pbr table VALUE static-route VALUE nexthop gateway address VALUE priority VALUE
set pbr table VALUE static-route VALUE nexthop gateway logical VALUE off
set pbr table VALUE static-route VALUE nexthop gateway logical VALUE on
set pbr table VALUE static-route VALUE nexthop gateway logical VALUE priority VALUE
set pbr table VALUE static-route VALUE nexthop reject
set pbr table VALUE static-route VALUE off
set pbrroute sim { flag VALUE }
set pim assert-interval VALUE
set pim assert-rank protocol VALUE rank VALUE
set pim bootstrap-candidate local-address VALUE
set pim bootstrap-candidate off
set pim bootstrap-candidate on
set pim bootstrap-candidate priority VALUE
set pim candidate-rp advertise-interval VALUE
set pim candidate-rp local-address VALUE
set pim candidate-rp multicast-group VALUE off
set pim candidate-rp multicast-group VALUE on
set pim candidate-rp off
set pim candidate-rp on
set pim candidate-rp priority VALUE
set pim data-interval VALUE
set pim hello-interval VALUE
set pim interface VALUE dr-priority VALUE
set pim interface VALUE off
set pim interface VALUE on
set pim interface VALUE virtual-address off
set pim interface VALUE virtual-address on
set pim interface-all-off
set pim jp-delay-interval VALUE
set pim jp-interval VALUE
set pim mode dense
set pim mode sparse
set pim mode ssm
set pim register-suppress-interval VALUE
set pim state-refresh off
set pim state-refresh on
set pim state-refresh-interval VALUE
set pim state-refresh-ttl VALUE
set pim static-rp off
set pim static-rp on
set pim static-rp rp-address VALUE multicast-group VALUE off
set pim static-rp rp-address VALUE multicast-group VALUE on
set pim static-rp rp-address VALUE off
set pim static-rp rp-address VALUE on
set ping count VALUE
set ping interval VALUE
set pppoe client id VALUE fake-peer-address VALUE
set pppoe client id VALUE interface VALUE
set pppoe client id VALUE password VALUE
set pppoe client id VALUE use-fake-peer-address VALUE
set pppoe client id VALUE use-peer-as-default-gateway VALUE
set pppoe client id VALUE use-peer-dns VALUE
set pppoe client id VALUE user-name VALUE
set protocol-rank protocol bgp ipv4-routes rank VALUE
set protocol-rank protocol bgp ipv6-routes rank VALUE
set protocol-rank protocol ospf rank VALUE
set protocol-rank protocol ospf3 rank VALUE
set protocol-rank protocol ospf3ase rank VALUE
set protocol-rank protocol ospfase rank VALUE
set protocol-rank protocol rip rank VALUE
set protocol-rank protocol ripng rank VALUE
set proxy address VALUE port VALUE
set rdisc interface VALUE adv-lifetime VALUE
set rdisc interface VALUE advertise VALUE off
set rdisc interface VALUE advertise VALUE on
set rdisc interface VALUE advertise VALUE preference VALUE
set rdisc interface VALUE max-adv-interval VALUE
set rdisc interface VALUE min-adv-interval VALUE
set rdisc interface VALUE off
set rdisc interface VALUE on
set rip auto-summary VALUE
set rip expire-interval VALUE
set rip export-routemap VALUE off
set rip export-routemap VALUE preference VALUE on
set rip import-routemap VALUE off
set rip import-routemap VALUE preference VALUE on
set rip interface VALUE [ version VALUE ] on
set rip interface VALUE accept-updates VALUE
set rip interface VALUE authtype md5 secret VALUE [ cisco-compatibility VALUE ]
set rip interface VALUE authtype none
set rip interface VALUE authtype simple VALUE
set rip interface VALUE metric VALUE
set rip interface VALUE off
set rip interface VALUE send-updates VALUE
set rip interface VALUE transport VALUE
set rip interface VALUE virtual-address VALUE
set rip update-interval VALUE
set route-redistribution to bgp-as VALUE community-append VALUE as VALUE off
set route-redistribution to bgp-as VALUE community-append VALUE as VALUE on
set route-redistribution to bgp-as VALUE community-match VALUE as VALUE off
set route-redistribution to bgp-as VALUE community-match VALUE as VALUE on
set route-redistribution to bgp-as VALUE from aggregate VALUE [ metric VALUE ] on
set route-redistribution to bgp-as VALUE from aggregate VALUE off
set route-redistribution to bgp-as VALUE from bgp-as-number VALUE all-ipv4-routes [ metric VALUE ] on
set route-redistribution to bgp-as VALUE from bgp-as-number VALUE all-ipv4-routes off
set route-redistribution to bgp-as VALUE from bgp-as-number VALUE all-ipv6-routes [ metric VALUE ] on
set route-redistribution to bgp-as VALUE from bgp-as-number VALUE all-ipv6-routes off
set route-redistribution to bgp-as VALUE from bgp-as-number VALUE network VALUE [ metric VALUE ] on
set route-redistribution to bgp-as VALUE from bgp-as-number VALUE network VALUE action VALUE
set route-redistribution to bgp-as VALUE from bgp-as-number VALUE network VALUE match-type exact on
set route-redistribution to bgp-as VALUE from bgp-as-number VALUE network VALUE match-type normal on
set route-redistribution to bgp-as VALUE from bgp-as-number VALUE network VALUE match-type range betwn
set route-redistribution to bgp-as VALUE from bgp-as-number VALUE network VALUE match-type refines on
set route-redistribution to bgp-as VALUE from bgp-as-number VALUE network VALUE off
set route-redistribution to bgp-as VALUE from bgp-as-path VALUE origin VALUE all-ipv4-routes [ metricn
set route-redistribution to bgp-as VALUE from bgp-as-path VALUE origin VALUE all-ipv4-routes off
set route-redistribution to bgp-as VALUE from bgp-as-path VALUE origin VALUE all-ipv6-routes [ metricn
set route-redistribution to bgp-as VALUE from bgp-as-path VALUE origin VALUE all-ipv6-routes off
set route-redistribution to bgp-as VALUE from bgp-as-path VALUE origin VALUE network VALUE [ metric Vn
set route-redistribution to bgp-as VALUE from bgp-as-path VALUE origin VALUE network VALUE action VALE
set route-redistribution to bgp-as VALUE from bgp-as-path VALUE origin VALUE network VALUE match-typen
set route-redistribution to bgp-as VALUE from bgp-as-path VALUE origin VALUE network VALUE match-typen
set route-redistribution to bgp-as VALUE from bgp-as-path VALUE origin VALUE network VALUE match-typen
set route-redistribution to bgp-as VALUE from bgp-as-path VALUE origin VALUE network VALUE match-typen
set route-redistribution to bgp-as VALUE from bgp-as-path VALUE origin VALUE network VALUE off
set route-redistribution to bgp-as VALUE from default-origin all-ipv4-routes [ metric VALUE ] on
set route-redistribution to bgp-as VALUE from default-origin all-ipv4-routes off
set route-redistribution to bgp-as VALUE from interface VALUE [ metric VALUE ] on
set route-redistribution to bgp-as VALUE from interface VALUE off
set route-redistribution to bgp-as VALUE from kernel all-ipv4-routes [ metric VALUE ] on
set route-redistribution to bgp-as VALUE from kernel all-ipv4-routes off
set route-redistribution to bgp-as VALUE from kernel all-ipv6-routes [ metric VALUE ] on
set route-redistribution to bgp-as VALUE from kernel all-ipv6-routes off
set route-redistribution to bgp-as VALUE from kernel network VALUE [ metric VALUE ] on
set route-redistribution to bgp-as VALUE from kernel network VALUE action VALUE
set route-redistribution to bgp-as VALUE from kernel network VALUE match-type exact on
set route-redistribution to bgp-as VALUE from kernel network VALUE match-type normal on
set route-redistribution to bgp-as VALUE from kernel network VALUE match-type range between VALUE andn
set route-redistribution to bgp-as VALUE from kernel network VALUE match-type refines on
set route-redistribution to bgp-as VALUE from kernel network VALUE off
set route-redistribution to bgp-as VALUE from ospf2 all-ipv4-routes [ metric VALUE ] on
set route-redistribution to bgp-as VALUE from ospf2 all-ipv4-routes off
set route-redistribution to bgp-as VALUE from ospf2 network VALUE [ metric VALUE ] on
set route-redistribution to bgp-as VALUE from ospf2 network VALUE action VALUE
set route-redistribution to bgp-as VALUE from ospf2 network VALUE match-type exact on
set route-redistribution to bgp-as VALUE from ospf2 network VALUE match-type normal on
set route-redistribution to bgp-as VALUE from ospf2 network VALUE match-type range between VALUE and n
set route-redistribution to bgp-as VALUE from ospf2 network VALUE match-type refines on
set route-redistribution to bgp-as VALUE from ospf2 network VALUE off
set route-redistribution to bgp-as VALUE from ospf2ase all-ipv4-routes [ metric VALUE ] on
set route-redistribution to bgp-as VALUE from ospf2ase all-ipv4-routes off
set route-redistribution to bgp-as VALUE from ospf2ase network VALUE [ metric VALUE ] on
set route-redistribution to bgp-as VALUE from ospf2ase network VALUE action VALUE
set route-redistribution to bgp-as VALUE from ospf2ase network VALUE match-type exact on
set route-redistribution to bgp-as VALUE from ospf2ase network VALUE match-type normal on
set route-redistribution to bgp-as VALUE from ospf2ase network VALUE match-type range between VALUE an
set route-redistribution to bgp-as VALUE from ospf2ase network VALUE match-type refines on
set route-redistribution to bgp-as VALUE from ospf2ase network VALUE off
set route-redistribution to bgp-as VALUE from ospf3 all-ipv6-routes [ metric VALUE ] on
set route-redistribution to bgp-as VALUE from ospf3 all-ipv6-routes off
set route-redistribution to bgp-as VALUE from ospf3 network VALUE [ metric VALUE ] on
set route-redistribution to bgp-as VALUE from ospf3 network VALUE action VALUE
set route-redistribution to bgp-as VALUE from ospf3 network VALUE match-type exact on
set route-redistribution to bgp-as VALUE from ospf3 network VALUE match-type normal on
set route-redistribution to bgp-as VALUE from ospf3 network VALUE match-type refines on
set route-redistribution to bgp-as VALUE from ospf3 network VALUE off
set route-redistribution to bgp-as VALUE from ospf3ase all-ipv6-routes [ metric VALUE ] on
set route-redistribution to bgp-as VALUE from ospf3ase all-ipv6-routes off
set route-redistribution to bgp-as VALUE from ospf3ase network VALUE [ metric VALUE ] on
set route-redistribution to bgp-as VALUE from ospf3ase network VALUE action VALUE
set route-redistribution to bgp-as VALUE from ospf3ase network VALUE match-type exact on
set route-redistribution to bgp-as VALUE from ospf3ase network VALUE match-type normal on
set route-redistribution to bgp-as VALUE from ospf3ase network VALUE match-type refines on
set route-redistribution to bgp-as VALUE from ospf3ase network VALUE off
set route-redistribution to bgp-as VALUE from rip all-ipv4-routes [ metric VALUE ] on
set route-redistribution to bgp-as VALUE from rip all-ipv4-routes off
set route-redistribution to bgp-as VALUE from rip network VALUE [ metric VALUE ] on
set route-redistribution to bgp-as VALUE from rip network VALUE action VALUE
set route-redistribution to bgp-as VALUE from rip network VALUE match-type exact on
set route-redistribution to bgp-as VALUE from rip network VALUE match-type normal on
set route-redistribution to bgp-as VALUE from rip network VALUE match-type range between VALUE and VAn
set route-redistribution to bgp-as VALUE from rip network VALUE match-type refines on
set route-redistribution to bgp-as VALUE from rip network VALUE off
set route-redistribution to bgp-as VALUE from ripng all-ipv6-routes [ metric VALUE ] on
set route-redistribution to bgp-as VALUE from ripng all-ipv6-routes off
set route-redistribution to bgp-as VALUE from ripng network VALUE [ metric VALUE ] on
set route-redistribution to bgp-as VALUE from ripng network VALUE action VALUE
set route-redistribution to bgp-as VALUE from ripng network VALUE match-type exact on
set route-redistribution to bgp-as VALUE from ripng network VALUE match-type normal on
set route-redistribution to bgp-as VALUE from ripng network VALUE match-type refines on
set route-redistribution to bgp-as VALUE from ripng network VALUE off
set route-redistribution to bgp-as VALUE from static-route VALUE [ metric VALUE ] on
set route-redistribution to bgp-as VALUE from static-route VALUE off
set route-redistribution to bgp-as VALUE localpref VALUE
set route-redistribution to bgp-as VALUE med VALUE
set route-redistribution to bgp-as VALUE off
set route-redistribution to ospf2 from aggregate VALUE [ metric VALUE ] on
set route-redistribution to ospf2 from aggregate VALUE off
set route-redistribution to ospf2 from bgp-as-number VALUE all-ipv4-routes [ metric VALUE ] on
set route-redistribution to ospf2 from bgp-as-number VALUE all-ipv4-routes off
set route-redistribution to ospf2 from bgp-as-number VALUE network VALUE [ metric VALUE ] on
set route-redistribution to ospf2 from bgp-as-number VALUE network VALUE action VALUE
set route-redistribution to ospf2 from bgp-as-number VALUE network VALUE match-type exact on
set route-redistribution to ospf2 from bgp-as-number VALUE network VALUE match-type normal on
set route-redistribution to ospf2 from bgp-as-number VALUE network VALUE match-type range between VALn
set route-redistribution to ospf2 from bgp-as-number VALUE network VALUE match-type refines on
set route-redistribution to ospf2 from bgp-as-number VALUE network VALUE off
set route-redistribution to ospf2 from bgp-as-number VALUE ospf-automatic-tag off
set route-redistribution to ospf2 from bgp-as-number VALUE ospf-automatic-tag on
set route-redistribution to ospf2 from bgp-as-number VALUE ospf-automatic-tag-value VALUE
set route-redistribution to ospf2 from bgp-as-number VALUE ospf-manual-tag-value VALUE
set route-redistribution to ospf2 from bgp-as-path VALUE origin VALUE all-ipv4-routes [ metric VALUE n
set route-redistribution to ospf2 from bgp-as-path VALUE origin VALUE all-ipv4-routes off
set route-redistribution to ospf2 from bgp-as-path VALUE origin VALUE network VALUE [ metric VALUE ] n
set route-redistribution to ospf2 from bgp-as-path VALUE origin VALUE network VALUE action VALUE
set route-redistribution to ospf2 from bgp-as-path VALUE origin VALUE network VALUE match-type exact n
set route-redistribution to ospf2 from bgp-as-path VALUE origin VALUE network VALUE match-type normaln
set route-redistribution to ospf2 from bgp-as-path VALUE origin VALUE network VALUE match-type range n
set route-redistribution to ospf2 from bgp-as-path VALUE origin VALUE network VALUE match-type refinen
set route-redistribution to ospf2 from bgp-as-path VALUE origin VALUE network VALUE off
set route-redistribution to ospf2 from bgp-as-path VALUE origin VALUE ospf-automatic-tag off
set route-redistribution to ospf2 from bgp-as-path VALUE origin VALUE ospf-automatic-tag on
set route-redistribution to ospf2 from bgp-as-path VALUE origin VALUE ospf-automatic-tag-value VALUE
set route-redistribution to ospf2 from bgp-as-path VALUE origin VALUE ospf-manual-tag-value VALUE
set route-redistribution to ospf2 from interface VALUE [ metric VALUE ] on
set route-redistribution to ospf2 from interface VALUE off
set route-redistribution to ospf2 from kernel all-ipv4-routes [ metric VALUE ] on
set route-redistribution to ospf2 from kernel all-ipv4-routes off
set route-redistribution to ospf2 from kernel network VALUE [ metric VALUE ] on
set route-redistribution to ospf2 from kernel network VALUE action VALUE
set route-redistribution to ospf2 from kernel network VALUE match-type exact on
set route-redistribution to ospf2 from kernel network VALUE match-type normal on
set route-redistribution to ospf2 from kernel network VALUE match-type range between VALUE and VALUE n
set route-redistribution to ospf2 from kernel network VALUE match-type refines on
set route-redistribution to ospf2 from kernel network VALUE off
set route-redistribution to ospf2 from rip all-ipv4-routes [ metric VALUE ] on
set route-redistribution to ospf2 from rip all-ipv4-routes off
set route-redistribution to ospf2 from rip network VALUE [ metric VALUE ] on
set route-redistribution to ospf2 from rip network VALUE action VALUE
set route-redistribution to ospf2 from rip network VALUE match-type exact on
set route-redistribution to ospf2 from rip network VALUE match-type normal on
set route-redistribution to ospf2 from rip network VALUE match-type range between VALUE and VALUE on
set route-redistribution to ospf2 from rip network VALUE match-type refines on
set route-redistribution to ospf2 from rip network VALUE off
set route-redistribution to ospf2 from static-route VALUE [ metric VALUE ] on
set route-redistribution to ospf2 from static-route VALUE off
set route-redistribution to ospf2 off
set route-redistribution to rip from aggregate VALUE metric VALUE on
set route-redistribution to rip from aggregate VALUE off
set route-redistribution to rip from bgp-as-number VALUE all-ipv4-routes metric VALUE on
set route-redistribution to rip from bgp-as-number VALUE all-ipv4-routes off
set route-redistribution to rip from bgp-as-number VALUE network VALUE action VALUE
set route-redistribution to rip from bgp-as-number VALUE network VALUE match-type exact on
set route-redistribution to rip from bgp-as-number VALUE network VALUE match-type normal on
set route-redistribution to rip from bgp-as-number VALUE network VALUE match-type range between VALUEn
set route-redistribution to rip from bgp-as-number VALUE network VALUE match-type refines on
set route-redistribution to rip from bgp-as-number VALUE network VALUE metric VALUE on
set route-redistribution to rip from bgp-as-number VALUE network VALUE off
set route-redistribution to rip from bgp-as-number VALUE riptag VALUE
set route-redistribution to rip from bgp-as-path VALUE origin VALUE all-ipv4-routes metric VALUE on
set route-redistribution to rip from bgp-as-path VALUE origin VALUE all-ipv4-routes off
set route-redistribution to rip from bgp-as-path VALUE origin VALUE network VALUE action VALUE
set route-redistribution to rip from bgp-as-path VALUE origin VALUE network VALUE match-type exact on
set route-redistribution to rip from bgp-as-path VALUE origin VALUE network VALUE match-type normal on
set route-redistribution to rip from bgp-as-path VALUE origin VALUE network VALUE match-type range ben
set route-redistribution to rip from bgp-as-path VALUE origin VALUE network VALUE match-type refines n
set route-redistribution to rip from bgp-as-path VALUE origin VALUE network VALUE metric VALUE on
set route-redistribution to rip from bgp-as-path VALUE origin VALUE network VALUE off
set route-redistribution to rip from bgp-as-path VALUE origin VALUE riptag VALUE
set route-redistribution to rip from interface VALUE [ metric VALUE ] on
set route-redistribution to rip from interface VALUE off
set route-redistribution to rip from kernel all-ipv4-routes metric VALUE on
set route-redistribution to rip from kernel all-ipv4-routes off
set route-redistribution to rip from kernel network VALUE action VALUE
set route-redistribution to rip from kernel network VALUE match-type exact on
set route-redistribution to rip from kernel network VALUE match-type normal on
set route-redistribution to rip from kernel network VALUE match-type range between VALUE and VALUE on
set route-redistribution to rip from kernel network VALUE match-type refines on
set route-redistribution to rip from kernel network VALUE metric VALUE on
set route-redistribution to rip from kernel network VALUE off
set route-redistribution to rip from ospf2 all-ipv4-routes metric VALUE on
set route-redistribution to rip from ospf2 all-ipv4-routes off
set route-redistribution to rip from ospf2 network VALUE action VALUE
set route-redistribution to rip from ospf2 network VALUE match-type exact on
set route-redistribution to rip from ospf2 network VALUE match-type normal on
set route-redistribution to rip from ospf2 network VALUE match-type range between VALUE and VALUE on
set route-redistribution to rip from ospf2 network VALUE match-type refines on
set route-redistribution to rip from ospf2 network VALUE metric VALUE on
set route-redistribution to rip from ospf2 network VALUE off
set route-redistribution to rip from ospf2 riptag VALUE
set route-redistribution to rip from ospf2ase all-ipv4-routes metric VALUE on
set route-redistribution to rip from ospf2ase all-ipv4-routes off
set route-redistribution to rip from ospf2ase network VALUE action VALUE
set route-redistribution to rip from ospf2ase network VALUE match-type exact on
set route-redistribution to rip from ospf2ase network VALUE match-type normal on
set route-redistribution to rip from ospf2ase network VALUE match-type range between VALUE and VALUE n
set route-redistribution to rip from ospf2ase network VALUE match-type refines on
set route-redistribution to rip from ospf2ase network VALUE metric VALUE on
set route-redistribution to rip from ospf2ase network VALUE off
set route-redistribution to rip from ospf2ase riptag VALUE
set route-redistribution to rip from static-route VALUE metric VALUE on
set route-redistribution to rip from static-route VALUE off
set route-redistribution to rip off
set routedsyslog maxnum VALUE
set routedsyslog off
set routedsyslog on
set routedsyslog size VALUE
set routemap VALUE id VALUE action aspath-prepend-count VALUE
set routemap VALUE id VALUE action community VALUE as VALUE off
set routemap VALUE id VALUE action community VALUE as VALUE on
set routemap VALUE id VALUE action community VALUE off
set routemap VALUE id VALUE action community VALUE on
set routemap VALUE id VALUE action localpref VALUE
set routemap VALUE id VALUE action metric add VALUE
set routemap VALUE id VALUE action metric igp add VALUE
set routemap VALUE id VALUE action metric igp subtract VALUE
set routemap VALUE id VALUE action metric subtract VALUE
set routemap VALUE id VALUE action metric value VALUE
set routemap VALUE id VALUE action nexthop ip VALUE
set routemap VALUE id VALUE action nexthop ipv6 VALUE
set routemap VALUE id VALUE action ospfautomatictag VALUE
set routemap VALUE id VALUE action ospfmanualtag VALUE
set routemap VALUE id VALUE action precedence VALUE
set routemap VALUE id VALUE action preference VALUE
set routemap VALUE id VALUE action remove aspath-prepend-count
set routemap VALUE id VALUE action remove community
set routemap VALUE id VALUE action remove localpref
set routemap VALUE id VALUE action remove metric
set routemap VALUE id VALUE action remove nexthop ip
set routemap VALUE id VALUE action remove nexthop ipv6
set routemap VALUE id VALUE action remove ospfautomatictag
set routemap VALUE id VALUE action remove ospfmanualtag
set routemap VALUE id VALUE action remove precedence
set routemap VALUE id VALUE action remove preference
set routemap VALUE id VALUE action remove riptag
set routemap VALUE id VALUE action remove route-type
set routemap VALUE id VALUE action riptag VALUE
set routemap VALUE id VALUE action route-type VALUE
set routemap VALUE id VALUE allow
set routemap VALUE id VALUE inactive
set routemap VALUE id VALUE match as VALUE off
set routemap VALUE id VALUE match as VALUE on
set routemap VALUE id VALUE match aspath-regex VALUE origin VALUE
set routemap VALUE id VALUE match community VALUE as VALUE off
set routemap VALUE id VALUE match community VALUE as VALUE on
set routemap VALUE id VALUE match community VALUE off
set routemap VALUE id VALUE match community VALUE on
set routemap VALUE id VALUE match community-regex VALUE
set routemap VALUE id VALUE match ifaddress VALUE off
set routemap VALUE id VALUE match ifaddress VALUE on
set routemap VALUE id VALUE match interface VALUE off
set routemap VALUE id VALUE match interface VALUE on
set routemap VALUE id VALUE match metric value VALUE
set routemap VALUE id VALUE match neighbor VALUE off
set routemap VALUE id VALUE match neighbor VALUE on
set routemap VALUE id VALUE match network VALUE all [ restrict VALUE ]
set routemap VALUE id VALUE match network VALUE between VALUE and VALUE [ restrict VALUE ]
set routemap VALUE id VALUE match network VALUE exact [ restrict VALUE ]
set routemap VALUE id VALUE match network VALUE off
set routemap VALUE id VALUE match network VALUE refines [ restrict VALUE ]
set routemap VALUE id VALUE match nexthop VALUE off
set routemap VALUE id VALUE match nexthop VALUE on
set routemap VALUE id VALUE match protocol VALUE
set routemap VALUE id VALUE match remove as
set routemap VALUE id VALUE match remove aspath-regex
set routemap VALUE id VALUE match remove community
set routemap VALUE id VALUE match remove community-regex
set routemap VALUE id VALUE match remove ifaddress
set routemap VALUE id VALUE match remove interface
set routemap VALUE id VALUE match remove metric
set routemap VALUE id VALUE match remove neighbor
set routemap VALUE id VALUE match remove network
set routemap VALUE id VALUE match remove nexthop
set routemap VALUE id VALUE match remove protocol
set routemap VALUE id VALUE match remove route-type
set routemap VALUE id VALUE match remove tag
set routemap VALUE id VALUE match route-type VALUE off
set routemap VALUE id VALUE match route-type VALUE on
set routemap VALUE id VALUE match tag VALUE off
set routemap VALUE id VALUE match tag VALUE on
set routemap VALUE id VALUE off
set routemap VALUE id VALUE on
set routemap VALUE id VALUE restrict
set router-id VALUE
set router-options auto-restore-iface-routes off
set router-options auto-restore-iface-routes on
set router-options wait-for-clustering off
set router-options wait-for-clustering on
set selfpasswd
set selfpasswd oldpass VALUE passwd VALUE
set snapshot export VALUE path VALUE name VALUE
set snapshot import VALUE path VALUE name VALUE
set snapshot revert VALUE
set snmp agent VALUE
set snmp agent-version VALUE
set snmp clear-trap interval VALUE retries VALUE
set snmp community VALUE read-only
set snmp community VALUE read-write
set snmp contact VALUE
set snmp custom-trap VALUE frequency VALUE
set snmp custom-trap VALUE message VALUE
set snmp custom-trap VALUE oid VALUE
set snmp custom-trap VALUE operator VALUE
set snmp custom-trap VALUE threshold VALUE
set snmp location VALUE
set snmp mode VALUE
set snmp traps coldStart-threshold VALUE
set snmp traps polling-frequency VALUE
set snmp traps receiver VALUE version v1 community VALUE
set snmp traps receiver VALUE version v1 community VALUE
set snmp traps receiver VALUE version v2 community VALUE
set snmp traps receiver VALUE version v2 community VALUE
set snmp traps receiver VALUE version v3
set snmp traps receiver VALUE version v3
set snmp traps trap VALUE disable
set snmp traps trap VALUE enable
set snmp traps trap-user VALUE
set snmp usm user VALUE security-level authNoPriv auth-pass-phrase VALUE authentication-protocol VALUE
set snmp usm user VALUE security-level authNoPriv auth-pass-phrase VALUE authentication-protocol VALUE
set snmp usm user VALUE security-level authPriv auth-pass-phrase VALUE privacy-pass-phrase VALUE privE
set snmp usm user VALUE security-level authPriv auth-pass-phrase VALUE privacy-pass-phrase-hashed priE
set snmp usm user VALUE security-level authPriv privacy-pass-phrase VALUE
set snmp usm user VALUE security-level authPriv privacy-pass-phrase VALUE auth-pass-phrase VALUE
set snmp usm user VALUE usm-read-only
set snmp usm user VALUE usm-read-write
set snmp usm user VALUE vsid VALUE
set snmp vs-direct-access VALUE
set static-mroute VALUE nexthop gateway address VALUE [ priority VALUE ] on
set static-mroute VALUE nexthop gateway address VALUE off
set static-mroute VALUE off
set static-route VALUE comment VALUE
set static-route VALUE nexthop blackhole
set static-route VALUE nexthop gateway address VALUE [ priority VALUE ] on
set static-route VALUE nexthop gateway address VALUE off
set static-route VALUE nexthop gateway address VALUE on
set static-route VALUE nexthop gateway logical VALUE [ priority VALUE ] on
set static-route VALUE nexthop gateway logical VALUE off
set static-route VALUE nexthop reject
set static-route VALUE off
set static-route VALUE ping off
set static-route VALUE ping on
set static-route VALUE rank VALUE
set static-route VALUE scopelocal off
set static-route VALUE scopelocal on
set syslog auditlog VALUE
set syslog cplogs off
set syslog cplogs on
set syslog filename VALUE
set syslog log-remote-address VALUE [ level VALUE ]
set syslog mgmtauditlogs off
set syslog mgmtauditlogs on
set time VALUE
set timezone VALUE / VALUE
set trace bgp VALUE off
set trace bgp VALUE on
set trace bootp VALUE off
set trace bootp VALUE on
set trace cluster VALUE off
set trace cluster VALUE on
set trace dhcp6relay VALUE off
set trace dhcp6relay VALUE on
set trace global VALUE off
set trace global VALUE on
set trace icmp VALUE off
set trace icmp VALUE on
set trace igmp VALUE off
set trace igmp VALUE on
set trace iphelper VALUE off
set trace iphelper VALUE on
set trace kernel VALUE off
set trace kernel VALUE on
set trace mfc VALUE off
set trace mfc VALUE on
set trace ospf VALUE off
set trace ospf VALUE on
set trace ospf3 VALUE off
set trace ospf3 VALUE on
set trace pbr VALUE off
set trace pbr VALUE on
set trace pim VALUE off
set trace pim VALUE on
set trace rip VALUE off
set trace rip VALUE on
set trace ripng VALUE off
set trace ripng VALUE on
set trace router-discovery VALUE off
set trace router-discovery VALUE on
set trace router-discovery6 VALUE off
set trace router-discovery6 VALUE on
set trace vrrp VALUE off
set trace vrrp VALUE on
set trace vrrp6 VALUE off
set trace vrrp6 VALUE on
set tracefile maxnum VALUE
set tracefile size VALUE
set user VALUE force-password-change VALUE
set user VALUE lock-out off
set user VALUE newpass VALUE
set user VALUE password
set user VALUE password-hash VALUE
set user VALUE { realname VALUE uid VALUE gid VALUE homedir VALUE shell VALUE }
set virtual-system VALUE
set volume VALUE size VALUE
set vrrp accept-connections off
set vrrp accept-connections on
set vrrp coldstart-delay VALUE
set vrrp disable-all-virtual-routers off
set vrrp disable-all-virtual-routers on
set vrrp interface VALUE authtype none
set vrrp interface VALUE authtype simple VALUE
set vrrp interface VALUE monitored-circuit vrid VALUE auto-deactivation off
set vrrp interface VALUE monitored-circuit vrid VALUE auto-deactivation on
set vrrp interface VALUE monitored-circuit vrid VALUE backup-address VALUE off
set vrrp interface VALUE monitored-circuit vrid VALUE backup-address VALUE on
set vrrp interface VALUE monitored-circuit vrid VALUE hello-interval VALUE
set vrrp interface VALUE monitored-circuit vrid VALUE monitored-interface VALUE off
set vrrp interface VALUE monitored-circuit vrid VALUE monitored-interface VALUE on
set vrrp interface VALUE monitored-circuit vrid VALUE monitored-interface VALUE priority-delta VALUE
set vrrp interface VALUE monitored-circuit vrid VALUE off
set vrrp interface VALUE monitored-circuit vrid VALUE on
set vrrp interface VALUE monitored-circuit vrid VALUE preempt-mode off
set vrrp interface VALUE monitored-circuit vrid VALUE preempt-mode on
set vrrp interface VALUE monitored-circuit vrid VALUE priority VALUE
set vrrp interface VALUE monitored-circuit vrid VALUE vmac-mode default-vmac
set vrrp interface VALUE monitored-circuit vrid VALUE vmac-mode extended-vmac
set vrrp interface VALUE monitored-circuit vrid VALUE vmac-mode interface-vmac
set vrrp interface VALUE monitored-circuit vrid VALUE vmac-mode static-vmac VALUE
set vrrp interface VALUE off
set vrrp interface VALUE virtual-router legacy off
set vrrp interface-delay VALUE
set vrrp monitor-firewall off
set vrrp monitor-firewall on
set vsx off
set vsx on
set web daemon-enable VALUE
set web session-timeout VALUE
set web ssl-port VALUE
set web ssl3-enabled VALUE
set web table-refresh-rate VALUE
show aaa radius-servers NAS-IP
show aaa radius-servers default-shell
show aaa radius-servers list
show aaa radius-servers priority VALUE host
show aaa radius-servers priority VALUE port
show aaa radius-servers priority VALUE timeout
show aaa radius-servers super-user-uid
show aaa tacacs-servers list
show aaa tacacs-servers priority VALUE server
show aaa tacacs-servers priority VALUE timeout
show aaa tacacs-servers state
show aaa tacacs-servers user-uid
show allowed-client all
show arp announce
show arp dynamic all
show arp proxy all
show arp proxy ipv4-address VALUE
show arp static all
show arp table cache-size
show arp table validity-timeout
show as
show asset VALUE
show backup last-successful
show backup logs
show backup status
show backup-scheduled VALUE
show backups
show bgp
show bgp errors
show bgp groups
show bgp memory
show bgp paths
show bgp peer VALUE advertise
show bgp peer VALUE detailed
show bgp peer VALUE received
show bgp peers
show bgp peers advertise
show bgp peers detailed
show bgp peers established
show bgp peers received
show bgp routemap
show bgp stats
show bgp summary
show bonding group VALUE xmit-hash-policy
show bonding group VALUE { primary mii-interval up-delay down-delay interfaces }
show bonding group VALUE { primary mii-interval up-delay down-delay mode } lacp-rate
show bonding groups
show bootp interface VALUE
show bootp interfaces
show bootp stats
show bootp stats receive
show bootp stats reply
show bootp stats request
show bridging group VALUE fail-open-mode
show bridging group VALUE { interfaces }
show bridging groups
show clienv all
show clienv config-lock
show clienv debug
show clienv echo-cmd
show clienv on-failure
show clienv output
show clienv prompt
show clienv rows
show clienv syntax-check
show clock
show cloning-group local-ip
show cloning-group members
show cloning-group mode
show cloning-group name
show cloning-group shared-feature
show cloning-group state
show cloning-group status
show command VALUE
show commands [ op VALUE feature VALUE ]
show config-lock
show config-state
show configuration aaa
show configuration aggregate
show configuration allowed-client
show configuration arp proxy
show configuration arp static
show configuration as
show configuration backup-scheduled
show configuration bgp
show configuration bonding
show configuration bootp
show configuration bridging
show configuration clienv
show configuration command
show configuration core-dump
show configuration cron
show configuration dhcp-client
show configuration dhcp-server
show configuration dns
show configuration domainname
show configuration edition
show configuration expert-password
show configuration format
show configuration group
show configuration host
show configuration hostname
show configuration igmp
show configuration inbound-route-filter
show configuration installer
show configuration interface
show configuration interface-name
show configuration iphelper
show configuration ipv6 dhcp6relay
show configuration ipv6 inbound-route-filter
show configuration ipv6 ospf3
show configuration ipv6 rdisc6
show configuration ipv6 ripng
show configuration ipv6 route-redistribution
show configuration ipv6 static-route
show configuration ipv6 vrrp6
show configuration ipv6-state
show configuration kernel-routes
show configuration mail-notification
show configuration management
show configuration max-path-splits
show configuration mcvr
show configuration message
show configuration neighbor
show configuration net-access
show configuration netflow
show configuration ntp
show configuration ospf
show configuration password-controls
show configuration pbr
show configuration pbrroute
show configuration pim
show configuration ping
show configuration pppoe
show configuration protocol-rank
show configuration proxy
show configuration rba
show configuration rdisc
show configuration rip
show configuration route-redistribution
show configuration routedsyslog
show configuration routemap VALUE
show configuration routemaps
show configuration router-id
show configuration router-options
show configuration snmp
show configuration static-mroute
show configuration static-route
show configuration syslog
show configuration timezone
show configuration trace
show configuration tracefile
show configuration user
show configuration vpnt
show configuration vrrp
show configuration web
show core-dump per_process
show core-dump status
show core-dump total
show cron job VALUE command
show cron job VALUE recurrence
show cron jobs
show cron mailto
show date
show dhcp client interface VALUE
show dhcp client interfaces
show dhcp server all
show dhcp server status
show dhcp server subnet VALUE ip-pools
show dhcp server subnets
show dns primary
show dns secondary
show dns suffix
show dns tertiary
show domainname
show extended commands
show fcd VALUE all
show format all
show format date
show format netmask
show format time
show group VALUE
show groups
show host name VALUE ipv4
show host name VALUE ipv6
show host names ipv4
show host names ipv6
show hostname
show igmp
show igmp groups interface VALUE
show igmp groups interface VALUE local
show igmp groups interface VALUE static
show igmp groups local
show igmp groups static
show igmp if-stat VALUE
show igmp if-stats
show igmp interface VALUE
show igmp interfaces
show igmp stats
show igmp stats error
show igmp stats receive
show igmp stats transmit
show igmp summary
show inactivity-timeout
show installer mail-notifications VALUE
show installer package VALUE all
show installer package VALUE contained-in
show installer package VALUE contains
show installer package VALUE description
show installer package VALUE display-name
show installer package VALUE downloaded-on
show installer package VALUE imported-on
show installer package VALUE installation-log
show installer package VALUE installed-on
show installer package VALUE recommended
show installer package VALUE requires-reboot
show installer package VALUE size
show installer package VALUE status
show installer package VALUE type
show installer packages all
show installer packages available-for-download
show installer packages downloaded
show installer packages imported
show installer packages installed
show installer packages recommended
show installer policy all
show installer policy auto-compress-snapshot
show installer policy check-for-updates-period
show installer policy downloads
show installer policy periodically-self-update
show installer policy self-test all
show installer policy self-test install-policy
show installer policy self-test network-link-up
show installer policy self-test start-processes
show installer policy send-cpuse-data
show installer status agent
show installer status all
show installer status build
show installer status connection
show installer status license
show installer status update-from-cloud
show interface VALUE 6in4s
show interface VALUE alias VALUE
show interface VALUE aliases
show interface VALUE all
show interface VALUE ipv4-address
show interface VALUE ipv6-address
show interface VALUE ipv6-local-link-address
show interface VALUE loopback VALUE
show interface VALUE loopbacks
show interface VALUE monitor-mode
show interface VALUE protocol-list
show interface VALUE rx-ringsize
show interface VALUE tx-ringsize
show interface VALUE vlans
show interface VALUE { comments mac-addr mtu state speed duplex auto-negotiation type }
show interface VALUE { ipv6-autoconfig }
show interface VALUE { link-state }
show interface VALUE { statistics }
show interfaces all
show iphelper services
show iphelper stats
show ipv6 route
show ipv6 route all
show ipv6 route all bgp
show ipv6 route all direct
show ipv6 route all kernel
show ipv6 route all ospf3
show ipv6 route all ripng
show ipv6 route all static
show ipv6 route bgp
show ipv6 route bgp all
show ipv6 route bgp aspath
show ipv6 route bgp communities
show ipv6 route bgp detailed
show ipv6 route bgp metrics
show ipv6 route bgp suppressed
show ipv6 route destination VALUE
show ipv6 route direct
show ipv6 route direct all
show ipv6 route exact VALUE
show ipv6 route inactive
show ipv6 route inactive bgp
show ipv6 route inactive direct
show ipv6 route inactive kernel
show ipv6 route inactive ospf3
show ipv6 route inactive ripng
show ipv6 route inactive static
show ipv6 route kernel
show ipv6 route kernel all
show ipv6 route less-specific VALUE
show ipv6 route more-specific VALUE
show ipv6 route ospf3
show ipv6 route ospf3 all
show ipv6 route ripng
show ipv6 route ripng all
show ipv6 route static
show ipv6 route static all
show ipv6 route summary
show ipv6-state
show lom ip-address
show lom version
show mail-notification server
show mail-notification username
show management interface
show mcvr vrid VALUE all
show mcvr vrid VALUE authtype
show mcvr vrid VALUE backup-address VALUE
show mcvr vrid VALUE backup-addresses
show mcvr vrid VALUE hello-interval
show mcvr vrid VALUE priority
show mcvr vrid VALUE priority-delta
show mcvr vrids
show message all [ status ]
show message banner [ status ]
show message caption [ status ]
show message motd [ status ]
show mfc cache
show mfc interface
show mfc orphans
show mfc stats
show mfc summary
show neighbor dynamic-table
show neighbor interface-table
show neighbor parameters
show neighbor static-table
show neighbor table
show net-access telnet
show netflow all
show netflow collector [ enable ]
show netflow collector [ export-format ]
show netflow collector [ ip ]
show netflow collector [ port ]
show netflow collector [ srcaddr ]
show netflow collector for-ip VALUE [ enable ]
show netflow collector for-ip VALUE [ export-format ]
show netflow collector for-ip VALUE [ port ]
show netflow collector for-ip VALUE [ srcaddr ]
show netflow collector for-ip VALUE for-port VALUE [ enable ]
show netflow collector for-ip VALUE for-port VALUE [ export-format ]
show netflow collector for-ip VALUE for-port VALUE [ srcaddr ]
show ntp active
show ntp current
show ntp servers
show ospf
show ospf border-routers
show ospf database [ detailed ]
show ospf database area VALUE [ detailed ]
show ospf database areas [ detailed ]
show ospf database asbr-summary-lsa [ detailed ]
show ospf database checksum
show ospf database database-summary
show ospf database external-lsa [ detailed ]
show ospf database network-lsa [ detailed ]
show ospf database nssa-external-lsa [ detailed ]
show ospf database opaque-lsa [ detailed ]
show ospf database router-lsa [ detailed ]
show ospf database summary-lsa [ detailed ]
show ospf database type VALUE [ detailed ]
show ospf errors
show ospf errors dd
show ospf errors hello
show ospf errors ip
show ospf errors lsack
show ospf errors lsr
show ospf errors lsu
show ospf errors protocol
show ospf events
show ospf interface VALUE [ detailed ]
show ospf interface VALUE stats
show ospf interfaces [ detailed ]
show ospf interfaces stats
show ospf neighbor VALUE [ detailed ]
show ospf neighbors [ detailed ]
show ospf packets
show ospf routemap
show ospf summary
show password-controls all
show password-controls complexity
show password-controls deny-on-fail allow-after
show password-controls deny-on-fail block-admin
show password-controls deny-on-fail enable
show password-controls deny-on-fail failures-allowed
show password-controls deny-on-nonuse allowed-days
show password-controls deny-on-nonuse enable
show password-controls expiration-lockout-days
show password-controls expiration-warning-days
show password-controls force-change-when
show password-controls history-checking
show password-controls history-length
show password-controls min-password-length
show password-controls palindrome-check
show password-controls password-expiration
show pbr rules
show pbr summary
show pbr tables
show pbrroute all
show pbrroute sim [ flag ]
show pim
show pim bootstrap
show pim candidate-rp
show pim group-rp-mapping VALUE
show pim interface VALUE
show pim interfaces
show pim joins group VALUE
show pim memory
show pim neighbor VALUE
show pim neighbors
show pim rps
show pim sparse-mode-stats
show pim stats
show pim summary
show pim timers
show pim virtual-interfaces
show ping
show pppoe client id VALUE
show protocol-rank
show proxy address
show proxy port
show rba all
show rba role VALUE
show rba roles
show rba user VALUE
show rba users
show rdisc
show rdisc interface VALUE
show rdisc interfaces
show rdisc stats
show rdisc summary
show restore status
show rip
show rip errors
show rip interface VALUE
show rip interfaces
show rip neighbors
show rip packets
show rip routemap
show rip summary
show route
show route aggregate
show route aggregate all
show route all
show route all aggregate
show route all bgp
show route all direct
show route all kernel
show route all ospf
show route all rip
show route all static
show route bgp
show route bgp all
show route bgp aspath
show route bgp communities
show route bgp detailed
show route bgp metrics
show route bgp suppressed
show route destination VALUE
show route direct
show route direct all
show route exact VALUE
show route inactive
show route inactive aggregate
show route inactive bgp
show route inactive direct
show route inactive kernel
show route inactive ospf
show route inactive rip
show route inactive static
show route kernel
show route kernel all
show route less-specific VALUE
show route more-specific VALUE
show route ospf
show route ospf all
show route rip
show route rip all
show route static
show route static all
show route summary
show routed cluster-state detailed
show routed memory
show routed resources
show routed version
show routemap VALUE all
show routemap VALUE id VALUE
show routemaps
show router-id
show router-options
show snapshot VALUE all
show snapshot VALUE date
show snapshot VALUE desc
show snapshot VALUE size
show snapshots
show snmp agent
show snmp agent-version
show snmp clear-trap
show snmp communities
show snmp community VALUE
show snmp contact
show snmp custom-trap VALUE
show snmp custom-traps-list
show snmp interfaces
show snmp location
show snmp mode
show snmp traps coldStart-threshold
show snmp traps enabled-traps
show snmp traps polling-frequency
show snmp traps receiver VALUE
show snmp traps receivers
show snmp traps trap-user
show snmp usm user VALUE
show snmp usm users
show snmp vs-direct-access
show static-mroute
show sysenv all
show sysenv bios
show sysenv fans
show sysenv ps
show sysenv temp
show sysenv volt
show syslog all
show syslog auditlog
show syslog cplogs
show syslog filename
show syslog log-remote-addresses
show syslog mgmtauditlogs
show tacacs_enable
show time
show timezone
show trace lines VALUE
show trace search VALUE lines VALUE
show upgrade packages
show uptime
show user VALUE
show user VALUE force-password-change
show user VALUE gid
show user VALUE homedir
show user VALUE lock-out
show user VALUE realname
show user VALUE shell
show user VALUE uid
show users
show version all
show version os build
show version os edition
show version os kernel
show version product
show virtual-system all
show volume VALUE
show vpn tunnel VALUE
show vpn tunnels
show vrrp
show vrrp interface VALUE
show vrrp interfaces
show vrrp stats
show vrrp summary
show vsx
show web daemon-enable
show web session-timeout
show web ssl-port
show web ssl3-enabled
show web table-refresh-rate
start transaction
tacacs_enable
upgrade cd
upgrade local VALUE
ver
LSMcli
LSMenabler
SnortConvertor
api
config_system
cp_conf
cpca
cpca_client
cpca_create
cpca_dbutil
cpconfig
cphaprob
cphastart
cphastop
cpinfo
cplic
cpshared_ver
cpstart
cpstat
cpstop
cpview
cpwd_admin
diag
dtps
etmstart
etmstop
fgate
fips
fw
fwaccel
fwm
ifconfig
ips
lomipset
netstat
patch
ping
ping6
raid_diagnostic
raidconfig
rtm
rtmstart
rtmstop
rtmtopsvc
sim
tecli
top
traceroute
vpn
vsec_central_license
vsx_util
