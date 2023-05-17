        .name "Jon Snow"

        .comment "Winter is coming"

        sti r4, %:crow, r3
crow:   live %234
        ld %0, r3
        zjmp %:crow
