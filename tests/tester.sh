./asm/asm champions/jon.s && hexdump -v jon.cor > /tmp/diff_1
./binary/asm champions/jon.s && hexdump -v jon.cor > /tmp/diff_2
diff /tmp/diff_1 /tmp/diff_2
rm jon.cor
