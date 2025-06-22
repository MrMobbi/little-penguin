### creating boot log persistent
<p>sudo mkdir -p /var/log/journal</p>
<p>sudo systemd-tmpfiles --create --prefix /var/log/journal</p>
<p>sudo systemctl restart systemd-journald</p>

<p>journalctl -k -b -1     # Previous boot</p>
<p>journalctl -k -b 0      # Current boot</p>

[kernel book](https://sysprog21.github.io/lkmpg/)
