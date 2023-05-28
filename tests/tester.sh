./asm/asm my_champions/bill.s && hexdump -v bill.cor > /tmp/diff_1
./binary/asm my_champions/bill.s && hexdump -v bill.cor > /tmp/diff_2
diff /tmp/diff_1 /tmp/diff_2
rm bill.cor

./asm/asm my_champions/abel.s && hexdump -v abel.cor > /tmp/diff_1
./binary/asm my_champions/abel.s && hexdump -v abel.cor > /tmp/diff_2
diff /tmp/diff_1 /tmp/diff_2
rm abel.cor

./asm/asm my_champions/header.s && hexdump -v header.cor > /tmp/diff_1
./binary/asm my_champions/header.s && hexdump -v header.cor > /tmp/diff_2
diff /tmp/diff_1 /tmp/diff_2
rm header.cor

./asm/asm my_champions/pdd.s && hexdump -v pdd.cor > /tmp/diff_1
./binary/asm my_champions/pdd.s && hexdump -v pdd.cor > /tmp/diff_2
diff /tmp/diff_1 /tmp/diff_2
rm pdd.cor

./asm/asm my_champions/or.s && hexdump -v or.cor > /tmp/diff_1
./binary/asm my_champions/or.s && hexdump -v or.cor > /tmp/diff_2
diff /tmp/diff_1 /tmp/diff_2
rm or.cor

./asm/asm my_champions/bad_header.s && hexdump -v bad_header.cor > /tmp/diff_1
./binary/asm my_champions/bad_header.s && hexdump -v bad_header.cor > /tmp/diff_2
diff /tmp/diff_1 /tmp/diff_2
rm bad_header.cor
