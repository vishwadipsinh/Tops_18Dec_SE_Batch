// const CatModel = require('../models/CatModel');
// const SubCatModel = require('../models/SubCatModel')
const { Category, SubCategory } = require('../models/CatModel');



const addCat = async(req, res) => {
    // let catname = req.body.catname
    // let result = await CatModel.create({ catname: catname })
    let id = req.body.catid;
    let name = req.body.name;
    if(id!=''){
        // console.log("id", id);
        
    result = await Category.findByIdAndUpdate(id,req.body)
    } else {
        // console.log("name : ",name);
        
    result = await Category.create({name})
    }
    if (result) {
        res.redirect('/category')
    }
}

const dispCat = async (req, res) => {

    const alldata = await Category.find().lean();
    const allsubdata = await SubCategory.find().populate("category").lean();

    // let alldata = await Category.find({})
    // let allsubdata = await SubCategory.find({})

    // console.log(allsubdata)
    res.render('category',{
        "catdata": alldata,
        "editcat": "",
        "editsubcat" : "",
        "subcatdata" : allsubdata
    })
}

const delCat = async (req, res) => {
    let id=req.params.id
    let result = await Category.findByIdAndDelete(id)
    await SubCategory.deleteMany({category :result._id })
    if (result)res.redirect('/category')
}



const editCat = async (req, res) => {
    let id=req.params.id
    let result = await Category.findById(id)
    const alldata = await Category.find().lean();
    const allsubdata = await SubCategory.find().populate("category").lean();
    
    if (result)
    {
    res.render('category',{
        "catdata":alldata,
        "editcat": result,
        "editsubcat" :"",
        "subcatdata":allsubdata
    })
    }
}

module.exports={addCat,dispCat,delCat,editCat}