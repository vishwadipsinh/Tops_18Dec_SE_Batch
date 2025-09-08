const express = require('express');
const { dispCat, addCat, delCat, editCat } = require('../controllers/CatController')
let router = express.Router();

router.get('/',dispCat)
router.post('/add', addCat)



//UI Delete
router.get('/del/:id', delCat)
//API Delete
router.delete('/del/:id', delCat)




//UI Edit
// router.get('/edit/:id', editCat)
//API Edit
router.patch('/edit/:id', editCat)





module.exports=router
