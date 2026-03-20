let a = 12321;
let org = a;
let rev = 0;
while(a>0)
{
    let digit = a % 10;
    rev = rev * 10 + digit;
    a = Math.floor(a/10);
}
if(org === rev)
{
    console.log("Palindrome number");
}
else
{
    console.log("Not Palindrome number");
}