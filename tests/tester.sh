./asm/asm champions/jon.s && hexdump -v jon.cor > /tmp/diff_1
./binary/asm champions/jon.s && hexdump -v jon.cor > /tmp/diff_2
diff /tmp/diff_1 /tmp/diff_2
rm jon.cor

./asm/asm champions/bill.s && hexdump -v bill.cor > /tmp/diff_1
./binary/asm champions/bill.s && hexdump -v bill.cor > /tmp/diff_2
diff /tmp/diff_1 /tmp/diff_2
rm bill.cor

./asm/asm champions/abel.s && hexdump -v abel.cor > /tmp/diff_1
./binary/asm champions/abel.s && hexdump -v abel.cor > /tmp/diff_2
diff /tmp/diff_1 /tmp/diff_2
rm abel.cor

./asm/asm champions/header.s && hexdump -v header.cor > /tmp/diff_1
./binary/asm champions/header.s && hexdump -v header.cor > /tmp/diff_2
diff /tmp/diff_1 /tmp/diff_2
rm header.cor

./asm/asm champions/pdd.s && hexdump -v pdd.cor > /tmp/diff_1
./binary/asm champions/pdd.s && hexdump -v pdd.cor > /tmp/diff_2
diff /tmp/diff_1 /tmp/diff_2
rm pdd.cor
