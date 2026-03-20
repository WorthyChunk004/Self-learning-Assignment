import React from "react";

class Loginform extends React.Component
{
    constructor(props)
    {
        super(props);
        this.state = {
            username : "",
            password : "",
            message : ""
        };
    }
    handleChange = (e) => {
        this.setState({
            [e.target.name]: e.target.value
        });
    };
    handleSubmit = (e) => {
        e.preventDefault();
        const {username, password} = this.state;

        if (username === "iet" && password === "iet")
        {
            this.setState({
                message: `Hello ${username}`
            });
        }
        else
        {
            this.setState({
                message:"Invalid credentials"
            });
        }
    };
    render()
    {
        return(
            <div>
                <h1>Login</h1>
                <form onSubmit={this.handleSubmit}>
                <div>
                    <label>Username</label>
                    <input type="text" name="username" value={this.state.username} onChange={this.handleChange}></input><br></br>
                </div>

            <div>
                <label>Password</label>
                <input type="text" name="password" value={this.state.password} onChange={this.handleChange} ></input><br></br>
            </div>    
            <button type="submit">Submit</button>
            </form>
            <h3>{this.state.message}</h3>
            </div>
        );
    }
}
export default Loginform;