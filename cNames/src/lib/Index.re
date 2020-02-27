external foo: int => unit = "caml_foo";
external bar: int => unit = "caml_bar";

let run = () => {
  foo(5);
  bar(10);
  print_endline("Hello, world");
};
