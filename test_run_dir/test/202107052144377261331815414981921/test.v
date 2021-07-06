
module test;
  initial begin
    assert (1 == 0) else $error("My specific, expected error message!");
    $display("test!");
    $finish;
  end
endmodule
