const express = require('express');
const multer = require('multer')

const storage = multer.diskStorage({
    destination: function (req, file, cb) {
       
      cb(null, './public/uploads/')
    },
    filename: function (req, file, cb) {
        let str = file.originalname.split('.')
      const uniqueSuffix = Date.now() + '.' + str[1]
      cb(null, uniqueSuffix)
    }
  })
  
  const upload = multer({ storage: storage })




const { dispCat, addCat, delCat, editSubCat } = require('../controllers/SubCatController')
let router = express.Router();

router.get('/',dispCat)
router.post('/add',upload.single('subcatimg'), addCat)
router.get('/del/:id', delCat)
router.get('/edit/:id', editSubCat)





module.exports = router

