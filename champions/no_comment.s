        .name "Jon Snow"
        .comment "ratio"

        sti r1, %:crow, %1
crow:   live %234
        ld %0, r3
        zjmp %:crow
