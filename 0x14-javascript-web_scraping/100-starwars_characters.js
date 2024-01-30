#!/usr/bin/node
const request = require('request');
const url = 'https://swapi-api.alx-tools.com/api/films/' + process.argv[2];
request(url, function (error, response, body) {
  if (!error) {
    const result = JSON.parse(body).characters;
    result.forEach(function (actor, index) {
      request(actor, function (error, response, body) {
        if (!error) {
          const character = JSON.parse(body);
          console.log(`${index + 1}: ${character.name}`);
        }
      });
    });
  }
});
