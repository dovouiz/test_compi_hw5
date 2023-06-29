override void foo()
{
  printi(1);
}
override void foo(int x)
{
  printi(2);
}

override int foo(int x)
{
  printi(x);
  return 0;
}

void main()
{
  foo();
  foo(3);
  int x = foo(2);
}
