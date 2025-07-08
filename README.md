### creating boot log persistent
<p>sudo mkdir -p /var/log/journal</p>
<p>sudo systemd-tmpfiles --create --prefix /var/log/journal</p>
<p>sudo systemctl restart systemd-journald</p>

<p>journalctl -k -b -1     # Previous boot</p>
<p>journalctl -k -b 0      # Current boot</p>


<p>[kernel book](https://lwn.net/Kernel/LDD3/)</p>
<p>[kernel compile](https://itsfoss.com/compile-linux-kernel/)</p>
<p>[patch](https://www.cs.sfu.ca/~ashriram/Courses/CS300/assets/distrib/HW6/Guide_KernelPatches.pdf)</p>
