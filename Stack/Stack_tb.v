`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:55:11 02/13/2024
// Design Name:   Stack
// Module Name:   E:/Stack/Stack_tb.v
// Project Name:  Stack
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Stack
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Stack_tb;

 // Inputs
 reg clk;
 reg rstn;
 reg pop;
 reg push;
 reg [3:0] din;

 // Outputs
 wire empty;
 wire full;
 wire [3:0] dout;

 // Instantiate the Unit Under Test (UUT)
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
 
 task reset();  //reset task
 begin
 clk = 1'b1;
 rstn = 1'b0;
 pop = 1'b0;
 push = 1'b0;
 din = 4'd0;
 #30 rstn = 1'b1;
 end
 endtask

 task read_stack();  //read task
 begin
 pop = 1'b1;
 #10
 pop = 1'b0;
 end
 endtask
   
 task write_stack([3:0]din_tb); //write task
 begin
 push = 1'b1;
 din = din_tb;
 #10 push = 1'b0;
 end
 endtask
  
  // Main code
 initial
 begin
 reset();
 #10;
 repeat(2)
 begin
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