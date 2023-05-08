        .name "Jon Snow"
        .comment "Winter is coming"

        sti r4, %:cro, %65534
cro:    live %234
        ld %0, r3
        zjmp %:cro
