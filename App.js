import logo from './logo.svg';
import './App.css';
import SayHello from './data.js';
import IsPalindrome from './demo1.js'
import Button from './demo3.js';
import Addition from './demo4.js';
import Student from './student.js';
import Counter from './counter.js';
import Loginform from './loginform.js';

function App() {
  return (
    /*<div className="App">
      <header className="App-header">
        <img src={logo} className="App-logo" alt="logo" />
        <p>
          Edit <code>src/App.js</code> and save to reload.
        </p>
        <a
          className="App-link"
          href="https://reactjs.org"
          target="_blank"
          rel="noopener noreferrer"
        >
          Learn React
        </a>
        <h2>
          <SayHello name = {"Rahul"}></SayHello>
          <br/><SayHello name = {"Amit"}></SayHello>
        </h2>
      </header>
    </div>*/
/*  
<div>
  <h2>
    <SayHello name = {"Rahul"}></SayHello>
      <br/><SayHello name = {"Amit"}></SayHello>
  </h2>
</div>*/

<div>
    <h1>Palindrome Checker</h1>
    <Button></Button>
    <Addition></Addition>
    <Student></Student>
    <Counter></Counter>
    <Loginform></Loginform>
</div>

);
}
export default App;
