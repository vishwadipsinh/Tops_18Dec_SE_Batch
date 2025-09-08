const express = require('express')
const app = express();
const path = require("path");
const logger = require('./logger')

app.use(express.json());
app.use(logger);

const CatRoutes = require('./routes/CatRoutes')
const SubCatRoutes = require('./routes/SubCatRoutes')

app.set("views", path.join(__dirname, "views"));
app.set('view engine','ejs')

app.use(express.static('public'))
app.use(express.urlencoded({extended:false}))

app.use('/category', CatRoutes)
app.use('/subcategory', SubCatRoutes)

app.listen(5000,()=>{
    console.log("listening on 5000 port");   
})
