`ifndef PARAMDEF
    `define PARAMDEF
    `define BIT12G075
    `define FRACWIDTH 12
    `define DATAWIDTH `FRACWIDTH

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // term index: 0, 1, 2, 3, 4, 5, 6, 7
    `define FIXEDSHIFT 2 // starting from FIXEDSHIFT'th cycle, always fixed shift
    `define MULBYPASS 3
    `define MAXTERM 7
    
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // `define EXP0 8'd64 // 8 bit
    // `define EXP1 8'd174 // 8 bit
    
    `define EXP0 12'd1024 // 12 bit
    `define EXP1 12'd2784 // 12 bit

    // `define EXP0 16'd16384 // 16 bit
    // `define EXP1 16'd44536 // 16 bit


    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // `define THD 3'b001 // 0.125
    // `define THD 3'b010 // 0.25
    // `define THD 3'b011 // 0.375
    // `define THD 3'b100 // 0.5
    // `define THD 3'b101 // 0.625
    // `define THD 3'b110 // 0.75
    `define THD 3'b111 // 0.875
`endif