const express = require('express');
const path = require('path');
const { readFile } = require('fs');
const app = express();

app.use(express.static(path.join(__dirname, 'HTML')));

app.get('/', async (request,response) => {

    readFile('HTML/home.html','utf-8', (err, html) =>
    {
        if(err){
            response.status(500).send('Not available')
        }
        response.send(html);
    })
});

app.listen(process.env.PORT || 3000, () => console.log('App on http://localhost:3000'))