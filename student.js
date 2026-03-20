import React from "react";

class Student extends React.Component
{
    constructor(props){
        super(props);

        this.state = {
            name: "rohit",
            age:24
        };
    }
    render()
    {
        return (
            <div>
                <h1>Student Details</h1>
                <p>Name:{this.state.name}</p>
                <p>Age:{this.state.age}</p>
            </div>
        );
    }
}

export default Student; 