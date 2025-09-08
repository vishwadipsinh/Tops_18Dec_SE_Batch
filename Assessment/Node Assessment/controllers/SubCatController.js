// const CatModel = require('../models/CatModel');
// const SubCatModel = require('../models/SubCatModel');

const { Category, SubCategory } = require("../models/CatModel");
var fs = require('fs')

const addCat = async (req, res) => {
  // let catname = req.body.catname
  // let result = await SubCatModel.create({ catname: catname })
  // console.log("bodddddyyy",req.body)
  // console.log("rrrrrrrrrrrrrrrrrrrrrrrr",req);
  if (req.file) {
    req.body.subcatimg = req.file.filename
    
  }

  let id = req.body.subcatid;

  // const result = await SubCatModel.create(req.body)

  if (id != "") {
    // console.log("iddddd",id)

    result = await SubCategory.findByIdAndUpdate(id, req.body);
  } else {
    result = await SubCategory.create(req.body);
    // console.log(result)
  }
  if (result) {
    res.redirect("/category");
  }
};

const dispCat = async (req, res) => {
  // let allsubdata = await SubCategory.find({})
  // let alldata = await Category.find({})

  const alldata = await Category.find().lean();
  const allsubdata = await SubCategory.find().populate("category").lean();
  res.render("category", {
    catdata: alldata,
    subcatdata: allsubdata,
    editsubcat: "",
    editcat: "",
  });
};

const delCat = async (req, res) => {
  let id = req.params.id;
  let getImage = await SubCategory.findById(id)
    fs.unlink('./public/uploads/'+getImage.subcatimg,(err)=>{
        if(err) throw err;
        console.log("File deleted...");
        
    })
  let result = await SubCategory.findByIdAndDelete(id);
  if (result) res.redirect("/subcategory");
};

const editSubCat = async (req, res) => {
  let id = req.params.id;
  
  let result = await SubCategory.findById(id);

  const alldata = await Category.find().lean();
  const allsubdata = await SubCategory.find().populate("category").lean();

//   let allsubdata = await SubCategory.find({});
//   let alldata = await Category.find({});

  if (result) {
    // console.log(alldata, allsubdata);
    // console.log("result", result);
    // catdata[i.catid]ss
    res.render("category", {
      catdata: alldata,
      subcatdata: allsubdata,
      editsubcat: result,
      editcat: "",
    });
  }
};

module.exports = { addCat, dispCat, delCat, editSubCat };
