
const { Category, SubCategory } = require("../models/CatModel");
var fs = require('fs')

const addCat = async (req, res) => {
  if (req.file) {
    req.body.subcatimg = req.file.filename
    
  }

  //UI
  // let id = req.body.subcatid;
  // if (id != "") {
  //   result = await SubCategory.findByIdAndUpdate(id, req.body);
  // } else {
  //   result = await SubCategory.create(req.body);
  // }
  // if (result) {
  //   res.redirect("/category");
  // }

  //API
  result = await SubCategory.create(req.body);
  if (result) {
    res.json({
      data:result
    });
  }
};

const dispCat = async (req, res) => {

  const alldata = await Category.find().lean();
  const allsubdata = await SubCategory.find().populate("category").lean();

  //UI
  // res.render("category", {
  //   catdata: alldata,
  //   subcatdata: allsubdata,
  //   editsubcat: "",
  //   editcat: "",
  // });


  //API
  res.json({
    catdata: alldata,
    subcatdata: allsubdata,
  })
};

const delCat = async (req, res) => {
  let id = req.params.id;
  let getImage = await SubCategory.findById(id)
    fs.unlink('./public/uploads/'+getImage.subcatimg,(err)=>{
        if(err) throw err;
        console.log("File deleted...");
        
    })
  let result = await SubCategory.findByIdAndDelete(id);
  //UI
  // if (result) res.redirect("/subcategory");

  //API
  if (result) res.json({
    data: result,
    msg:"SubCategory Deleted Successfully"
  });
};

const editSubCat = async (req, res) => {
  let id = req.params.id;
  //UI
  // let result = await SubCategory.findById(id);
  
  //API
  if (req.file) {
    req.body.subcatimg = req.file.filename
    
  }
  const result = await SubCategory.findByIdAndUpdate(id, req.body);

  //Common
  const alldata = await Category.find().lean();
  const allsubdata = await SubCategory.find().populate("category").lean();

  //UI
  // if (result) {
  //   res.render("category", {
  //     catdata: alldata,
  //     subcatdata: allsubdata,
  //     editsubcat: result,
  //     editcat: "",
  //   });
  // }

  //API
  if (result) {
    res.json({
      msg:"SubCategory Data Updated Successfully",
      data: result,
      catdata: alldata,
      subcatdata: allsubdata
    })
  }
};

module.exports = { addCat, dispCat, delCat, editSubCat };
