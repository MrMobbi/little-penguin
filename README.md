### creating boot log persistent
sudo mkdir -p /var/log/journal
sudo systemd-tmpfiles --create --prefix /var/log/journal
sudo systemctl restart systemd-journald

journalctl -k -b -1     # Previous boot
journalctl -k -b 0      # Current boot
