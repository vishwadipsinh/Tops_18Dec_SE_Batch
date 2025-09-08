const express = require('express');
const { dispCat, addCat, delCat, editCat } = require('../controllers/CatController')
let router = express.Router();

router.get('/',dispCat)
router.post('/add', addCat)
router.get('/del/:id', delCat)
router.get('/edit/:id', editCat)





module.exports=router
