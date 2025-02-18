// Task 2:
// • Create a list of users where each user has a unique id. Render the user list
// usingReact and assign a unique keyto each user.import React from 'react';

function UserList() {
  const users = [
    { id: 1, name: 'Vijay' },
    { id: 2, name: 'Priyank' },
    { id: 3, name: 'Vishwadipsinh' },
    { id: 4, name: 'Jayraj' },
    { id: 5, name: 'Harshid' },
  ];

  return (
    <div>
      <h1>User List</h1>
      <ul>
        {users.map((user) => (
          <li key={user.id}>
            {user.name} (ID: {user.id})
          </li>
        ))}
      </ul>
    </div>
  );
}

export default UserList;
