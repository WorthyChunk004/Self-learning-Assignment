let a = 1232345;
let orginal = a;
let reverse = 0;
while(a>0)
{
    let digit = a % 10;
    reverse = reverse * 10 + digit;
    a = Math.floor(a/10);
}
if(orginal === reverse)
{
    console.log("Pallindrome");
}
else
{
    console.log("Not Pallindrome");
}

