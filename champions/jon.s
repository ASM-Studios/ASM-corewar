        .name "Jon Snow"
        .comment "Winter is coming"

        sti r4, %:crow, %65534, %ratio
        live %234
crow:   ld %0, r3
        zjmp %:crow
