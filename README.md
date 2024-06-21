# FPGA-Based Stack Controller

## Overview

This project focuses on designing an FPGA-based Stack Controller using a Finite State Machine (FSM). The stack controller manages three primary operations: PUSH (adding data to the stack), POP (removing data from the stack), and EXCHNG (swapping items within the stack). The stack is designed to hold up to five items, with mechanisms in place to handle overflow and underflow conditions.

## Objective

The main objective is to design an efficient and reliable FPGA-based stack controller using Verilog, ensuring proper data management in a Last-In-First-Out (LIFO) manner.

## Team

- Aabis Nasir (20-ES-3)
- Ahtisham Hussain (20-ES-11)
- Fahad Ahmed (20-ES-29)
- Muhammad Shaheer (20-ES-63)

## Introduction

Stacks are fundamental data structures used for organizing data in many systems. This project aims to create a stack controller circuit to manage stack operations efficiently, ensuring that overflow and underflow conditions are properly handled.

## Literature Review

1. **Sagnik Nath, Alexander Derrickson**: An automatic placement and routing methodology for asynchronous SFQ circuit design using Cadence Innovus, focusing on SFQ cells and circuit simulation.
2. **S. N. Shahsavani et al.**: A method for designing large SFQ circuits with a new clock routing technique called HL-tree, reducing chip area significantly.
3. **Innovus Implementation System**: A detailed approach to designing and verifying an 8-bit shift register circuit using Cadence tools.
4. **Vaishali Udar and Sanjeev Sharma**: Analysis of place and route algorithms for FPGA, emphasizing improved circuit performance and reduced delays.
5. **Primal-Dual Method**: Efficient for solving complex real-time problems, adapted for online algorithms in computer science.

## Design Methodology

### Implementing FSM for Stack

1. **Memory Creation**: 
   - Create a memory module in Verilog.
   
2. **Push Operation**: 
   - Write data to memory on receiving a push signal.
   
3. **Pop Operation**: 
   - Read data from memory on receiving a pop signal.
   
4. **Empty and Full Detection**: 
   - Assert signals when the stack is empty or full.
   
5. **States**:
   - **Idle State (S0)**: No operation.
   - **Push State (S1)**: Push data onto the stack.
   - **Pop State (S2)**: Pop data from the stack.

![Picture1](https://github.com/Ahtisham-Hussain/FPGA-Based-Stack-Controller/assets/154002517/99c44eb2-5969-4a01-8251-fa2869ea6f10)

## Implementation Details

- **Index Variable**: Used to control stack operations.
- **Push Operation**: Increment index after writing data.
- **Pop Operation**: Decrement index after reading data.
- **Empty Condition**: When `index` equals 0.
- **Full Condition**: When `index` equals stack depth.

## Verilog Code

```verilog
`timescale 1ns / 1ps

module Stack(
    input clk,
    input rstn,
    input pop,
    input push,
    input [WIDTH-1:0] din,
    output reg [WIDTH-1:0] dout,
    output empty,
    output full
);

parameter WIDTH = 4;
parameter DEPTH = 5;
reg [WIDTH-1:0] stack [DEPTH-1:0];
reg [WIDTH-1:0] index, next_index;
reg [WIDTH-1:0] next_dout;
wire empty, full;

always @ (posedge clk) begin
    if (!rstn) begin
        dout <= 4'd0;
        index <= 1'b0;
    end else begin
        dout <= next_dout;
        index <= next_index;
    end
end

assign empty = (index == 0);
assign full = (index == DEPTH);

always @ (*) begin
    if (push && !full) begin
        stack[index] <= din;
        next_index = index + 1'b1;
    end else if (pop && !empty) begin
        next_dout = stack[index-1'b1];
        next_index = index - 1'b1;
    end else begin
        next_dout = dout;
        next_index = index;
    end
end

endmodule
```

## Testbench

```verilog
module Stack_tb;

reg clk;
reg rstn;
reg pop;
reg push;
reg [3:0] din;
wire empty;
wire full;
wire [3:0] dout;

Stack uut (
    .clk(clk),
    .rstn(rstn),
    .pop(pop),
    .push(push),
    .empty(empty),
    .full(full),
    .din(din),
    .dout(dout)
);

always #5 clk = ~clk;

task reset();
begin
    clk = 1'b1;
    rstn = 1'b0;
    pop = 1'b0;
    push = 1'b0;
    din = 4'd0;
    #30 rstn = 1'b1;
end
endtask

task read_stack();
begin
    pop = 1'b1;
    #10 pop = 1'b0;
end
endtask

task write_stack(input [3:0] din_tb);
begin
    push = 1'b1;
    din = din_tb;
    #10 push = 1'b0;
end
endtask

initial begin
    reset();
    #10;
    repeat(2) begin
        write_stack(4'h1);
        #10;
        write_stack(4'h2);
        #10;
        write_stack(4'h3);
        #10;
        write_stack(4'h4);
        #40;
    end
    read_stack();
    #20;
    read_stack();
    #20;
    write_stack(4'hA);
    #10;
    write_stack(4'hB);
    #40;
    read_stack();
    #20;
    $finish;
end

endmodule
```

## Simulation Result

![Picture2](https://github.com/Ahtisham-Hussain/Traffic-Control-System/assets/154002517/96f0de28-ae15-4281-86e7-2017bc0083f5)

- Stack (RTL Outside Block)

![Picture3](https://github.com/Ahtisham-Hussain/FPGA-Based-Stack-Controller/assets/154002517/6db9508a-6d6f-4f25-8e6a-8d83dce4d9e3)


- Stack (RTL Inside Block)

![Picture4](https://github.com/Ahtisham-Hussain/FPGA-Based-Stack-Controller/assets/154002517/33036b58-969f-49ca-935f-57bcc70fe77f)

## Conclusion

The FPGA-based stack controller using FSM efficiently manages stack operations, serving as a reliable foundation for more complex digital systems requiring stack management functionalities. Future enhancements could further optimize performance and integrate additional features.

## References

1. Sagnik Nath, Alexander Derrickson “An Automatic Placement and Routing Methodology for Asynchronous SFQ Circuit Design” 1051-8223 © 2019 IEEE.
2. S. N. Shahsavani et al., “An integrated row-based cell placement and interconnect synthesis tool for large SFQ logic circuits,” IEEE Trans. Appl. Supercond., vol. 27, no. 4, Jun. 2017.
3. “Innovus implementation system.” Cadence. [Online]. Available: cadence.com/content/cadence-www/global/en_US/home/training/allcourses/86142.html, Accessed: May 20, 2019.
4. Vaishali Udar and Sanjeev Sharma “Analysis of Place and Route Algorithm for Field Programmable Gate Array (FPGA)” 978 -1-4673-5758-6/13© 2013 IEEE.
5. Problems like caching, routing, and balancing loads. It also demonstrates that it can solve classic online problems efficiently.

<br>

**The above README.md provides a structured and detailed overview of the FPGA-based stack controller project, including its objective, methodology, Verilog code, testbench, simulation results, and conclusions.**