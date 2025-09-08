const { Category, SubCategory } = require('../models/CatModel');



const addCat = async(req, res) => {
    let id = req.body.catid;
    let name = req.body.name;
    // UI
    // if(id!=''){
    // result = await Category.findByIdAndUpdate(id,req.body)
    // } else {
        
    // result = await Category.create({name})
    // }
    // if (result) {
    //     res.redirect('/category')
    // }


    // API
    result = await Category.create({name})
    if (result) {
            res.json({data:result})
        }
}

const dispCat = async (req, res) => {

    const alldata = await Category.find().lean();
    const allsubdata = await SubCategory.find().populate("category").lean();

    //UI
    // res.render('category',{
    //     "catdata": alldata,
    //     "editcat": "",
    //     "editsubcat" : "",
    //     "subcatdata" : allsubdata
    // })


    //API
    res.json({
        catdata: alldata,
        subcatdata : allsubdata
    })
}

const delCat = async (req, res) => {
    let id=req.params.id
    let result = await Category.findByIdAndDelete(id)
    await SubCategory.deleteMany({category :result._id })
    // UI
    // if (result)res.redirect('/category')

    //API
    if (result) res.json({
        data:result,
        msg:"Data Deleted Successfully"
    })
    
}



const editCat = async (req, res) => {
    let id = req.params.id
    //UI EDit
    // let result = await Category.findById(id)

    //API
    result = await Category.findByIdAndUpdate(id, req.body)
    
    //Common in Both
    const alldata = await Category.find().lean();
    const allsubdata = await SubCategory.find().populate("category").lean();
    

    if (result)
    {
    //UI
    // res.render('category',{
    //     "catdata":alldata,
    //     "editcat": result,
    //     "editsubcat" :"",
    //     "subcatdata":allsubdata
    // })
    
   
        //API
        res.json({
            data: result,
            catdata: alldata,
            subcatdata:allsubdata
        })
    }
}

module.exports={addCat,dispCat,delCat,editCat}