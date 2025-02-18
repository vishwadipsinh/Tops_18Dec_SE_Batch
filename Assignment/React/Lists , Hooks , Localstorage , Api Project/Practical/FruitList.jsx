// • Task 1:
// • Create a React component that renders a list of items (e.g., a list of fruit names).
// Usethe map()function to render each item in the list.import React from 'react';

function FruitList() {
  const fruits = ['Apple', 'Banana', 'Cherry', 'Pineapple', 'BlueBerry'];

  return (
    <div>
      <h1>Fruit List</h1>
      <ul>
        {fruits.map((fruit, index) => (
          <li key={index}>{fruit}</li>
        ))}
      </ul>
    </div>
  );
}

export default FruitList;
