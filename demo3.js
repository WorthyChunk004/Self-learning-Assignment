export default function Button() 
{
  function call() {
    console.log("Button Click");
    alert("After Button Click"); 
  }

  return (
    <div>
      <input type="text" name="num1" />
      <button onClick={call}>Click</button>
    </div>
  );
}