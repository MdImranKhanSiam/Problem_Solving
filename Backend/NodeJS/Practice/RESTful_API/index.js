const express = require('express');
const app = express();
const my_port = 8080;

app.use(express.json())

app.get('/tshirt', (incoming_data,outgoing_data) => {
    outgoing_data.status(200).send({
        Your_Tshirt: '👕',
        Size: 'XL'
    })
});

app.post('/tshirt/:id',(incoming_data,outgoing_data) => {
    const { id } = incoming_data.params;
    const { logo } = incoming_data.body;

    if( !logo ){
        outgoing_data.status(418).send({message: 'Logo Missing!'})
    }

    outgoing_data.send({
        Your_Tshirt: `👕 with your logo ${logo} and ID: ${id}`,
    });

});


app.listen(
    my_port,
    () => console.log(`Live on http://localhost:${my_port}`)
);

