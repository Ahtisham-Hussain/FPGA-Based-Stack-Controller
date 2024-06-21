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

reg [WIDTH-1:0] stack [DEPTH-1:0]; // Memory
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
    if (push && !full) begin // Write
        stack[index] <= din;
        next_index = index + 1'b1;
    end else if (pop && !empty) begin // Read
        next_dout = stack[index-1'b1];
        next_index = index - 1'b1;
    end else begin
        next_dout = dout;
        next_index = index;
    end
end

endmodule
